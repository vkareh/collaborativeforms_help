<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function collaborativeforms_help_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function collaborativeforms_help_node_info() {
  $items = array(
    'help' => array(
      'name' => t('Help'),
      'module' => 'features',
      'description' => t('A <em>help</em> page is organized into a collection of related entries collectively known as a <em>book</em>. A <em>help</em> page automatically displays links to adjacent pages, providing a simple navigation system for organizing and reviewing structured content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
