<!DOCTYPE html>
<html class="" lang="en">
<head prefix="og: http://ogp.me/ns#">
<meta charset="utf-8">
<meta content="IE=edge" http-equiv="X-UA-Compatible">
<meta content="object" property="og:type">
<meta content="GitLab" property="og:site_name">
<meta content="main.c · master · SistemasOperativos / Proyecto02" property="og:title">
<meta content="Un administrador de Memoria Distribuida Compartida (DSM) básico." property="og:description">
<meta content="http://git.ec.tec.ac.cr/assets/gitlab_logo-7ae504fe4f68fdebb3c2034e36621930cd36ea87924c11ff65dbcb8ed50dca58.png" property="og:image">
<meta content="http://git.ec.tec.ac.cr/SistemasOperativos/Proyecto02/blob/master/main.c" property="og:url">
<meta content="summary" property="twitter:card">
<meta content="main.c · master · SistemasOperativos / Proyecto02" property="twitter:title">
<meta content="Un administrador de Memoria Distribuida Compartida (DSM) básico." property="twitter:description">
<meta content="http://git.ec.tec.ac.cr/assets/gitlab_logo-7ae504fe4f68fdebb3c2034e36621930cd36ea87924c11ff65dbcb8ed50dca58.png" property="twitter:image">

<title>main.c · master · SistemasOperativos / Proyecto02 · GitLab</title>
<meta content="Un administrador de Memoria Distribuida Compartida (DSM) básico." name="description">
<link rel="shortcut icon" type="image/x-icon" href="/assets/favicon-075eba76312e8421991a0c1f89a89ee81678bcde72319dd3e8047e2a47cd3a42.ico" />
<link rel="stylesheet" media="all" href="/assets/application-98ede375a1bf3e1ad55f71df194dbddcd51c4cd13da16b26f8d8975e8655f366.css" />
<link rel="stylesheet" media="print" href="/assets/print-68eed6d8135d858318821e790e25da27b2b4b9b8dbb1993fa6765d8e2e3e16ee.css" />
<script src="/assets/application-d9d886eac3d7965a04aef901ef543ad523859c1dcb0664b2f2d57d870563abaa.js"></script>
<meta name="csrf-param" content="authenticity_token" />
<meta name="csrf-token" content="RBNoXLk7qVdCEg5QOWcoEu4c7uWf3EnnjAl/12fY4ER3+roENi3DT+w8SQZQ96gvxVtKUpjRNbRGL1gAEY6+jg==" />
<meta content="width=device-width, initial-scale=1, maximum-scale=1" name="viewport">
<meta content="#474D57" name="theme-color">
<link rel="apple-touch-icon" type="image/x-icon" href="/assets/touch-icon-iphone-5a9cee0e8a51212e70b90c87c12f382c428870c0ff67d1eb034d884b78d2dae7.png" />
<link rel="apple-touch-icon" type="image/x-icon" href="/assets/touch-icon-ipad-a6eec6aeb9da138e507593b464fdac213047e49d3093fc30e90d9a995df83ba3.png" sizes="76x76" />
<link rel="apple-touch-icon" type="image/x-icon" href="/assets/touch-icon-iphone-retina-72e2aadf86513a56e050e7f0f2355deaa19cc17ed97bbe5147847f2748e5a3e3.png" sizes="120x120" />
<link rel="apple-touch-icon" type="image/x-icon" href="/assets/touch-icon-ipad-retina-8ebe416f5313483d9c1bc772b5bbe03ecad52a54eba443e5215a22caed2a16a2.png" sizes="152x152" />
<link color="rgb(226, 67, 41)" href="/assets/logo-d36b5212042cebc89b96df4bf6ac24e43db316143e89926c0db839ff694d2de4.svg" rel="mask-icon">
<meta content="/assets/msapplication-tile-1196ec67452f618d39cdd85e2e3a542f76574c071051ae7effbfde01710eb17d.png" name="msapplication-TileImage">
<meta content="#30353E" name="msapplication-TileColor">




<style>
  [data-user-is] {
    display: none !important;
  }
  
  [data-user-is="414"] {
    display: block !important;
  }
  
  [data-user-is="414"][data-display="inline"] {
    display: inline !important;
  }
  
  [data-user-is-not] {
    display: block !important;
  }
  
  [data-user-is-not][data-display="inline"] {
    display: inline !important;
  }
  
  [data-user-is-not="414"] {
    display: none !important;
  }
</style>

</head>

<body class="ui_charcoal" data-group="" data-page="projects:blob:show" data-project="Proyecto02">
<script>
//<![CDATA[
window.gon={};gon.api_version="v3";gon.default_avatar_url="http://git.ec.tec.ac.cr/assets/no_avatar-849f9c04a3a0d0cea2424ae97b27447dc64a7dbfae83c036c45b403392f0e8ba.png";gon.max_file_size=10;gon.relative_url_root="";gon.shortcuts_path="/help/shortcuts";gon.user_color_scheme="white";gon.award_menu_url="/emojis";gon.current_user_id=414;gon.api_token="GyNCSUKrC2p_C578V7Gu";
//]]>
</script>
<script>
  window.project_uploads_path = "/SistemasOperativos/Proyecto02/uploads";
  window.preview_markdown_path = "/SistemasOperativos/Proyecto02/preview_markdown";
</script>

<header class="header-collapsed navbar navbar-fixed-top navbar-gitlab with-horizontal-nav">
<div class="container-fluid">
<div class="header-content">
<button aria-label="Toggle global navigation" class="side-nav-toggle" type="button">
<span class="sr-only">Toggle navigation</span>
<i class="fa fa-bars"></i>
</button>
<button class="navbar-toggle" type="button">
<span class="sr-only">Toggle navigation</span>
<i class="fa fa-ellipsis-v"></i>
</button>
<div class="navbar-collapse collapse">
<ul class="nav navbar-nav">
<li class="hidden-sm hidden-xs">
<div class="has-location-badge search search-form">
<form class="navbar-form" action="/search" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" /><div class="search-input-container">
<div class="location-badge">This project</div>
<div class="search-input-wrap">
<div class="dropdown" data-url="/search/autocomplete">
<input type="search" name="search" id="search" placeholder="Search" class="search-input dropdown-menu-toggle" spellcheck="false" tabindex="1" autocomplete="off" data-toggle="dropdown" />
<div class="dropdown-menu dropdown-select">
<div class="dropdown-content"><ul>
<li>
<a class="is-focused dropdown-menu-empty-link">
Loading...
</a>
</li>
</ul>
</div><div class="dropdown-loading"><i class="fa fa-spinner fa-spin"></i></div>
</div>
<i class="search-icon"></i>
<i class="clear-icon js-clear-input"></i>
</div>
</div>
</div>
<input type="hidden" name="group_id" id="group_id" />
<input type="hidden" name="project_id" id="search_project_id" value="557" />
<input type="hidden" name="search_code" id="search_code" value="true" />
<script>
  gl.projectOptions = gl.projectOptions || {};
  gl.projectOptions["Proyecto02"] = {
    issuesPath: "/SistemasOperativos/Proyecto02/issues",
    mrPath: "/SistemasOperativos/Proyecto02/merge_requests",
    name: "Proyecto02"
  };
</script>
<script>
  gl.dashboardOptions = {
    issuesPath: "http://git.ec.tec.ac.cr/dashboard/issues",
    mrPath: "http://git.ec.tec.ac.cr/dashboard/merge_requests"
  };
</script>
<input type="hidden" name="repository_ref" id="repository_ref" value="master" />

<div class="search-autocomplete-opts hide" data-autocomplete-path="/search/autocomplete" data-autocomplete-project-id="557" data-autocomplete-project-ref="master"></div>
</form></div>

</li>
<li class="visible-sm visible-xs">
<a title="Search" aria-label="Search" data-toggle="tooltip" data-placement="bottom" data-container="body" href="/search"><i class="fa fa-search"></i>
</a></li>
<li>
<a title="Todos" aria-label="Todos" data-toggle="tooltip" data-placement="bottom" data-container="body" href="/dashboard/todos"><i class="fa fa-bell fa-fw"></i>
<span class="badge hidden todos-pending-count">
0
</span>
</a></li>
<li>
<a title="New project" aria-label="New project" data-toggle="tooltip" data-placement="bottom" data-container="body" href="/projects/new"><i class="fa fa-plus fa-fw"></i>
</a></li>
<li class="header-user dropdown">
<a class="header-user-dropdown-toggle" data-toggle="dropdown" href="/u/agarita"><img width="26" height="26" class="header-user-avatar" src="http://www.gravatar.com/avatar/1e81afe01b43763e367fc8bb2ecae96e?s=52&amp;d=identicon" alt="1e81afe01b43763e367fc8bb2ecae96e?s=52&amp;d=identicon" />
<span class="caret"></span>
</a><div class="dropdown-menu-nav dropdown-menu-align-right">
<ul>
<li>
<a class="profile-link" aria-label="Profile" data-user="agarita" href="/u/agarita">Profile</a>
</li>
<li>
<a aria-label="Profile Settings" href="/profile">Profile Settings</a>
</li>
<li class="divider"></li>
<li>
<a class="sign-out-link" aria-label="Sign out" rel="nofollow" data-method="delete" href="/users/sign_out">Sign out</a>
</li>
</ul>
</div>
</li>
</ul>
</div>
<h1 class="title"><a href="/groups/SistemasOperativos">SistemasOperativos</a> / <a class="project-item-select-holder" href="/SistemasOperativos/Proyecto02">Proyecto02</a><i aria-label="Toggle switch project dropdown" data-target=".js-dropdown-menu-projects" data-toggle="dropdown" class="fa fa-chevron-down dropdown-toggle-caret js-projects-dropdown-toggle"></i></h1>
<div class="header-logo">
<a class="home" title="Dashboard" id="logo" href="/"><img src="/uploads/appearance/header_logo/1/Logo_72.png" alt="Logo 72" />
</a></div>
<div class="js-dropdown-menu-projects">
<div class="dropdown-menu dropdown-select dropdown-menu-projects">
<div class="dropdown-title"><span>Go to a project</span><button class="dropdown-title-button dropdown-menu-close" aria-label="Close" type="button"><i class="fa fa-times dropdown-menu-close-icon"></i></button></div>
<div class="dropdown-input"><input type="search" id="" class="dropdown-input-field" placeholder="Search your projects" autocomplete="off" /><i class="fa fa-search dropdown-input-search"></i><i role="button" class="fa fa-times dropdown-input-clear js-dropdown-input-clear"></i></div>
<div class="dropdown-content"></div>
<div class="dropdown-loading"><i class="fa fa-spinner fa-spin"></i></div>
</div>
</div>

