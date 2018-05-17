#include "nodeobs_service.hpp"
#include "controller.hpp"
#include "utility-v8.hpp"
#include "error.hpp"

#include "shared.hpp"
#include "utility.hpp"
#include <string>
#include <sstream>
#include <node.h>


void service::OBS_service_resetAudioContext(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_resetAudioContext", {});

	ValidateResponse(response);
}

void service::OBS_service_resetVideoContext(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_resetVideoContext", {});

	ValidateResponse(response);
}

void service::OBS_service_createAudioEncoder(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_createAudioEncoder", {});

	ValidateResponse(response);
}

void service::OBS_service_createVideoStreamingEncoder(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_createVideoStreamingEncoder", {});

	ValidateResponse(response);
}

void service::OBS_service_createVideoRecordingEncoder(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_createVideoRecordingEncoder", {});

	ValidateResponse(response);
}

void service::OBS_service_createService(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_createService", {});

	ValidateResponse(response);
}

void service::OBS_service_createRecordingSettings(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_createRecordingSettings", {});

	ValidateResponse(response);
}

void service::OBS_service_createStreamingOutput(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_createStreamingOutput", {});

	ValidateResponse(response);
}

void service::OBS_service_createRecordingOutput(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_createRecordingOutput", {});

	ValidateResponse(response);
}

void service::OBS_service_startStreaming(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_startStreaming", {});

	ValidateResponse(response);
}

void service::OBS_service_startRecording(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_startRecording", {});

	ValidateResponse(response);
}

void service::OBS_service_stopStreaming(const v8::FunctionCallbackInfo<v8::Value>& args) {
	bool forceStop;
	ASSERT_GET_VALUE(args[0], forceStop);

	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_stopStreaming", 
		{ ipc::value(forceStop) });

	ValidateResponse(response);
}

void service::OBS_service_stopRecording(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", "OBS_service_stopRecording", {});

	ValidateResponse(response);
}

void service::OBS_service_associateAudioAndVideoToTheCurrentStreamingContext(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service", 
			"OBS_service_associateAudioAndVideoToTheCurrentStreamingContext", {});

	ValidateResponse(response);
}

void service::OBS_service_associateAudioAndVideoToTheCurrentRecordingContext(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service",
			"OBS_service_associateAudioAndVideoToTheCurrentRecordingContext", {});

	ValidateResponse(response);
}

void service::OBS_service_associateAudioAndVideoEncodersToTheCurrentStreamingOutput(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service",
			"OBS_service_associateAudioAndVideoEncodersToTheCurrentStreamingOutput", {});

	ValidateResponse(response);
}

void service::OBS_service_associateAudioAndVideoEncodersToTheCurrentRecordingOutput(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service",
			"OBS_service_associateAudioAndVideoEncodersToTheCurrentRecordingOutput", {});

	ValidateResponse(response);
}

void service::OBS_service_setServiceToTheStreamingOutput(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service",
			"OBS_service_setServiceToTheStreamingOutput", {});

	ValidateResponse(response);
}

void service::OBS_service_setRecordingSettings(const v8::FunctionCallbackInfo<v8::Value>& args) {
	auto conn = GetConnection();
	if (!conn) return;

	std::vector<ipc::value> response =
		conn->call_synchronous_helper("Service",
			"OBS_service_setRecordingSettings", {});

	ValidateResponse(response);
	}

Nan::Persistent<v8::FunctionTemplate> Service::prototype = Nan::Persistent<v8::FunctionTemplate>();

void service::OBS_service_connectOutputSignals(const v8::FunctionCallbackInfo<v8::Value>& args) {
	v8::Local<v8::Function> callback;
	ASSERT_GET_VALUE(args[0], callback);

	// Grab IPC Connection
	std::shared_ptr<ipc::client> conn = nullptr;
	if (!(conn = GetConnection())) {
		return;
	}

	// Send request
	std::vector<ipc::value> rval = 
		conn->call_synchronous_helper("Service", "OBS_service_connectOutputSignals", {});
	if (!ValidateResponse(rval)) {
		return;
	}

	if (rval[0].value_union.ui64 != (uint64_t)ErrorCode::Ok) {
		args.GetReturnValue().Set(Nan::Null());
		return;
	}
	
	// Callback
	ServiceCallback *cb_binding = new ServiceCallback(serviceObject, Service::Callback, callback, 20);
	serviceObject->callbacks.push_back(cb_binding);

	/*auto object = ServiceCallback::Store(cb_binding);
	cb_binding->obj_ref.Reset(object);
	args.GetReturnValue().Set(object);*/
}

