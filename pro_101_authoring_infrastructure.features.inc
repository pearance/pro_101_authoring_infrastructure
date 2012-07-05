<?php
/**
 * @file
 * pro_101_authoring_infrastructure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_authoring_infrastructure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "mollom" && $api == "mollom") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