</div>
</div>
</header>

<script>
  var findFileURL = "/SistemasOperativos/Proyecto02/find_file/master";
</script>

<div class="page-sidebar-collapsed page-with-sidebar">
<div class="nicescroll sidebar-expanded sidebar-wrapper">
<div class="sidebar-action-buttons">
<a class="nav-header-btn toggle-nav-collapse" title="Open/Close" href="#"><span class="sr-only">Toggle navigation</span>
<i class="fa fa-bars"></i>
</a><a class="nav-header-btn pin-nav-btn has-tooltip  js-nav-pin" title="Pin Navigation" data-placement="right" data-container="body" href="#"><span class="sr-only">Toggle navigation pinning</span>
<i class="fa fa-fw fa-thumb-tack"></i>
</a></div>
<ul class="nav nav-sidebar">
<li class="active home"><a title="Projects" class="dashboard-shortcuts-projects" href="/dashboard/projects"><span>
Projects
</span>
</a></li><li class=""><a title="Todos" href="/dashboard/todos"><span>
Todos
<span class="count">0</span>
</span>
</a></li><li class=""><a class="dashboard-shortcuts-activity" title="Activity" href="/dashboard/activity"><span>
Activity
</span>
</a></li><li class=""><a title="Groups" href="/dashboard/groups"><span>
Groups
</span>
</a></li><li class=""><a title="Milestones" href="/dashboard/milestones"><span>
Milestones
</span>
</a></li><li class=""><a title="Issues" class="dashboard-shortcuts-issues" href="/dashboard/issues?assignee_id=414"><span>
Issues
<span class="count">0</span>
</span>
</a></li><li class=""><a title="Merge Requests" class="dashboard-shortcuts-merge_requests" href="/dashboard/merge_requests?assignee_id=414"><span>
Merge Requests
<span class="count">0</span>
</span>
</a></li><li class=""><a title="Snippets" href="/dashboard/snippets"><span>
Snippets
</span>
</a></li><li class=""><a title="Help" href="/help"><span>
Help
</span>
</a></li><li class=""><a title="Profile Settings" data-placement="bottom" href="/profile"><span>
Profile Settings
</span>
</a></li></ul>

</div>
<div class="layout-nav">
<div class="container-fluid">
<div class="controls">
<div class="dropdown project-settings-dropdown">
<a class="dropdown-new btn btn-default" data-toggle="dropdown" href="#" id="project-settings-button">
<i class="fa fa-cog"></i>
<i class="fa fa-caret-down"></i>
</a>
<ul class="dropdown-menu dropdown-menu-align-right">
<li class=""><a title="Members" class="team-tab tab" href="/SistemasOperativos/Proyecto02/project_members"><span>
Members
</span>
</a></li><li class=""><a title="Groups" href="/SistemasOperativos/Proyecto02/group_links"><span>
Groups
</span>
</a></li><li class=""><a title="Deploy Keys" href="/SistemasOperativos/Proyecto02/deploy_keys"><span>
Deploy Keys
</span>
</a></li><li class=""><a title="Webhooks" href="/SistemasOperativos/Proyecto02/hooks"><span>
Webhooks
</span>
</a></li><li class=""><a title="Services" href="/SistemasOperativos/Proyecto02/services"><span>
Services
</span>
</a></li><li class=""><a title="Protected Branches" href="/SistemasOperativos/Proyecto02/protected_branches"><span>
Protected Branches
</span>
</a></li><li class=""><a title="Runners" href="/SistemasOperativos/Proyecto02/runners"><span>
Runners
</span>
</a></li><li class=""><a title="Variables" href="/SistemasOperativos/Proyecto02/variables"><span>
Variables
</span>
</a></li><li class=""><a title="Triggers" href="/SistemasOperativos/Proyecto02/triggers"><span>
Triggers
</span>
</a></li><li class=""><a title="CI/CD Pipelines" href="/SistemasOperativos/Proyecto02/pipelines/settings"><span>
CI/CD Pipelines
</span>
</a></li>
<li class="divider"></li>
<li>
<a href="/SistemasOperativos/Proyecto02/edit">Edit Project
</a></li>
</ul>
</div>
</div>
<div class="nav-control scrolling-tabs-container">
<div class="fade-left">
<i class="fa fa-angle-left"></i>
</div>
<div class="fade-right">
<i class="fa fa-angle-right"></i>
</div>
<ul class="nav-links scrolling-tabs">
<li class="home"><a title="Project" class="shortcuts-project" href="/SistemasOperativos/Proyecto02"><span>
Project
</span>
</a></li><li class=""><a title="Activity" class="shortcuts-project-activity" href="/SistemasOperativos/Proyecto02/activity"><span>
Activity
</span>
</a></li><li class="active"><a title="Repository" class="shortcuts-tree" href="/SistemasOperativos/Proyecto02/tree/master"><span>
Repository
</span>
</a></li><li class=""><a title="Pipelines" class="shortcuts-pipelines" href="/SistemasOperativos/Proyecto02/pipelines"><span>
Pipelines
</span>
</a></li><li class=""><a title="Graphs" class="shortcuts-graphs" href="/SistemasOperativos/Proyecto02/graphs/master"><span>
Graphs
</span>
</a></li><li class=""><a title="Issues" class="shortcuts-issues" href="/SistemasOperativos/Proyecto02/issues"><span>
Issues
<span class="badge count issue_counter">0</span>
</span>
</a></li><li class=""><a title="Merge Requests" class="shortcuts-merge_requests" href="/SistemasOperativos/Proyecto02/merge_requests"><span>
Merge Requests
<span class="badge count merge_counter">0</span>
</span>
</a></li><li class=""><a title="Wiki" class="shortcuts-wiki" href="/SistemasOperativos/Proyecto02/wikis/home"><span>
Wiki
</span>
</a></li><li class="hidden">
<a title="Network" class="shortcuts-network" href="/SistemasOperativos/Proyecto02/network/master">Network
</a></li>
<li class="hidden">
<a class="shortcuts-new-issue" href="/SistemasOperativos/Proyecto02/issues/new">Create a new issue
</a></li>
<li class="hidden">
<a title="Builds" class="shortcuts-builds" href="/SistemasOperativos/Proyecto02/builds">Builds
</a></li>
<li class="hidden">
<a title="Commits" class="shortcuts-commits" href="/SistemasOperativos/Proyecto02/commits/master">Commits
</a></li>
</ul>
</div>

</div>
</div>
<div class="content-wrapper page-with-layout-nav">


<div class="flash-container flash-container-page">
</div>


<div class=" ">
<div class="content">
<div class="scrolling-tabs-container sub-nav-scroll">
<div class="fade-left">
<i class="fa fa-angle-left"></i>
</div>
<div class="fade-right">
<i class="fa fa-angle-right"></i>
</div>
<div class="nav-links sub-nav scrolling-tabs">
<ul class="container-fluid container-limited">
<li class="active"><a href="/SistemasOperativos/Proyecto02/tree/master">Files
</a></li><li class=""><a href="/SistemasOperativos/Proyecto02/commits/master">Commits
</a></li><li class=""><a href="/SistemasOperativos/Proyecto02/network/master">Network
</a></li><li class=""><a href="/SistemasOperativos/Proyecto02/compare?from=master&amp;to=master">Compare
</a></li><li class=""><a href="/SistemasOperativos/Proyecto02/branches">Branches
</a></li><li class=""><a href="/SistemasOperativos/Proyecto02/tags">Tags
</a></li></ul>
</div>
</div>

<div class="container-fluid container-limited">

