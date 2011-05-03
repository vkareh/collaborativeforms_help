<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function collaborativeforms_help_user_default_permissions() {
  $permissions = array();

  // Exported permission: access printer-friendly version
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: add content to books
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer book outlines
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer cck field defs
  $permissions['administer cck field defs'] = array(
    'name' => 'administer cck field defs',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer faq
  $permissions['administer faq'] = array(
    'name' => 'administer faq',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: administer faq order
  $permissions['administer faq order'] = array(
    'name' => 'administer faq order',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: administer features
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create faq
  $permissions['create faq'] = array(
    'name' => 'create faq',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: create help content
  $permissions['create help content'] = array(
    'name' => 'create help content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: create new books
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete any help content
  $permissions['delete any help content'] = array(
    'name' => 'delete any help content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: delete faq content
  $permissions['delete faq content'] = array(
    'name' => 'delete faq content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete own faq content
  $permissions['delete own faq content'] = array(
    'name' => 'delete own faq content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: delete own help content
  $permissions['delete own help content'] = array(
    'name' => 'delete own help content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit any help content
  $permissions['edit any help content'] = array(
    'name' => 'edit any help content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: edit definitions
  $permissions['edit definitions'] = array(
    'name' => 'edit definitions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit faq
  $permissions['edit faq'] = array(
    'name' => 'edit faq',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit own faq
  $permissions['edit own faq'] = array(
    'name' => 'edit own faq',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'developer',
    ),
  );

  // Exported permission: edit own help content
  $permissions['edit own help content'] = array(
    'name' => 'edit own help content',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: manage features
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      '0' => 'developer',
    ),
  );

  // Exported permission: view definitions
  $permissions['view definitions'] = array(
    'name' => 'view definitions',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
    ),
  );

  // Exported permission: view faq page
  $permissions['view faq page'] = array(
    'name' => 'view faq page',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'developer',
    ),
  );

  return $permissions;
}
