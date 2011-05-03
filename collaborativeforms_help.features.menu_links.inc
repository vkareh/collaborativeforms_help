<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function collaborativeforms_help_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:book
  $menu_links['primary-links:book'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:faq
  $menu_links['primary-links:faq'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'Frequently Asked Questions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => 'book',
  );
  // Exported menu link: primary-links:field_defs
  $menu_links['primary-links:field_defs'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'field_defs',
    'router_path' => 'field_defs',
    'link_title' => 'Field definitions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'book',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Field definitions');
  t('Frequently Asked Questions');
  t('Help');


  return $menu_links;
}