<div class="tree-holder" id="tree-holder">
<div class="nav-block">
<div class="tree-ref-holder">
<form class="project-refs-form" action="/SistemasOperativos/Proyecto02/refs/switch" accept-charset="UTF-8" method="get"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="destination" id="destination" value="blob" />
<input type="hidden" name="path" id="path" value="main.c" />
<div class="dropdown">
<button class="dropdown-menu-toggle js-project-refs-dropdown" type="button" data-toggle="dropdown" data-selected="master" data-ref="master" data-refs-url="/SistemasOperativos/Proyecto02/refs"><span class="dropdown-toggle-text">master</span><i class="fa fa-chevron-down"></i></button>
<div class="dropdown-menu dropdown-menu-selectable">
<div class="dropdown-title"><span>Switch branch/tag</span><button class="dropdown-title-button dropdown-menu-close" aria-label="Close" type="button"><i class="fa fa-times dropdown-menu-close-icon"></i></button></div>
<div class="dropdown-input"><input type="search" id="" class="dropdown-input-field" placeholder="Search branches and tags" autocomplete="off" /><i class="fa fa-search dropdown-input-search"></i><i role="button" class="fa fa-times dropdown-input-clear js-dropdown-input-clear"></i></div>
<div class="dropdown-content"></div>
<div class="dropdown-loading"><i class="fa fa-spinner fa-spin"></i></div>
</div>
</div>
</form>
</div>
<ul class="breadcrumb repo-breadcrumb">
<li>
<a href="/SistemasOperativos/Proyecto02/tree/master">Proyecto02
</a></li>
<li>
<a href="/SistemasOperativos/Proyecto02/blob/master/main.c"><strong>
main.c
</strong>
</a></li>
</ul>
</div>
<ul class="blob-commit-info hidden-xs">
<li class="commit js-toggle-container" id="commit-33323498">
<a href="/u/agarita"><img class="avatar has-tooltip hidden-xs s36" alt="Alejandro&#39;s avatar" title="Alejandro" src="http://www.gravatar.com/avatar/1e81afe01b43763e367fc8bb2ecae96e?s=72&amp;d=identicon" /></a>
<div class="commit-info-block">
<div class="commit-row-title">
<span class="item-title">
<a class="commit-row-message" href="/SistemasOperativos/Proyecto02/commit/33323498608a6a46c85f86622d4d60ae1f2fd10b">Limpieza opciones de comando</a>
<span class="commit-row-message visible-xs-inline">
&middot;
33323498
</span>
</span>
<div class="commit-actions hidden-xs">
<button class="btn btn-clipboard" data-toggle="tooltip" data-placement="bottom" data-container="body" data-clipboard-text="33323498608a6a46c85f86622d4d60ae1f2fd10b" type="button" title="Copy to Clipboard"><i class="fa fa-clipboard"></i></button>
<a class="commit-short-id btn btn-transparent" href="/SistemasOperativos/Proyecto02/commit/33323498608a6a46c85f86622d4d60ae1f2fd10b">33323498</a>

</div>
</div>
<div class="commit-row-info">
<a class="commit-author-link has-tooltip" title="luisgc2009@gmail.com" href="/u/agarita">Alejandro</a>
authored
<time class="js-timeago js-timeago-pending" datetime="2019-11-23T20:22:43Z" title="Nov 23, 2019 8:22pm" data-toggle="tooltip" data-placement="top" data-container="body">2019-11-23 14:22:43 -0600</time><script>
//<![CDATA[
$('.js-timeago-pending').removeClass('js-timeago-pending').timeago()
//]]>
</script>
</div>
</div>
</li>

</ul>
<div class="blob-content-holder" id="blob-content-holder">
<article class="file-holder">
<div class="file-title">
<i class="fa fa-file-text-o fa-fw"></i>
<strong>
main.c
</strong>
<small>
4.78 KB
</small>
<div class="file-actions hidden-xs">
<div class="btn-group tree-btn-group">
<a class="btn btn-sm" target="_blank" href="/SistemasOperativos/Proyecto02/raw/master/main.c">Raw</a>
<a class="btn btn-sm" href="/SistemasOperativos/Proyecto02/blame/master/main.c">Blame</a>
<a class="btn btn-sm" href="/SistemasOperativos/Proyecto02/commits/master/main.c">History</a>
<a class="btn btn-sm" href="/SistemasOperativos/Proyecto02/blob/33323498608a6a46c85f86622d4d60ae1f2fd10b/main.c">Permalink</a>
</div>
<div class="btn-group" role="group">
<a class="btn btn-sm" href="/SistemasOperativos/Proyecto02/edit/master/main.c">Edit</a>
<button name="button" type="submit" class="btn btn-default" data-target="#modal-upload-blob" data-toggle="modal">Replace</button>
<button name="button" type="submit" class="btn btn-remove" data-target="#modal-remove-blob" data-toggle="modal">Delete</button>
</div>