void Service::Callback(Service* service, SignalInfo* item) {
	if (!item) {
		return;
	}
	if (!service) {
		delete item;
		return;
	}

	/* We're in v8 context here */
	ServiceCallback *cb_binding = reinterpret_cast<ServiceCallback*>(item->param);
	if (!cb_binding) {
		delete item;
		return;
	}

	if (cb_binding->stopped) {
		delete item;
		return;
	}

	// utilv8::ToValue on a std::vector<> creates a v8::Local<v8::Array> automatically.
	v8::Local<v8::Value> args[] = {
		utilv8::ToValue(item->outputType),
		utilv8::ToValue(item->signal),
		utilv8::ToValue(item->code),
		utilv8::ToValue(item->errorMessage)
	};
	delete item;
	Nan::Call(cb_binding->cb, 4, args);
}

void Service::async_query() {
	size_t totalSleepMS = 0;

	while (!query_worker_close) {
		auto tp_start = std::chrono::high_resolution_clock::now();

		// Validate Connection
		auto conn = Controller::GetInstance().GetConnection();
		if (!conn) {
			goto do_sleep;
		}

		// Call
		{
			std::vector<ipc::value> response = 
				conn->call_synchronous_helper("Service", "Query", {});
			if (!response.size() || (response.size() == 1)) {
				goto do_sleep;
			}
				
			ErrorCode error = (ErrorCode)response[0].value_union.ui64;
			if (error == ErrorCode::Ok) {
				for (auto cb : callbacks) {
					SignalInfo* data = new SignalInfo();
					data->outputType = response[1].value_str;
					data->signal = response[2].value_str;
					data->code = response[3].value_union.i32;
					data->errorMessage = response[4].value_str;
					cb->queue.send(data);
				}
			}
		}

	do_sleep:
		auto tp_end = std::chrono::high_resolution_clock::now();
		auto dur = std::chrono::duration_cast<std::chrono::milliseconds>(tp_end - tp_start);
		totalSleepMS = sleepIntervalMS - dur.count();
		std::this_thread::sleep_for(std::chrono::milliseconds(totalSleepMS));
	}
	return;
}

INITIALIZER(nodeobs_service) {
	initializerFunctions.push([](v8::Local<v8::Object> exports) {
		NODE_SET_METHOD(exports, "OBS_service_resetAudioContext", 
			service::OBS_service_resetAudioContext);

		NODE_SET_METHOD(exports, "OBS_service_resetVideoContext", 
			service::OBS_service_resetVideoContext);

		NODE_SET_METHOD(exports, "OBS_service_createAudioEncoder", 
			service::OBS_service_createAudioEncoder);

		NODE_SET_METHOD(exports, "OBS_service_createVideoStreamingEncoder", 
			service::OBS_service_createVideoStreamingEncoder);

		NODE_SET_METHOD(exports, "OBS_service_createVideoRecordingEncoder", 
			service::OBS_service_createVideoRecordingEncoder);

		NODE_SET_METHOD(exports, "OBS_service_createService", 
			service::OBS_service_createService);

		NODE_SET_METHOD(exports, "OBS_service_createRecordingSettings", 
			service::OBS_service_createRecordingSettings);

		NODE_SET_METHOD(exports, "OBS_service_createStreamingOutput", 
			service::OBS_service_createStreamingOutput);

		NODE_SET_METHOD(exports, "OBS_service_createRecordingOutput", 
			service::OBS_service_createRecordingOutput);

		NODE_SET_METHOD(exports, "OBS_service_startStreaming", 
			service::OBS_service_startStreaming);

		NODE_SET_METHOD(exports, "OBS_service_startRecording", 
			service::OBS_service_startRecording);

		NODE_SET_METHOD(exports, "OBS_service_stopRecording", 
			service::OBS_service_stopRecording);

		NODE_SET_METHOD(exports, "OBS_service_associateAudioAndVideoToTheCurrentStreamingContext", 
			service::OBS_service_associateAudioAndVideoToTheCurrentStreamingContext);

		NODE_SET_METHOD(exports, "OBS_service_associateAudioAndVideoToTheCurrentRecordingContext",
			service::OBS_service_associateAudioAndVideoToTheCurrentRecordingContext);

		NODE_SET_METHOD(exports, "OBS_service_associateAudioAndVideoEncodersToTheCurrentStreamingOutput",
			service::OBS_service_associateAudioAndVideoEncodersToTheCurrentStreamingOutput);

		NODE_SET_METHOD(exports, "OBS_service_associateAudioAndVideoEncodersToTheCurrentRecordingOutput",
			service::OBS_service_associateAudioAndVideoEncodersToTheCurrentRecordingOutput);

		NODE_SET_METHOD(exports, "OBS_service_setServiceToTheStreamingOutput",
			service::OBS_service_setServiceToTheStreamingOutput);

		NODE_SET_METHOD(exports, "OBS_service_setRecordingSettings",
			service::OBS_service_setRecordingSettings);

		NODE_SET_METHOD(exports, "OBS_service_connectOutputSignals",
			service::OBS_service_connectOutputSignals);

		serviceObject = new Service();
	});
}