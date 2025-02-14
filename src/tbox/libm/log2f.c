/*!The Treasure Box Library
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Copyright (C) 2009-present, TBOOX Open Source Group.
 *
 * @author      ruki
 * @file        log2f.c
 * @ingroup     libm
 *
 */

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "math.h"
#include <math.h>

/* //////////////////////////////////////////////////////////////////////////////////////
 * macros
 */
#if defined(TB_CONFIG_LIBM_HAVE_LOG2F) && \
    defined(TB_CONFIG_OS_ANDROID) && defined(__ANDROID_API__) && (__ANDROID_API__ < 18)
#   undef TB_CONFIG_LIBM_HAVE_LOG2F
#endif

/* //////////////////////////////////////////////////////////////////////////////////////
 * implementation
 */
tb_float_t tb_log2f(tb_float_t x)
{
#ifdef TB_CONFIG_LIBM_HAVE_LOG2F
    return log2f(x);
#else
    return (tb_float_t)(log(x) * 1.44269504088896340736f);
#endif
}