</div>
</div>
<div class="file-content code js-syntax-highlight">
<div class="line-numbers">
<a class="diff-line-num" data-line-number="1" href="#L1" id="L1">
<i class="fa fa-link"></i>
1
</a>
<a class="diff-line-num" data-line-number="2" href="#L2" id="L2">
<i class="fa fa-link"></i>
2
</a>
<a class="diff-line-num" data-line-number="3" href="#L3" id="L3">
<i class="fa fa-link"></i>
3
</a>
<a class="diff-line-num" data-line-number="4" href="#L4" id="L4">
<i class="fa fa-link"></i>
4
</a>
<a class="diff-line-num" data-line-number="5" href="#L5" id="L5">
<i class="fa fa-link"></i>
5
</a>
<a class="diff-line-num" data-line-number="6" href="#L6" id="L6">
<i class="fa fa-link"></i>
6
</a>
<a class="diff-line-num" data-line-number="7" href="#L7" id="L7">
<i class="fa fa-link"></i>
7
</a>
<a class="diff-line-num" data-line-number="8" href="#L8" id="L8">
<i class="fa fa-link"></i>
8
</a>
<a class="diff-line-num" data-line-number="9" href="#L9" id="L9">
<i class="fa fa-link"></i>
9
</a>
<a class="diff-line-num" data-line-number="10" href="#L10" id="L10">
<i class="fa fa-link"></i>
10
</a>
<a class="diff-line-num" data-line-number="11" href="#L11" id="L11">
<i class="fa fa-link"></i>
11
</a>
<a class="diff-line-num" data-line-number="12" href="#L12" id="L12">
<i class="fa fa-link"></i>
12
</a>
<a class="diff-line-num" data-line-number="13" href="#L13" id="L13">
<i class="fa fa-link"></i>
13
</a>
<a class="diff-line-num" data-line-number="14" href="#L14" id="L14">
<i class="fa fa-link"></i>
14
</a>
<a class="diff-line-num" data-line-number="15" href="#L15" id="L15">
<i class="fa fa-link"></i>
15
</a>
<a class="diff-line-num" data-line-number="16" href="#L16" id="L16">
<i class="fa fa-link"></i>
16
</a>
<a class="diff-line-num" data-line-number="17" href="#L17" id="L17">
<i class="fa fa-link"></i>
17
</a>
<a class="diff-line-num" data-line-number="18" href="#L18" id="L18">
<i class="fa fa-link"></i>
18
</a>
<a class="diff-line-num" data-line-number="19" href="#L19" id="L19">
<i class="fa fa-link"></i>
19
</a>
<a class="diff-line-num" data-line-number="20" href="#L20" id="L20">
<i class="fa fa-link"></i>
20
</a>
<a class="diff-line-num" data-line-number="21" href="#L21" id="L21">
<i class="fa fa-link"></i>
21
</a>
<a class="diff-line-num" data-line-number="22" href="#L22" id="L22">
<i class="fa fa-link"></i>
22
</a>
<a class="diff-line-num" data-line-number="23" href="#L23" id="L23">
<i class="fa fa-link"></i>
23
</a>
<a class="diff-line-num" data-line-number="24" href="#L24" id="L24">
<i class="fa fa-link"></i>
24
</a>
<a class="diff-line-num" data-line-number="25" href="#L25" id="L25">
<i class="fa fa-link"></i>
25
</a>
<a class="diff-line-num" data-line-number="26" href="#L26" id="L26">
<i class="fa fa-link"></i>
26
</a>
<a class="diff-line-num" data-line-number="27" href="#L27" id="L27">
<i class="fa fa-link"></i>
27
</a>
<a class="diff-line-num" data-line-number="28" href="#L28" id="L28">
<i class="fa fa-link"></i>
28
</a>
<a class="diff-line-num" data-line-number="29" href="#L29" id="L29">
<i class="fa fa-link"></i>
29
</a>
<a class="diff-line-num" data-line-number="30" href="#L30" id="L30">
<i class="fa fa-link"></i>
30
</a>
<a class="diff-line-num" data-line-number="31" href="#L31" id="L31">
<i class="fa fa-link"></i>
31
</a>
<a class="diff-line-num" data-line-number="32" href="#L32" id="L32">
<i class="fa fa-link"></i>
32
</a>
<a class="diff-line-num" data-line-number="33" href="#L33" id="L33">
<i class="fa fa-link"></i>
33
</a>
<a class="diff-line-num" data-line-number="34" href="#L34" id="L34">
<i class="fa fa-link"></i>
34
</a>
<a class="diff-line-num" data-line-number="35" href="#L35" id="L35">
<i class="fa fa-link"></i>
35
</a>
<a class="diff-line-num" data-line-number="36" href="#L36" id="L36">
<i class="fa fa-link"></i>
36
</a>
<a class="diff-line-num" data-line-number="37" href="#L37" id="L37">
<i class="fa fa-link"></i>
37
</a>
<a class="diff-line-num" data-line-number="38" href="#L38" id="L38">
<i class="fa fa-link"></i>
38
</a>
<a class="diff-line-num" data-line-number="39" href="#L39" id="L39">
<i class="fa fa-link"></i>
39
</a>
<a class="diff-line-num" data-line-number="40" href="#L40" id="L40">
<i class="fa fa-link"></i>
40
</a>
<a class="diff-line-num" data-line-number="41" href="#L41" id="L41">
<i class="fa fa-link"></i>
41
</a>
<a class="diff-line-num" data-line-number="42" href="#L42" id="L42">
<i class="fa fa-link"></i>
42
</a>
<a class="diff-line-num" data-line-number="43" href="#L43" id="L43">
<i class="fa fa-link"></i>
43
</a>
<a class="diff-line-num" data-line-number="44" href="#L44" id="L44">
<i class="fa fa-link"></i>
44
</a>
<a class="diff-line-num" data-line-number="45" href="#L45" id="L45">
<i class="fa fa-link"></i>
45
</a>
<a class="diff-line-num" data-line-number="46" href="#L46" id="L46">
<i class="fa fa-link"></i>
46
</a>
<a class="diff-line-num" data-line-number="47" href="#L47" id="L47">
<i class="fa fa-link"></i>
47
</a>
<a class="diff-line-num" data-line-number="48" href="#L48" id="L48">
<i class="fa fa-link"></i>
48
</a>
<a class="diff-line-num" data-line-number="49" href="#L49" id="L49">
<i class="fa fa-link"></i>
49
</a>
<a class="diff-line-num" data-line-number="50" href="#L50" id="L50">
<i class="fa fa-link"></i>
50
</a>
<a class="diff-line-num" data-line-number="51" href="#L51" id="L51">
<i class="fa fa-link"></i>
51
</a>
<a class="diff-line-num" data-line-number="52" href="#L52" id="L52">
<i class="fa fa-link"></i>
52
</a>
<a class="diff-line-num" data-line-number="53" href="#L53" id="L53">
<i class="fa fa-link"></i>
53
</a>
<a class="diff-line-num" data-line-number="54" href="#L54" id="L54">
<i class="fa fa-link"></i>
54
</a>
<a class="diff-line-num" data-line-number="55" href="#L55" id="L55">
<i class="fa fa-link"></i>
55
</a>
<a class="diff-line-num" data-line-number="56" href="#L56" id="L56">
<i class="fa fa-link"></i>
56
</a>
<a class="diff-line-num" data-line-number="57" href="#L57" id="L57">
<i class="fa fa-link"></i>
57
</a>
<a class="diff-line-num" data-line-number="58" href="#L58" id="L58">
<i class="fa fa-link"></i>
58
</a>
<a class="diff-line-num" data-line-number="59" href="#L59" id="L59">
<i class="fa fa-link"></i>
59
</a>
<a class="diff-line-num" data-line-number="60" href="#L60" id="L60">
<i class="fa fa-link"></i>
60
</a>
<a class="diff-line-num" data-line-number="61" href="#L61" id="L61">
<i class="fa fa-link"></i>
61
</a>
<a class="diff-line-num" data-line-number="62" href="#L62" id="L62">
<i class="fa fa-link"></i>
62
</a>
<a class="diff-line-num" data-line-number="63" href="#L63" id="L63">
<i class="fa fa-link"></i>
63
</a>
<a class="diff-line-num" data-line-number="64" href="#L64" id="L64">
<i class="fa fa-link"></i>
64
</a>
<a class="diff-line-num" data-line-number="65" href="#L65" id="L65">
<i class="fa fa-link"></i>
65
</a>
<a class="diff-line-num" data-line-number="66" href="#L66" id="L66">
<i class="fa fa-link"></i>
66
</a>
<a class="diff-line-num" data-line-number="67" href="#L67" id="L67">
<i class="fa fa-link"></i>
67
</a>
<a class="diff-line-num" data-line-number="68" href="#L68" id="L68">
<i class="fa fa-link"></i>
68
</a>
<a class="diff-line-num" data-line-number="69" href="#L69" id="L69">
<i class="fa fa-link"></i>
69
</a>
<a class="diff-line-num" data-line-number="70" href="#L70" id="L70">
<i class="fa fa-link"></i>
70
</a>
<a class="diff-line-num" data-line-number="71" href="#L71" id="L71">
<i class="fa fa-link"></i>
71
</a>
<a class="diff-line-num" data-line-number="72" href="#L72" id="L72">
<i class="fa fa-link"></i>
72
</a>
<a class="diff-line-num" data-line-number="73" href="#L73" id="L73">
<i class="fa fa-link"></i>
73
</a>
<a class="diff-line-num" data-line-number="74" href="#L74" id="L74">
<i class="fa fa-link"></i>
74
</a>
<a class="diff-line-num" data-line-number="75" href="#L75" id="L75">
<i class="fa fa-link"></i>
75
</a>
<a class="diff-line-num" data-line-number="76" href="#L76" id="L76">
<i class="fa fa-link"></i>
76
</a>
<a class="diff-line-num" data-line-number="77" href="#L77" id="L77">
<i class="fa fa-link"></i>
77
</a>
<a class="diff-line-num" data-line-number="78" href="#L78" id="L78">
<i class="fa fa-link"></i>
78
</a>
<a class="diff-line-num" data-line-number="79" href="#L79" id="L79">
<i class="fa fa-link"></i>
79
</a>
<a class="diff-line-num" data-line-number="80" href="#L80" id="L80">
<i class="fa fa-link"></i>
80
</a>
<a class="diff-line-num" data-line-number="81" href="#L81" id="L81">
<i class="fa fa-link"></i>
81
</a>
<a class="diff-line-num" data-line-number="82" href="#L82" id="L82">
<i class="fa fa-link"></i>
82
</a>
<a class="diff-line-num" data-line-number="83" href="#L83" id="L83">
<i class="fa fa-link"></i>
83
</a>
<a class="diff-line-num" data-line-number="84" href="#L84" id="L84">
<i class="fa fa-link"></i>
84
</a>
<a class="diff-line-num" data-line-number="85" href="#L85" id="L85">
<i class="fa fa-link"></i>
85
</a>
<a class="diff-line-num" data-line-number="86" href="#L86" id="L86">
<i class="fa fa-link"></i>
86
</a>
<a class="diff-line-num" data-line-number="87" href="#L87" id="L87">
<i class="fa fa-link"></i>
87
</a>
<a class="diff-line-num" data-line-number="88" href="#L88" id="L88">
<i class="fa fa-link"></i>
88
</a>
<a class="diff-line-num" data-line-number="89" href="#L89" id="L89">
<i class="fa fa-link"></i>
89
</a>
<a class="diff-line-num" data-line-number="90" href="#L90" id="L90">
<i class="fa fa-link"></i>
90
</a>
<a class="diff-line-num" data-line-number="91" href="#L91" id="L91">
<i class="fa fa-link"></i>
91
</a>
<a class="diff-line-num" data-line-number="92" href="#L92" id="L92">
<i class="fa fa-link"></i>
92
</a>
<a class="diff-line-num" data-line-number="93" href="#L93" id="L93">
<i class="fa fa-link"></i>
93
</a>
<a class="diff-line-num" data-line-number="94" href="#L94" id="L94">
<i class="fa fa-link"></i>
94
</a>
<a class="diff-line-num" data-line-number="95" href="#L95" id="L95">
<i class="fa fa-link"></i>
95
</a>
<a class="diff-line-num" data-line-number="96" href="#L96" id="L96">
<i class="fa fa-link"></i>
96
</a>
<a class="diff-line-num" data-line-number="97" href="#L97" id="L97">
<i class="fa fa-link"></i>
97
</a>
<a class="diff-line-num" data-line-number="98" href="#L98" id="L98">
<i class="fa fa-link"></i>
98
</a>
<a class="diff-line-num" data-line-number="99" href="#L99" id="L99">
<i class="fa fa-link"></i>
99
</a>
<a class="diff-line-num" data-line-number="100" href="#L100" id="L100">
<i class="fa fa-link"></i>
100
</a>
<a class="diff-line-num" data-line-number="101" href="#L101" id="L101">
<i class="fa fa-link"></i>
101
</a>
<a class="diff-line-num" data-line-number="102" href="#L102" id="L102">
<i class="fa fa-link"></i>
102
</a>
<a class="diff-line-num" data-line-number="103" href="#L103" id="L103">
<i class="fa fa-link"></i>
103
</a>
<a class="diff-line-num" data-line-number="104" href="#L104" id="L104">
<i class="fa fa-link"></i>
104
</a>
<a class="diff-line-num" data-line-number="105" href="#L105" id="L105">
<i class="fa fa-link"></i>
105
</a>
<a class="diff-line-num" data-line-number="106" href="#L106" id="L106">
<i class="fa fa-link"></i>
106
</a>
<a class="diff-line-num" data-line-number="107" href="#L107" id="L107">
<i class="fa fa-link"></i>
107
</a>
<a class="diff-line-num" data-line-number="108" href="#L108" id="L108">
<i class="fa fa-link"></i>
108
</a>
<a class="diff-line-num" data-line-number="109" href="#L109" id="L109">
<i class="fa fa-link"></i>
109
</a>
<a class="diff-line-num" data-line-number="110" href="#L110" id="L110">
<i class="fa fa-link"></i>
110
</a>
<a class="diff-line-num" data-line-number="111" href="#L111" id="L111">
<i class="fa fa-link"></i>
111
</a>
<a class="diff-line-num" data-line-number="112" href="#L112" id="L112">
<i class="fa fa-link"></i>
112
</a>
<a class="diff-line-num" data-line-number="113" href="#L113" id="L113">
<i class="fa fa-link"></i>
113
</a>
<a class="diff-line-num" data-line-number="114" href="#L114" id="L114">
<i class="fa fa-link"></i>
114
</a>
<a class="diff-line-num" data-line-number="115" href="#L115" id="L115">
<i class="fa fa-link"></i>
115
</a>
<a class="diff-line-num" data-line-number="116" href="#L116" id="L116">
<i class="fa fa-link"></i>
116
</a>
<a class="diff-line-num" data-line-number="117" href="#L117" id="L117">
<i class="fa fa-link"></i>
117
</a>
<a class="diff-line-num" data-line-number="118" href="#L118" id="L118">
<i class="fa fa-link"></i>
118
</a>
<a class="diff-line-num" data-line-number="119" href="#L119" id="L119">
<i class="fa fa-link"></i>
119
</a>
<a class="diff-line-num" data-line-number="120" href="#L120" id="L120">
<i class="fa fa-link"></i>
120
</a>
<a class="diff-line-num" data-line-number="121" href="#L121" id="L121">
<i class="fa fa-link"></i>
121
</a>
<a class="diff-line-num" data-line-number="122" href="#L122" id="L122">
<i class="fa fa-link"></i>
122
</a>
<a class="diff-line-num" data-line-number="123" href="#L123" id="L123">
<i class="fa fa-link"></i>
123
</a>
<a class="diff-line-num" data-line-number="124" href="#L124" id="L124">
<i class="fa fa-link"></i>
124
</a>
<a class="diff-line-num" data-line-number="125" href="#L125" id="L125">
<i class="fa fa-link"></i>
125
</a>
<a class="diff-line-num" data-line-number="126" href="#L126" id="L126">
<i class="fa fa-link"></i>
126
</a>
<a class="diff-line-num" data-line-number="127" href="#L127" id="L127">
<i class="fa fa-link"></i>
127
</a>
<a class="diff-line-num" data-line-number="128" href="#L128" id="L128">
<i class="fa fa-link"></i>
128
</a>
<a class="diff-line-num" data-line-number="129" href="#L129" id="L129">
<i class="fa fa-link"></i>
129
</a>
<a class="diff-line-num" data-line-number="130" href="#L130" id="L130">
<i class="fa fa-link"></i>
130
</a>
<a class="diff-line-num" data-line-number="131" href="#L131" id="L131">
<i class="fa fa-link"></i>
131
</a>
<a class="diff-line-num" data-line-number="132" href="#L132" id="L132">
<i class="fa fa-link"></i>
132
</a>
<a class="diff-line-num" data-line-number="133" href="#L133" id="L133">
<i class="fa fa-link"></i>
133
</a>
<a class="diff-line-num" data-line-number="134" href="#L134" id="L134">
<i class="fa fa-link"></i>
134
</a>
<a class="diff-line-num" data-line-number="135" href="#L135" id="L135">
<i class="fa fa-link"></i>
135
</a>
<a class="diff-line-num" data-line-number="136" href="#L136" id="L136">
<i class="fa fa-link"></i>
136
</a>
<a class="diff-line-num" data-line-number="137" href="#L137" id="L137">
<i class="fa fa-link"></i>
137
</a>
<a class="diff-line-num" data-line-number="138" href="#L138" id="L138">
<i class="fa fa-link"></i>
138
</a>
<a class="diff-line-num" data-line-number="139" href="#L139" id="L139">
<i class="fa fa-link"></i>
139
</a>
<a class="diff-line-num" data-line-number="140" href="#L140" id="L140">
<i class="fa fa-link"></i>
140
</a>
<a class="diff-line-num" data-line-number="141" href="#L141" id="L141">
<i class="fa fa-link"></i>
141
</a>
<a class="diff-line-num" data-line-number="142" href="#L142" id="L142">
<i class="fa fa-link"></i>
142
</a>
<a class="diff-line-num" data-line-number="143" href="#L143" id="L143">
<i class="fa fa-link"></i>
143
</a>
<a class="diff-line-num" data-line-number="144" href="#L144" id="L144">
<i class="fa fa-link"></i>
144
</a>
<a class="diff-line-num" data-line-number="145" href="#L145" id="L145">
<i class="fa fa-link"></i>
145
</a>
<a class="diff-line-num" data-line-number="146" href="#L146" id="L146">
<i class="fa fa-link"></i>
146
</a>
<a class="diff-line-num" data-line-number="147" href="#L147" id="L147">
<i class="fa fa-link"></i>
147
</a>
<a class="diff-line-num" data-line-number="148" href="#L148" id="L148">
<i class="fa fa-link"></i>
148
</a>
<a class="diff-line-num" data-line-number="149" href="#L149" id="L149">
<i class="fa fa-link"></i>
149
</a>
<a class="diff-line-num" data-line-number="150" href="#L150" id="L150">
<i class="fa fa-link"></i>
150
</a>
<a class="diff-line-num" data-line-number="151" href="#L151" id="L151">
<i class="fa fa-link"></i>
151
</a>
<a class="diff-line-num" data-line-number="152" href="#L152" id="L152">
<i class="fa fa-link"></i>
152
</a>
<a class="diff-line-num" data-line-number="153" href="#L153" id="L153">
<i class="fa fa-link"></i>
153
</a>
<a class="diff-line-num" data-line-number="154" href="#L154" id="L154">
<i class="fa fa-link"></i>
154
</a>
<a class="diff-line-num" data-line-number="155" href="#L155" id="L155">
<i class="fa fa-link"></i>
155
</a>
<a class="diff-line-num" data-line-number="156" href="#L156" id="L156">
<i class="fa fa-link"></i>
156
</a>
<a class="diff-line-num" data-line-number="157" href="#L157" id="L157">
<i class="fa fa-link"></i>
157
</a>
<a class="diff-line-num" data-line-number="158" href="#L158" id="L158">
<i class="fa fa-link"></i>
158
</a>
<a class="diff-line-num" data-line-number="159" href="#L159" id="L159">
<i class="fa fa-link"></i>
159
</a>
<a class="diff-line-num" data-line-number="160" href="#L160" id="L160">
<i class="fa fa-link"></i>
160
</a>
<a class="diff-line-num" data-line-number="161" href="#L161" id="L161">
<i class="fa fa-link"></i>
161
</a>
<a class="diff-line-num" data-line-number="162" href="#L162" id="L162">
<i class="fa fa-link"></i>
162
</a>
<a class="diff-line-num" data-line-number="163" href="#L163" id="L163">
<i class="fa fa-link"></i>
163
</a>
<a class="diff-line-num" data-line-number="164" href="#L164" id="L164">
<i class="fa fa-link"></i>
164
</a>
<a class="diff-line-num" data-line-number="165" href="#L165" id="L165">
<i class="fa fa-link"></i>
165
</a>
<a class="diff-line-num" data-line-number="166" href="#L166" id="L166">
<i class="fa fa-link"></i>
166
</a>
<a class="diff-line-num" data-line-number="167" href="#L167" id="L167">
<i class="fa fa-link"></i>
167
</a>
<a class="diff-line-num" data-line-number="168" href="#L168" id="L168">
<i class="fa fa-link"></i>
168
</a>
<a class="diff-line-num" data-line-number="169" href="#L169" id="L169">
<i class="fa fa-link"></i>
169
</a>
<a class="diff-line-num" data-line-number="170" href="#L170" id="L170">
<i class="fa fa-link"></i>
170
</a>
<a class="diff-line-num" data-line-number="171" href="#L171" id="L171">
<i class="fa fa-link"></i>
171
</a>
<a class="diff-line-num" data-line-number="172" href="#L172" id="L172">
<i class="fa fa-link"></i>
172
</a>
<a class="diff-line-num" data-line-number="173" href="#L173" id="L173">
<i class="fa fa-link"></i>
173
</a>
<a class="diff-line-num" data-line-number="174" href="#L174" id="L174">
<i class="fa fa-link"></i>
174
</a>
<a class="diff-line-num" data-line-number="175" href="#L175" id="L175">
<i class="fa fa-link"></i>
175
</a>
<a class="diff-line-num" data-line-number="176" href="#L176" id="L176">
<i class="fa fa-link"></i>
176
</a>
<a class="diff-line-num" data-line-number="177" href="#L177" id="L177">
<i class="fa fa-link"></i>
177
</a>
<a class="diff-line-num" data-line-number="178" href="#L178" id="L178">
<i class="fa fa-link"></i>
178
</a>
<a class="diff-line-num" data-line-number="179" href="#L179" id="L179">
<i class="fa fa-link"></i>
179
</a>
<a class="diff-line-num" data-line-number="180" href="#L180" id="L180">
<i class="fa fa-link"></i>
180
</a>
<a class="diff-line-num" data-line-number="181" href="#L181" id="L181">
<i class="fa fa-link"></i>
181
</a>
<a class="diff-line-num" data-line-number="182" href="#L182" id="L182">
<i class="fa fa-link"></i>
182
</a>
<a class="diff-line-num" data-line-number="183" href="#L183" id="L183">
<i class="fa fa-link"></i>
183
</a>
<a class="diff-line-num" data-line-number="184" href="#L184" id="L184">
<i class="fa fa-link"></i>
184
</a>
<a class="diff-line-num" data-line-number="185" href="#L185" id="L185">
<i class="fa fa-link"></i>
185
</a>
<a class="diff-line-num" data-line-number="186" href="#L186" id="L186">
<i class="fa fa-link"></i>
186
</a>
<a class="diff-line-num" data-line-number="187" href="#L187" id="L187">
<i class="fa fa-link"></i>
187
</a>
</div>
<div class="blob-content" data-blob-id="5bf5fe34efbce92d91d444ff1829d5463c30346d">
<pre class="code highlight"><code><span id="LC1" class="line"><span class="cm">/*</span></span>
<span id="LC2" class="line"><span class="cm">Threads: https://timmurphy.org/2010/05/04/pthreads-in-c-a-minimal-working-example/</span></span>
<span id="LC3" class="line"><span class="cm">Threads: https://www.geeksforgeeks.org/thread-functions-in-c-c/</span></span>
<span id="LC4" class="line"><span class="cm">MultiThreading: https://stackoverflow.com/questions/19253003/running-concurrent-threads-in-c</span></span>
<span id="LC5" class="line"><span class="cm">MultiThreading: https://www.geeksforgeeks.org/multithreading-c-2/</span></span>
<span id="LC6" class="line"><span class="cm">MultiThreading: https://www.geeksforgeeks.org/multiplication-of-matrix-using-threads/</span></span>
<span id="LC7" class="line"><span class="cm">Readers-Writer Lock: https://en.wikipedia.org/wiki/Readers%E2%80%93writer_lock</span></span>
<span id="LC8" class="line"><span class="cm">Readers-Writer Lock: https://stackoverflow.com/questions/19482648/reader-writer-lock-in-pthread</span></span>
<span id="LC9" class="line"><span class="cm">Readers-Writer Lock: https://docs.oracle.com/cd/E19683-01/806-6867/sync-tbl-61/index.html</span></span>
<span id="LC10" class="line"><span class="cm">*/</span></span>
<span id="LC11" class="line"><span class="cp">#include &lt;time.h&gt;</span></span>
<span id="LC12" class="line"><span class="cp">#include &lt;stdio.h&gt;</span></span>
<span id="LC13" class="line"><span class="cp">#include &lt;stdlib.h&gt;</span></span>
<span id="LC14" class="line"><span class="cp">#include &lt;unistd.h&gt;</span></span>
<span id="LC15" class="line"><span class="cp">#include &lt;string.h&gt;</span></span>
<span id="LC16" class="line"><span class="cp">#include &lt;pthread.h&gt;</span></span>
<span id="LC17" class="line"></span>
<span id="LC18" class="line"><span class="cp">#define MAX_VALUE 10  // Max posible matrix value</span></span>
<span id="LC19" class="line"><span class="cp">#define MAX 15        // Matrix size</span></span>
<span id="LC20" class="line"><span class="cp">#define MAX_THREAD 100 // Amount of threads</span></span>
<span id="LC21" class="line"></span>
<span id="LC22" class="line"><span class="n">pthread_t</span> <span class="n">threads</span><span class="p">[</span><span class="n">MAX_THREAD</span><span class="p">];</span></span>
<span id="LC23" class="line"></span>
<span id="LC24" class="line"><span class="kt">int</span> <span class="n">matA</span><span class="p">[</span><span class="n">MAX</span><span class="p">][</span><span class="n">MAX</span><span class="p">];</span></span>
<span id="LC25" class="line"><span class="kt">int</span> <span class="n">matB</span><span class="p">[</span><span class="n">MAX</span><span class="p">][</span><span class="n">MAX</span><span class="p">];</span></span>
<span id="LC26" class="line"><span class="kt">int</span> <span class="n">matC</span><span class="p">[</span><span class="n">MAX</span><span class="p">][</span><span class="n">MAX</span><span class="p">];</span></span>
<span id="LC27" class="line"><span class="kt">int</span> <span class="n">step_i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></span>
<span id="LC28" class="line"></span>
<span id="LC29" class="line"><span class="c1">// Short thread identifier</span></span>
<span id="LC30" class="line"><span class="kt">int</span> <span class="n">threadInd</span><span class="p">(</span><span class="n">pthread_t</span> <span class="kr">thread</span><span class="p">){</span></span>
<span id="LC31" class="line">  <span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">MAX_THREAD</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">){</span></span>
<span id="LC32" class="line">    <span class="k">if</span><span class="p">(</span><span class="n">pthread_equal</span><span class="p">(</span><span class="n">threads</span><span class="p">[</span><span class="n">i</span><span class="p">],</span><span class="kr">thread</span><span class="p">)){</span></span>
<span id="LC33" class="line">      <span class="k">return</span> <span class="o">++</span><span class="n">i</span><span class="p">;</span></span>
<span id="LC34" class="line">    <span class="p">}</span></span>
<span id="LC35" class="line">  <span class="p">}</span></span>
<span id="LC36" class="line"><span class="p">}</span></span>
<span id="LC37" class="line"></span>
<span id="LC38" class="line"><span class="c1">// Display a matrix in screen</span></span>
<span id="LC39" class="line"><span class="kt">void</span> <span class="n">displayMatrix</span><span class="p">(</span><span class="kt">int</span> <span class="n">row</span><span class="p">,</span> <span class="kt">int</span> <span class="n">col</span><span class="p">,</span> <span class="kt">int</span> <span class="n">matrix</span><span class="p">[</span><span class="n">row</span><span class="p">][</span><span class="n">col</span><span class="p">]){</span></span>
<span id="LC40" class="line">  <span class="kt">int</span> <span class="n">i</span><span class="p">,</span><span class="n">j</span><span class="p">;</span></span>
<span id="LC41" class="line">  <span class="k">for</span> <span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">row</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">){</span></span>
<span id="LC42" class="line">    <span class="k">for</span><span class="p">(</span><span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">col</span><span class="p">;</span> <span class="n">j</span><span class="o">++</span><span class="p">){</span></span>
<span id="LC43" class="line">      <span class="n">printf</span><span class="p">(</span><span class="s">"%d "</span><span class="p">,</span><span class="n">matrix</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="n">j</span><span class="p">]);</span></span>
<span id="LC44" class="line">    <span class="p">}</span></span>
<span id="LC45" class="line">    <span class="n">printf</span><span class="p">(</span><span class="s">"</span><span class="se">\n</span><span class="s">"</span><span class="p">);</span></span>
<span id="LC46" class="line">  <span class="p">}</span></span>
<span id="LC47" class="line"><span class="p">}</span></span>
<span id="LC48" class="line"></span>
<span id="LC49" class="line"><span class="c1">// Matrix multiplication</span></span>
<span id="LC50" class="line"><span class="kt">void</span><span class="o">*</span> <span class="n">multi</span><span class="p">(</span><span class="kt">void</span><span class="o">*</span> <span class="n">arg</span><span class="p">){</span></span>
<span id="LC51" class="line">	<span class="kt">int</span> <span class="n">core</span> <span class="o">=</span> <span class="n">step_i</span><span class="o">++</span><span class="p">;</span></span>
<span id="LC52" class="line"></span>
<span id="LC53" class="line">	<span class="c1">// Each thread computes 1/4th of matrix multiplication</span></span>
<span id="LC54" class="line">	<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">i</span> <span class="o">=</span> <span class="n">core</span> <span class="o">*</span> <span class="n">MAX</span> <span class="o">/</span> <span class="n">MAX_THREAD</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="p">(</span><span class="n">core</span> <span class="o">+</span> <span class="mi">1</span><span class="p">)</span> <span class="o">*</span> <span class="n">MAX</span> <span class="o">/</span> <span class="n">MAX_THREAD</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">){</span></span>
<span id="LC55" class="line">		<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">MAX</span><span class="p">;</span> <span class="n">j</span><span class="o">++</span><span class="p">){</span></span>
<span id="LC56" class="line">			<span class="k">for</span> <span class="p">(</span><span class="kt">int</span> <span class="n">k</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">k</span> <span class="o">&lt;</span> <span class="n">MAX</span><span class="p">;</span> <span class="n">k</span><span class="o">++</span><span class="p">){</span></span>
<span id="LC57" class="line">				<span class="n">matC</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="n">j</span><span class="p">]</span> <span class="o">+=</span> <span class="n">matA</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="n">k</span><span class="p">]</span> <span class="o">*</span> <span class="n">matB</span><span class="p">[</span><span class="n">k</span><span class="p">][</span><span class="n">j</span><span class="p">];</span></span>
<span id="LC58" class="line">      <span class="p">}</span></span>
<span id="LC59" class="line">      <span class="n">printf</span><span class="p">(</span><span class="s">"Thread %d dice: %d</span><span class="se">\n</span><span class="s">"</span><span class="p">,</span> <span class="n">threadInd</span><span class="p">(</span><span class="n">pthread_self</span><span class="p">()),</span> <span class="n">matC</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="n">j</span><span class="p">]);</span></span>
<span id="LC60" class="line">    <span class="p">}</span></span>
<span id="LC61" class="line">  <span class="p">}</span></span>
<span id="LC62" class="line"><span class="p">}</span></span>
<span id="LC63" class="line"></span>
<span id="LC64" class="line"><span class="c1">// Read file</span></span>
<span id="LC65" class="line"><span class="kt">int</span> <span class="n">readFile</span><span class="p">(</span><span class="kt">char</span><span class="o">*</span> <span class="n">fileName</span><span class="p">){</span></span>
<span id="LC66" class="line">  <span class="kt">FILE</span> <span class="o">*</span><span class="n">file</span><span class="p">;</span></span>
<span id="LC67" class="line">  <span class="kt">char</span> <span class="o">*</span><span class="n">line</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">;</span></span>
<span id="LC68" class="line">  <span class="kt">size_t</span> <span class="n">len</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></span>
<span id="LC69" class="line">  <span class="kt">ssize_t</span> <span class="n">read</span><span class="p">;</span></span>
<span id="LC70" class="line"></span>
<span id="LC71" class="line">  <span class="n">file</span> <span class="o">=</span> <span class="n">fopen</span><span class="p">(</span><span class="n">fileName</span><span class="p">,</span> <span class="s">"r"</span><span class="p">);</span></span>
<span id="LC72" class="line">  <span class="k">if</span> <span class="p">(</span><span class="n">file</span> <span class="o">==</span> <span class="nb">NULL</span><span class="p">){</span></span>
<span id="LC73" class="line">    <span class="n">printf</span><span class="p">(</span><span class="s">"El archivo con el nombre %s no se encuentra en el directorio actual.</span><span class="se">\n</span><span class="s">"</span><span class="p">,</span> <span class="n">fileName</span><span class="p">);</span></span>
<span id="LC74" class="line">    <span class="n">exit</span><span class="p">(</span><span class="n">EXIT_FAILURE</span><span class="p">);</span></span>
<span id="LC75" class="line">  <span class="p">}</span></span>
<span id="LC76" class="line">  <span class="k">while</span><span class="p">((</span><span class="n">read</span> <span class="o">=</span> <span class="n">getline</span><span class="p">(</span><span class="o">&amp;</span><span class="n">line</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">len</span><span class="p">,</span> <span class="n">file</span><span class="p">))</span> <span class="o">!=</span> <span class="o">-</span><span class="mi">1</span><span class="p">){</span></span>
<span id="LC77" class="line">    <span class="n">printf</span><span class="p">(</span><span class="s">"%s"</span><span class="p">,</span> <span class="n">line</span><span class="p">);</span></span>
<span id="LC78" class="line">  <span class="p">}</span></span>
<span id="LC79" class="line">  <span class="n">fclose</span><span class="p">(</span><span class="n">file</span><span class="p">);</span></span>
<span id="LC80" class="line"><span class="p">}</span></span>
<span id="LC81" class="line"></span>
<span id="LC82" class="line"><span class="c1">// Función Main</span></span>
<span id="LC83" class="line"><span class="kt">int</span> <span class="n">main</span><span class="p">(</span><span class="kt">int</span> <span class="n">argc</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span><span class="o">*</span> <span class="n">argv</span><span class="p">[]){</span></span>
<span id="LC84" class="line">  <span class="n">srandom</span><span class="p">(</span><span class="n">time</span><span class="p">(</span><span class="nb">NULL</span><span class="p">));</span></span>
<span id="LC85" class="line"></span>
<span id="LC86" class="line">  <span class="kt">char</span> <span class="n">hostsFile</span><span class="p">[</span><span class="mi">255</span><span class="p">]</span> <span class="o">=</span> <span class="s">"./HOSTFILE"</span><span class="p">;</span></span>
<span id="LC87" class="line">  <span class="kt">char</span> <span class="n">logFile</span><span class="p">[</span><span class="mi">255</span><span class="p">]</span> <span class="o">=</span> <span class="s">"./LOGFILE"</span><span class="p">;</span></span>
<span id="LC88" class="line">  <span class="kt">int</span> <span class="n">COPIAS_PROBLEMA</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></span>
<span id="LC89" class="line">  <span class="kt">int</span> <span class="n">i</span><span class="p">;</span></span>
<span id="LC90" class="line"></span>
<span id="LC91" class="line">  <span class="k">for</span><span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">argc</span><span class="p">;</span> <span class="n">i</span><span class="o">++</span><span class="p">){</span></span>
<span id="LC92" class="line">    <span class="n">printf</span><span class="p">(</span><span class="s">"%d: %s</span><span class="se">\n</span><span class="s">"</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></span>
<span id="LC93" class="line">    <span class="k">if</span> <span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">][</span><span class="mi">0</span><span class="p">]</span> <span class="o">==</span> <span class="sc">'-'</span><span class="p">){</span></span>
<span id="LC94" class="line">      <span class="k">if</span> <span class="p">(</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="s">"-h"</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">){</span></span>
<span id="LC95" class="line">        <span class="k">if</span><span class="p">(</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span> <span class="o">&lt;</span> <span class="n">argc</span> <span class="o">&amp;&amp;</span> <span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">][</span><span class="mi">0</span><span class="p">]</span> <span class="o">!=</span> <span class="sc">'-'</span><span class="p">){</span></span>
<span id="LC96" class="line">          <span class="n">i</span><span class="o">++</span><span class="p">;</span></span>
<span id="LC97" class="line">          <span class="n">strcpy</span><span class="p">(</span><span class="n">hostsFile</span><span class="p">,</span> <span class="s">"./"</span><span class="p">);</span></span>
<span id="LC98" class="line">          <span class="n">strcat</span><span class="p">(</span><span class="n">hostsFile</span><span class="p">,</span> <span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></span>
<span id="LC99" class="line">          <span class="n">readFile</span><span class="p">(</span><span class="n">hostsFile</span><span class="p">);</span></span>
<span id="LC100" class="line">        <span class="p">}</span></span>
<span id="LC101" class="line">        <span class="k">else</span><span class="p">{</span></span>
<span id="LC102" class="line">          <span class="n">readFile</span><span class="p">(</span><span class="n">hostsFile</span><span class="p">);</span></span>
<span id="LC103" class="line">        <span class="p">}</span></span>
<span id="LC104" class="line">      <span class="p">}</span></span>
<span id="LC105" class="line">      <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="s">"-l"</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">){</span></span>
<span id="LC106" class="line">        <span class="k">if</span><span class="p">(</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span> <span class="o">&lt;</span> <span class="n">argc</span> <span class="o">&amp;&amp;</span> <span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">][</span><span class="mi">0</span><span class="p">]</span> <span class="o">!=</span> <span class="sc">'-'</span><span class="p">){</span></span>
<span id="LC107" class="line">          <span class="n">i</span><span class="o">++</span><span class="p">;</span></span>
<span id="LC108" class="line">          <span class="n">strcpy</span><span class="p">(</span><span class="n">logFile</span><span class="p">,</span> <span class="s">"./"</span><span class="p">);</span></span>
<span id="LC109" class="line">          <span class="n">strcat</span><span class="p">(</span><span class="n">logFile</span><span class="p">,</span> <span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></span>
<span id="LC110" class="line">          <span class="n">readFile</span><span class="p">(</span><span class="n">logFile</span><span class="p">);</span></span>
<span id="LC111" class="line">        <span class="p">}</span></span>
<span id="LC112" class="line">        <span class="k">else</span><span class="p">{</span></span>
<span id="LC113" class="line">          <span class="n">readFile</span><span class="p">(</span><span class="n">logFile</span><span class="p">);</span></span>
<span id="LC114" class="line">        <span class="p">}</span></span>
<span id="LC115" class="line">      <span class="p">}</span></span>
<span id="LC116" class="line">      <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">strcmp</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="s">"-n"</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span><span class="p">){</span></span>
<span id="LC117" class="line">        <span class="k">if</span><span class="p">(</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span> <span class="o">&lt;</span> <span class="n">argc</span> <span class="o">&amp;&amp;</span> <span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">][</span><span class="mi">0</span><span class="p">]</span> <span class="o">!=</span> <span class="sc">'-'</span><span class="p">){</span></span>
<span id="LC118" class="line">          <span class="n">i</span><span class="o">++</span><span class="p">;</span></span>
<span id="LC119" class="line">          <span class="kt">char</span> <span class="o">*</span><span class="n">end</span><span class="p">;</span></span>
<span id="LC120" class="line">          <span class="n">COPIAS_PROBLEMA</span> <span class="o">=</span> <span class="n">strtol</span><span class="p">(</span><span class="n">argv</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="o">&amp;</span><span class="n">end</span><span class="p">,</span> <span class="mi">10</span><span class="p">);</span></span>
<span id="LC121" class="line">        <span class="p">}</span></span>
<span id="LC122" class="line">        <span class="k">else</span><span class="p">{</span></span>
<span id="LC123" class="line">          <span class="n">COPIAS_PROBLEMA</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></span>
<span id="LC124" class="line">        <span class="p">}</span></span>
<span id="LC125" class="line">      <span class="p">}</span></span>
<span id="LC126" class="line">      <span class="cm">/* ADDING OPTIONS</span></span>
<span id="LC127" class="line"><span class="cm">      //Esto es en caso que la opción reciba argumentos. Si no se requieren</span></span>
<span id="LC128" class="line"><span class="cm">      // argumentos, se pueden ignorar el if y el else.</span></span>
<span id="LC129" class="line"></span>
<span id="LC130" class="line"><span class="cm">      else if (strcmp(argv[i], "-%c") == 0){</span></span>
<span id="LC131" class="line"><span class="cm">        // Si quedan argumentos después del próximo o el siguiente argumento es</span></span>
<span id="LC132" class="line"><span class="cm">        // otra opción;</span></span>
<span id="LC133" class="line"><span class="cm">        if(i+1 &lt; argc &amp;&amp; argv[i+1][0] != '-'){</span></span>
<span id="LC134" class="line"><span class="cm">          // DO SOMETHING</span></span>
<span id="LC135" class="line"><span class="cm">        }</span></span>
<span id="LC136" class="line"><span class="cm">        else{</span></span>
<span id="LC137" class="line"><span class="cm">          //CASO DEFAULT</span></span>
<span id="LC138" class="line"><span class="cm">        }</span></span>
<span id="LC139" class="line"><span class="cm">      }</span></span>
<span id="LC140" class="line"><span class="cm">      */</span></span>
<span id="LC141" class="line">      <span class="k">else</span> <span class="p">{</span></span>
<span id="LC142" class="line">        <span class="n">printf</span> <span class="p">(</span><span class="s">"Uso: dsm [-h [dir]|-l [dir]|-n [dir]]</span><span class="se">\n</span><span class="s">"</span><span class="p">);</span></span>
<span id="LC143" class="line">        <span class="n">exit</span><span class="p">(</span><span class="n">EXIT_FAILURE</span><span class="p">);</span></span>
<span id="LC144" class="line">      <span class="p">}</span></span>
<span id="LC145" class="line">    <span class="p">}</span></span>
<span id="LC146" class="line">    <span class="k">else</span><span class="p">{</span></span>
<span id="LC147" class="line">      <span class="n">printf</span> <span class="p">(</span><span class="s">"Uso.: dsm [-h [dir]|-l [dir]|-n [dir]]</span><span class="se">\n</span><span class="s">"</span><span class="p">);</span></span>
<span id="LC148" class="line">      <span class="n">exit</span><span class="p">(</span><span class="n">EXIT_FAILURE</span><span class="p">);</span></span>
<span id="LC149" class="line">    <span class="p">}</span></span>
<span id="LC150" class="line">  <span class="p">}</span></span>
<span id="LC151" class="line"></span>
<span id="LC152" class="line">  <span class="n">printf</span><span class="p">(</span><span class="s">"HostsFile: %s</span><span class="se">\n</span><span class="s">LogFile: %s</span><span class="se">\n</span><span class="s">Copias Problema: %d</span><span class="se">\n</span><span class="s">"</span><span class="p">,</span> <span class="n">hostsFile</span><span class="p">,</span> <span class="n">logFile</span><span class="p">,</span> <span class="n">COPIAS_PROBLEMA</span><span class="p">);</span></span>
<span id="LC153" class="line"></span>
<span id="LC154" class="line">  <span class="cm">/*// Generating de matrices</span></span>
<span id="LC155" class="line"><span class="cm">  for (i = 0; i &lt; MAX; i++) {</span></span>
<span id="LC156" class="line"><span class="cm">  	for (int j = 0; j &lt; MAX; j++) {</span></span>
<span id="LC157" class="line"><span class="cm">  		matA[i][j] = random()%(MAX_VALUE+1);</span></span>
<span id="LC158" class="line"><span class="cm">  		matB[i][j] = random()%(MAX_VALUE+1);</span></span>
<span id="LC159" class="line"><span class="cm">  	}</span></span>
<span id="LC160" class="line"><span class="cm">  }</span></span>
<span id="LC161" class="line"></span>
<span id="LC162" class="line"><span class="cm">  // Displaying matA</span></span>
<span id="LC163" class="line"><span class="cm">  displayMatrix(MAX,MAX,matA);</span></span>
<span id="LC164" class="line"><span class="cm">  printf("\n");</span></span>
<span id="LC165" class="line"><span class="cm">  displayMatrix(MAX,MAX,matB);</span></span>
<span id="LC166" class="line"></span>
<span id="LC167" class="line"><span class="cm">  // ************************************</span></span>
<span id="LC168" class="line"><span class="cm">  //      THREADS</span></span>
<span id="LC169" class="line"><span class="cm">  // ************************************</span></span>
<span id="LC170" class="line"></span>
<span id="LC171" class="line"><span class="cm">	// Creating the threads, each evaluating its own part</span></span>
<span id="LC172" class="line"><span class="cm">	for (i = 0; i &lt; MAX_THREAD; i++) {</span></span>
<span id="LC173" class="line"><span class="cm">		int* p;</span></span>
<span id="LC174" class="line"><span class="cm">		pthread_create(&amp;threads[i], NULL, multi, (void*)(p));</span></span>
<span id="LC175" class="line"><span class="cm">	}</span></span>
<span id="LC176" class="line"></span>
<span id="LC177" class="line"><span class="cm">	// Joining and waiting for all threads to complete</span></span>
<span id="LC178" class="line"><span class="cm">	for (i = 0; i &lt; MAX_THREAD; i++){</span></span>
<span id="LC179" class="line"><span class="cm">		pthread_join(threads[i], NULL);</span></span>
<span id="LC180" class="line"><span class="cm">  }</span></span>
<span id="LC181" class="line"></span>
<span id="LC182" class="line"><span class="cm">	// Displaying the result matrix</span></span>
<span id="LC183" class="line"><span class="cm">  printf("\nMultiplication of A and B\n");</span></span>
<span id="LC184" class="line"><span class="cm">	displayMatrix(MAX,MAX,matC);</span></span>
<span id="LC185" class="line"><span class="cm">*/</span></span>
<span id="LC186" class="line">	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></span>
<span id="LC187" class="line"><span class="p">}</span></span></code></pre>
</div>
</div>


</article>
</div>

</div>
<div class="modal" id="modal-remove-blob">
<div class="modal-dialog">
<div class="modal-content">
<div class="modal-header">
<a class="close" data-dismiss="modal" href="#">×</a>
<h3 class="page-title">Delete main.c</h3>
</div>
<div class="modal-body">
<form class="form-horizontal js-replace-blob-form js-quick-submit js-requires-input" action="/SistemasOperativos/Proyecto02/blob/master/main.c" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="_method" value="delete" /><input type="hidden" name="authenticity_token" value="1Z/huemXl++G//MI4MV2aCPimxa6Z9soJaUeDb+3lvfmdjPhZoH99yjRtF6JVfZVCKU/ob1qp3vvgznayeHIPQ==" /><div class="form-group commit_message-group">
<label class="control-label" for="commit_message-9022ac5c5d3f6bf2794b495a7b1245e8">Commit message
</label><div class="col-sm-10">
<div class="commit-message-container">
<div class="max-width-marker"></div>
<textarea name="commit_message" id="commit_message-9022ac5c5d3f6bf2794b495a7b1245e8" class="form-control js-commit-message" placeholder="Delete main.c" required="required" rows="3">
Delete main.c</textarea>
</div>
</div>
</div>

<div class="form-group branch">
<label class="control-label" for="target_branch">Target branch</label>
<div class="col-sm-10">
<input type="text" name="target_branch" id="target_branch" value="master" required="required" class="form-control js-target-branch" />
<div class="js-create-merge-request-container">
<div class="checkbox">
<label for="create_merge_request-f3633870e89265531a8c6fbdd6711a92"><input type="checkbox" name="create_merge_request" id="create_merge_request-f3633870e89265531a8c6fbdd6711a92" value="1" class="js-create-merge-request" checked="checked" />
Start a <strong>new merge request</strong> with these changes
</label></div>
</div>
</div>
</div>
<input type="hidden" name="original_branch" id="original_branch" value="master" class="js-original-branch" />

<div class="form-group">
<div class="col-sm-offset-2 col-sm-10">
<button name="button" type="submit" class="btn btn-remove btn-remove-file">Delete file</button>
<a class="btn btn-cancel" data-dismiss="modal" href="#">Cancel</a>
</div>
</div>
</form></div>
</div>
</div>
</div>
<script>
  new NewCommitForm($('.js-replace-blob-form'))
</script>

<div class="modal" id="modal-upload-blob">
<div class="modal-dialog">
<div class="modal-content">
<div class="modal-header">
<a class="close" data-dismiss="modal" href="#">×</a>
<h3 class="page-title">Replace main.c</h3>
</div>
<div class="modal-body">
<form class="js-quick-submit js-upload-blob-form form-horizontal" action="/SistemasOperativos/Proyecto02/update/master/main.c" accept-charset="UTF-8" method="post"><input name="utf8" type="hidden" value="&#x2713;" /><input type="hidden" name="_method" value="put" /><input type="hidden" name="authenticity_token" value="S1D4SobP3Gq9zseDg84oUzXBTJ6MlL+VxgCDgBkEC0F4uSoSCdm2chPggNXqXqhuHoboKYuZw8YMJqRXb1JViw==" /><div class="dropzone">
<div class="dropzone-previews blob-upload-dropzone-previews">
<p class="dz-message light">
Attach a file by drag &amp; drop or
<a class="markdown-selector" href="#">click to upload</a>
</p>
</div>
</div>
<br>
<div class="alert alert-danger data dropzone-alerts" style="display:none"></div>
<div class="form-group commit_message-group">
<label class="control-label" for="commit_message-477bb3dd92982a42f1f2e87d6081759c">Commit message
</label><div class="col-sm-10">
<div class="commit-message-container">
<div class="max-width-marker"></div>
<textarea name="commit_message" id="commit_message-477bb3dd92982a42f1f2e87d6081759c" class="form-control js-commit-message" placeholder="Replace main.c" required="required" rows="3">
Replace main.c</textarea>
</div>
</div>
</div>

<div class="form-group branch">
<label class="control-label" for="target_branch">Target branch</label>
<div class="col-sm-10">
<input type="text" name="target_branch" id="target_branch" value="master" required="required" class="form-control js-target-branch" />
<div class="js-create-merge-request-container">
<div class="checkbox">
<label for="create_merge_request-f4bf2b09230d4a45492d8bf818a260bc"><input type="checkbox" name="create_merge_request" id="create_merge_request-f4bf2b09230d4a45492d8bf818a260bc" value="1" class="js-create-merge-request" checked="checked" />
Start a <strong>new merge request</strong> with these changes
</label></div>
</div>
</div>
</div>
<input type="hidden" name="original_branch" id="original_branch" value="master" class="js-original-branch" />

<div class="form-actions">
<button name="button" type="submit" class="btn btn-small btn-create btn-upload-file" id="submit-all">Replace file</button>
<a class="btn btn-cancel" data-dismiss="modal" href="#">Cancel</a>
</div>
</form></div>
</div>
</div>
</div>
<script>
  disableButtonIfEmptyField($('.js-upload-blob-form').find('.js-commit-message'), '.btn-upload-file');
  new BlobFileDropzone($('.js-upload-blob-form'), 'put');
  new NewCommitForm($('.js-upload-blob-form'))
</script>

</div>

</div>
</div>
</div>
</div>

<script>
  GitLab.GfmAutoComplete.dataSource = "/SistemasOperativos/Proyecto02/autocomplete_sources?type_id=master%2Fmain.c"
  GitLab.GfmAutoComplete.cachedData = undefined;
  GitLab.GfmAutoComplete.setup();
</script>


</body>
</html>

