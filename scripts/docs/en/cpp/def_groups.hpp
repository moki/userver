// File to document groups - entities not tied to a particular file
// NOTE: You can not have a function in multiple groups!

// clang-format off

/// @defgroup userver_base_classes Base Classes
///
/// @brief Base classes that simplify implementation of functionality.


/// @defgroup userver_components Components
///
/// @brief Components that could be added to components::ComponentList for
/// further use with utils::DaemonMain like functions.


/// @defgroup userver_clients Clients
///
/// @brief Clients are classes that provide interfaces for requesting and
/// retrieving data usually from remove server.
///
/// All the clients are asynchronous. In other words, a request suspends the
/// current engine::Task and other coroutines are processed on the task
/// processor. The suspended task resumes execution on the task processor after
/// the data was retrieved.
///
/// It is a common practice to return references to clients from a component.
/// In such cases:
/// * a client lives as long as the component is alive
/// * and it is safe to invoke member function of the client concurrently with
/// a member function invocation of a client of the same type retrieved from
/// the same component.


/// @defgroup userver_http_handlers HTTP Handlers
/// @ingroup userver_components
///
/// @brief Handlers are @ref userver_components "components" that could be used
/// by components::Server to process the incomming requests.
///
/// All the HTTP handlers derive from server::handlers::HttpHandlerBase and
/// override its methods to provide functionality.
///
/// See @ref userver_components "Userver Components" for more information on
/// how to register components.
///
/// ## Configuration
/// All the handlers inherit configuration options from their base classes:
/// * server::handlers::HandlerBase
/// * server::handlers::HttpHandlerBase
///
/// All the components, including handlers, also have the
/// @ref userver_components "load-enabled" option.
///
/// ## Static configuration example:
/// Here's an example of the full config for the server::handlers::Ping handle.
/// @snippet components/common_server_component_list_test.cpp  Sample handler ping component config


/// @defgroup userver_concurrency Concurrency
/// @brief Task construction and @ref md_en_userver_synchronization "synchronization primitives for coroutines"


/// @defgroup userver_containers Containers
///
/// @brief Utility containers

/// @defgroup userver_formats Formats
/// @brief Different containers that @ref md_en_userver_formats "share the same interface and manipulate tree-like formats"
/// @ingroup userver_containers

/// @defgroup userver_formats_serialize Serializers
/// @brief Files with serializers @ref md_en_userver_formats "into formats"
/// @ingroup userver_formats

/// @defgroup userver_formats_serialize_sax SAX Serializers
/// @brief Files with SAX serializers @ref md_en_userver_formats "into formats"
/// @ingroup userver_formats

/// @defgroup userver_formats_parse Parsers
/// @brief Files with parsers @ref md_en_userver_formats "from formats"
/// @ingroup userver_formats

// clang-format on
