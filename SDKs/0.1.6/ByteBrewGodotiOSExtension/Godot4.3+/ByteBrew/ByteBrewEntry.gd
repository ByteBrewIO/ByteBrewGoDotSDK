extends Node


func _placeholder(status): pass
var on_finish_loading_configs = Callable(self, "_placeholder")
var on_finish_iap_validation = Callable(self, "_placeholder")


func _finish_loading_remote_configs(status):
	on_finish_loading_configs.call(status)


func _finish_iap_validation(purchaseProcessed, isValid, itemID, message, timestamp):
	on_finish_iap_validation.call(purchaseProcessed, isValid, itemID, message, timestamp)
