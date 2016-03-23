
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x9 = 22U;
int64_t x61 = INT64_MAX;
static int8_t x64 = INT8_MIN;
uint32_t x82 = 0U;
uint8_t x139 = 2U;
static uint8_t x140 = 49U;
int32_t t5 = 0;
uint64_t x349 = 6802693LLU;
uint64_t x377 = UINT64_MAX;
int8_t x378 = 7;
uint8_t x382 = 6U;
static int32_t x437 = 2;
static int32_t x895 = -1;
volatile uint32_t x896 = 23703144U;
uint16_t x977 = 8638U;
int16_t x979 = INT16_MAX;
int64_t x1105 = INT64_MAX;
volatile int64_t t21 = 160LL;
int64_t x1196 = -1LL;
volatile int32_t x1234 = 6;
int32_t x1239 = INT32_MAX;
int32_t x1301 = 355;
uint32_t t29 = 29120273U;
int8_t x1372 = -1;
static int16_t x1554 = 43;
static uint16_t x1573 = 18U;
int64_t x1576 = 88392061458425LL;
volatile uint16_t x1702 = 5U;
static volatile int64_t t34 = 1294110LL;
int8_t x1806 = 1;
int8_t x2045 = INT8_MAX;
static uint8_t x2046 = 10U;
uint16_t x2047 = 1149U;
int64_t x2048 = INT64_MAX;
volatile uint8_t x2158 = 2U;
int64_t t38 = 12925LL;
uint8_t x2186 = 2U;
uint64_t x2187 = 172599617683090LLU;
volatile int32_t x2409 = INT32_MAX;
int32_t x2410 = 2;
int64_t x2443 = INT64_MIN;
volatile uint8_t x2444 = UINT8_MAX;
int64_t t41 = -1876687641953792LL;
int16_t x2464 = INT16_MAX;
int8_t x2573 = INT8_MAX;
int64_t x2597 = 9714LL;
uint8_t x2598 = 33U;
uint16_t x2618 = 24U;
uint16_t x2619 = 6U;
volatile int32_t t46 = -3;
uint8_t x2736 = 7U;
static int16_t x2763 = -1;
uint32_t x2820 = 762955697U;
static volatile uint16_t x2849 = UINT16_MAX;
static uint8_t x2926 = 15U;
int32_t x2927 = 3996392;
static uint8_t x2962 = 6U;
uint16_t x2963 = 29887U;
static uint64_t x2964 = 3185870229213LLU;
uint16_t x3061 = UINT16_MAX;
int32_t x3064 = -1;
volatile int64_t t57 = 1LL;
volatile int16_t x3360 = INT16_MIN;
static uint8_t x3430 = 1U;
int64_t x3431 = -1902LL;
uint32_t x3439 = 10U;
uint32_t t62 = 191119U;
uint32_t x3538 = 0U;
int16_t x3539 = INT16_MIN;
int16_t x3587 = INT16_MIN;
volatile uint64_t t64 = 99156838244962LLU;
int8_t x3607 = -1;
int8_t x3854 = 10;
int16_t x3914 = 1;
int16_t x3993 = INT16_MAX;
uint32_t x3994 = 6U;
int8_t x3995 = -1;
uint64_t x4101 = 40137979835462068LLU;
volatile uint64_t t72 = 1983011135338LLU;
uint8_t x4114 = 1U;
int16_t x4115 = INT16_MIN;
int16_t x4116 = INT16_MIN;
volatile uint32_t x4239 = 12U;
uint64_t x4510 = 28LLU;
static volatile int32_t t77 = 513823;
uint32_t x4577 = UINT32_MAX;
uint32_t x4695 = 3992U;
uint64_t t81 = 29678251LLU;
int32_t x4827 = INT32_MAX;
int8_t x4828 = INT8_MIN;
uint16_t x4921 = 0U;
int64_t x4923 = INT64_MIN;
int16_t x5045 = 143;
int32_t x5047 = 9;
static uint64_t t88 = 311265380LLU;
uint32_t x5333 = 76U;
static volatile int8_t x5358 = 1;
static uint64_t x5434 = 21LLU;
int64_t x5480 = -1LL;
volatile int8_t x5515 = INT8_MIN;
uint16_t x5516 = UINT16_MAX;
int32_t x5553 = 1942807;
static uint16_t x5581 = 41U;
uint8_t x5583 = 29U;
static int16_t x5622 = 0;
volatile uint64_t t99 = 0LLU;
static int32_t x5844 = -196797;
volatile int32_t t102 = -1;
static uint16_t x6021 = 0U;
volatile int8_t x6022 = 0;
int8_t x6054 = 1;
uint32_t x6057 = 7U;
int32_t t108 = 1;
int16_t x6103 = INT16_MAX;
int16_t x6104 = 24;
volatile int64_t t110 = 10434688910435LL;
int8_t x6274 = 1;
int16_t x6475 = -1;
static uint8_t x6515 = 3U;
int32_t t115 = 0;
uint8_t x6670 = 31U;
uint16_t x6671 = UINT16_MAX;
static volatile int16_t x6740 = -3195;
volatile int32_t x6814 = 0;
uint16_t x6815 = 2441U;
int32_t t118 = -542422215;
int64_t x6868 = INT64_MAX;
volatile int8_t x6962 = 5;
uint16_t x7090 = 29U;
static volatile uint32_t x7091 = 15148806U;
uint64_t t126 = 27855102LLU;
int16_t x7300 = INT16_MIN;
volatile uint64_t t128 = 4678411184992020042LLU;
uint32_t x7357 = 2805257U;
uint64_t x7529 = 3904404525224LLU;
volatile uint64_t t134 = 8538293829698196674LLU;
uint64_t x7652 = UINT64_MAX;
uint64_t t135 = 10858400LLU;
uint64_t x7681 = 142970188LLU;
static int64_t x7682 = 0LL;
int8_t x7683 = -1;
uint64_t t136 = 177184LLU;
int8_t x7829 = 48;
static int64_t x7832 = -1LL;
volatile uint16_t x8013 = 17923U;
volatile uint64_t t140 = 67426691LLU;
volatile uint8_t x8181 = 16U;
volatile int32_t x8183 = -43605;
static int8_t x8196 = INT8_MIN;
static int8_t x8284 = INT8_MIN;
int8_t x8390 = 23;
uint8_t x8566 = 3U;
uint8_t x8733 = 9U;
uint8_t x8735 = 35U;
int64_t t150 = 90735297651447097LL;
int16_t x8868 = -1;
int64_t x8900 = INT64_MAX;
static int32_t x8909 = INT32_MAX;
volatile int16_t x8912 = INT16_MIN;
int16_t x8990 = 0;
volatile int32_t t156 = -58723960;
uint64_t x9015 = 1201125569194451LLU;
volatile uint64_t t158 = 158997LLU;
int8_t x9086 = 16;
int8_t x9087 = INT8_MAX;
static int16_t x9088 = 0;
static int16_t x9185 = 0;
volatile uint32_t x9205 = 1851U;
int8_t x9208 = 0;
uint16_t x9209 = UINT16_MAX;
uint16_t x9214 = 0U;
volatile uint32_t t165 = 123829U;
volatile uint16_t x9309 = 464U;
int32_t x9419 = INT32_MAX;
uint16_t x9420 = UINT16_MAX;
uint64_t t172 = 23521LLU;
static int16_t x9707 = INT16_MIN;
uint8_t x9711 = 19U;
int64_t x9768 = -22284830788823LL;
static uint32_t x9886 = 1U;
static uint64_t t178 = 9LLU;
uint16_t x9957 = 13965U;
uint8_t x10058 = 13U;
int16_t x10059 = -1;
static int8_t x10060 = -1;
uint16_t x10201 = 0U;
static int32_t x10419 = 19;
uint64_t x10547 = 6LLU;
uint8_t x10682 = 13U;
volatile int8_t x10709 = INT8_MAX;
volatile int32_t x10882 = 7;
int32_t x10883 = 577433;
int16_t x11030 = 6;
static int16_t x11032 = 0;
int8_t x11041 = 49;
int32_t x11043 = 717978;


void f0(void) {
    	static int16_t x10 = 0;
	static uint32_t x11 = 5U;
	int8_t x12 = INT8_MIN;
	uint32_t t0 = 387547117U;

    t0 = ((x9>>x10)-(x11&x12));

    if (t0 != 22U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x62 = 1U;
	int32_t x63 = -1;
	static int64_t t1 = -917408411560212LL;

    t1 = ((x61>>x62)-(x63&x64));

    if (t1 != 4611686018427388031LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x81 = UINT64_MAX;
	static volatile int32_t x83 = -2720;
	uint32_t x84 = 1367982030U;
	uint64_t t2 = 2609883695470057646LLU;

    t2 = ((x81>>x82)-(x83&x84));

    if (t2 != 18446744072341572287LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x137 = 1243778U;
	static int16_t x138 = 1;
	uint32_t t3 = 686466U;

    t3 = ((x137>>x138)-(x139&x140));

    if (t3 != 621889U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x153 = 111624434991LLU;
	static uint8_t x154 = 2U;
	static volatile int8_t x155 = INT8_MIN;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t4 = 97557299LLU;

    t4 = ((x153>>x154)-(x155&x156));

    if (t4 != 27906108875LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x157 = 404U;
	static uint8_t x158 = 1U;
	static int16_t x159 = INT16_MIN;
	volatile int8_t x160 = INT8_MIN;

    t5 = ((x157>>x158)-(x159&x160));

    if (t5 != 32970) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x289 = 34245965007LL;
	static volatile int8_t x290 = 59;
	int16_t x291 = INT16_MIN;
	int8_t x292 = -3;
	int64_t t6 = 378072LL;

    t6 = ((x289>>x290)-(x291&x292));

    if (t6 != 32768LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x337 = 118U;
	uint32_t x338 = 8U;
	int16_t x339 = 16210;
	uint64_t x340 = 2245493LLU;
	volatile uint64_t t7 = 8026042540327957917LLU;

    t7 = ((x337>>x338)-(x339&x340));

    if (t7 != 18446744073709550768LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x350 = 1U;
	static uint8_t x351 = UINT8_MAX;
	int64_t x352 = INT64_MIN;
	uint64_t t8 = 3LLU;

    t8 = ((x349>>x350)-(x351&x352));

    if (t8 != 3401346LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x379 = UINT32_MAX;
	int64_t x380 = INT64_MIN;
	volatile uint64_t t9 = 5306LLU;

    t9 = ((x377>>x378)-(x379&x380));

    if (t9 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x381 = UINT32_MAX;
	uint64_t x383 = 16354LLU;
	static int64_t x384 = INT64_MIN;
	uint64_t t10 = 68LLU;

    t10 = ((x381>>x382)-(x383&x384));

    if (t10 != 67108863LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x438 = 1;
	uint8_t x439 = 43U;
	int16_t x440 = -1;
	volatile int32_t t11 = -365705767;

    t11 = ((x437>>x438)-(x439&x440));

    if (t11 != -42) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x489 = 912546LLU;
	int8_t x490 = 43;
	uint16_t x491 = 212U;
	uint8_t x492 = 3U;
	volatile uint64_t t12 = 136031469776054LLU;

    t12 = ((x489>>x490)-(x491&x492));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x501 = 527961LL;
	uint8_t x502 = 4U;
	volatile int16_t x503 = -1;
	int16_t x504 = -498;
	int64_t t13 = 5452070808LL;

    t13 = ((x501>>x502)-(x503&x504));

    if (t13 != 33495LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x717 = INT32_MAX;
	int8_t x718 = 1;
	int8_t x719 = INT8_MAX;
	int16_t x720 = -1;
	int32_t t14 = 1678;

    t14 = ((x717>>x718)-(x719&x720));

    if (t14 != 1073741696) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x729 = 2004U;
	static uint64_t x730 = 21LLU;
	uint32_t x731 = 82178U;
	int16_t x732 = INT16_MIN;
	volatile uint32_t t15 = 39U;

    t15 = ((x729>>x730)-(x731&x732));

    if (t15 != 4294901760U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x849 = 1034561724U;
	uint16_t x850 = 1U;
	volatile uint64_t x851 = UINT64_MAX;
	int16_t x852 = -13696;
	static volatile uint64_t t16 = 1877540LLU;

    t16 = ((x849>>x850)-(x851&x852));

    if (t16 != 517294558LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x893 = 82843877465161714LLU;
	int8_t x894 = 2;
	volatile uint64_t t17 = 14327LLU;

    t17 = ((x893>>x894)-(x895&x896));

    if (t17 != 20710969342587284LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x913 = INT64_MAX;
	int16_t x914 = 3;
	int8_t x915 = INT8_MAX;
	int8_t x916 = INT8_MIN;
	static int64_t t18 = 56807189458679564LL;

    t18 = ((x913>>x914)-(x915&x916));

    if (t18 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x965 = 2719369088982LLU;
	volatile int8_t x966 = 19;
	volatile int64_t x967 = -1LL;
	int64_t x968 = INT64_MIN;
	uint64_t t19 = 293857292908525LLU;

    t19 = ((x965>>x966)-(x967&x968));

    if (t19 != 9223372036859962592LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x978 = 0U;
	int8_t x980 = -1;
	static volatile int32_t t20 = 343014933;

    t20 = ((x977>>x978)-(x979&x980));

    if (t20 != -24129) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x1106 = 1U;
	int16_t x1107 = INT16_MIN;
	static uint8_t x1108 = 75U;

    t21 = ((x1105>>x1106)-(x1107&x1108));

    if (t21 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x1113 = 125235739774LLU;
	uint16_t x1114 = 2U;
	static int8_t x1115 = INT8_MAX;
	int16_t x1116 = -1;
	static volatile uint64_t t22 = 5133301130LLU;

    t22 = ((x1113>>x1114)-(x1115&x1116));

    if (t22 != 31308934816LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1165 = 116181970363820230LLU;
	uint8_t x1166 = 13U;
	int8_t x1167 = -1;
	uint16_t x1168 = 33U;
	uint64_t t23 = 742869LLU;

    t23 = ((x1165>>x1166)-(x1167&x1168));

    if (t23 != 14182369429144LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x1193 = UINT16_MAX;
	int16_t x1194 = 1;
	uint32_t x1195 = 1U;
	int64_t t24 = 4955LL;

    t24 = ((x1193>>x1194)-(x1195&x1196));

    if (t24 != 32766LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x1205 = 218;
	uint8_t x1206 = 6U;
	static int16_t x1207 = INT16_MAX;
	uint64_t x1208 = UINT64_MAX;
	uint64_t t25 = 875359249LLU;

    t25 = ((x1205>>x1206)-(x1207&x1208));

    if (t25 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x1233 = 28;
	uint32_t x1235 = 2380U;
	uint32_t x1236 = UINT32_MAX;
	volatile uint32_t t26 = 571U;

    t26 = ((x1233>>x1234)-(x1235&x1236));

    if (t26 != 4294964916U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1237 = 263;
	int32_t x1238 = 10;
	static uint16_t x1240 = 275U;
	static int32_t t27 = 8;

    t27 = ((x1237>>x1238)-(x1239&x1240));

    if (t27 != -275) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1302 = 22U;
	int32_t x1303 = INT32_MIN;
	int64_t x1304 = INT64_MAX;
	static volatile int64_t t28 = -326669034121729LL;

    t28 = ((x1301>>x1302)-(x1303&x1304));

    if (t28 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1325 = 14734;
	volatile int8_t x1326 = 1;
	static volatile uint16_t x1327 = 28U;
	uint32_t x1328 = 1965U;

    t29 = ((x1325>>x1326)-(x1327&x1328));

    if (t29 != 7355U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1369 = 653;
	uint8_t x1370 = 3U;
	static volatile uint64_t x1371 = UINT64_MAX;
	static uint64_t t30 = 102883LLU;

    t30 = ((x1369>>x1370)-(x1371&x1372));

    if (t30 != 82LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x1553 = 1857LL;
	static volatile int32_t x1555 = -1;
	int32_t x1556 = 13110651;
	volatile int64_t t31 = 1340041850279685LL;

    t31 = ((x1553>>x1554)-(x1555&x1556));

    if (t31 != -13110651LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x1574 = 7;
	volatile int32_t x1575 = 5844;
	int64_t t32 = 1LL;

    t32 = ((x1573>>x1574)-(x1575&x1576));

    if (t32 != -5840LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x1701 = 14795;
	uint64_t x1703 = 4690911177644465LLU;
	uint8_t x1704 = 12U;
	uint64_t t33 = 160LLU;

    t33 = ((x1701>>x1702)-(x1703&x1704));

    if (t33 != 462LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x1745 = 23U;
	int8_t x1746 = 2;
	static int8_t x1747 = INT8_MIN;
	volatile int64_t x1748 = -1LL;

    t34 = ((x1745>>x1746)-(x1747&x1748));

    if (t34 != 133LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1805 = 15;
	uint64_t x1807 = UINT64_MAX;
	int32_t x1808 = -718779;
	uint64_t t35 = 5322724313LLU;

    t35 = ((x1805>>x1806)-(x1807&x1808));

    if (t35 != 718786LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int64_t x1865 = INT64_MAX;
	uint8_t x1866 = 20U;
	static int32_t x1867 = -228540;
	volatile int16_t x1868 = INT16_MIN;
	int64_t t36 = -2425LL;

    t36 = ((x1865>>x1866)-(x1867&x1868));

    if (t36 != 8796093251583LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t t37 = -4125505706828LL;

    t37 = ((x2045>>x2046)-(x2047&x2048));

    if (t37 != -1149LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x2157 = UINT32_MAX;
	int64_t x2159 = 157819202LL;
	volatile int16_t x2160 = 2;

    t38 = ((x2157>>x2158)-(x2159&x2160));

    if (t38 != 1073741821LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2185 = 134875062U;
	static int32_t x2188 = INT32_MAX;
	static volatile uint64_t t39 = 299LLU;

    t39 = ((x2185>>x2186)-(x2187&x2188));

    if (t39 != 18446744071681344347LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2411 = INT16_MIN;
	volatile uint32_t x2412 = 2342U;
	volatile uint32_t t40 = 84835U;

    t40 = ((x2409>>x2410)-(x2411&x2412));

    if (t40 != 536870911U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2441 = 3U;
	uint64_t x2442 = 3LLU;

    t41 = ((x2441>>x2442)-(x2443&x2444));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x2461 = 36U;
	int8_t x2462 = 0;
	volatile uint32_t x2463 = 56U;
	volatile uint32_t t42 = 357U;

    t42 = ((x2461>>x2462)-(x2463&x2464));

    if (t42 != 4294967276U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x2513 = UINT32_MAX;
	int8_t x2514 = 3;
	int8_t x2515 = INT8_MAX;
	uint8_t x2516 = UINT8_MAX;
	uint32_t t43 = 1190132418U;

    t43 = ((x2513>>x2514)-(x2515&x2516));

    if (t43 != 536870784U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2574 = 0LLU;
	int64_t x2575 = -559036691996243171LL;
	uint64_t x2576 = UINT64_MAX;
	uint64_t t44 = 198797494LLU;

    t44 = ((x2573>>x2574)-(x2575&x2576));

    if (t44 != 559036691996243298LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x2599 = 11435;
	static uint8_t x2600 = 11U;
	volatile int64_t t45 = -456133411652LL;

    t45 = ((x2597>>x2598)-(x2599&x2600));

    if (t45 != -11LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x2617 = INT16_MAX;
	int32_t x2620 = 253;

    t46 = ((x2617>>x2618)-(x2619&x2620));

    if (t46 != -4) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x2733 = INT32_MAX;
	int64_t x2734 = 22LL;
	volatile uint8_t x2735 = 4U;
	int32_t t47 = 249;

    t47 = ((x2733>>x2734)-(x2735&x2736));

    if (t47 != 507) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x2761 = UINT64_MAX;
	static uint64_t x2762 = 11LLU;
	volatile int32_t x2764 = -86;
	uint64_t t48 = 14905119576556009LLU;

    t48 = ((x2761>>x2762)-(x2763&x2764));

    if (t48 != 9007199254741077LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x2817 = 143U;
	int16_t x2818 = 0;
	volatile int16_t x2819 = -1;
	volatile uint32_t t49 = 2U;

    t49 = ((x2817>>x2818)-(x2819&x2820));

    if (t49 != 3532011742U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x2850 = 2U;
	int8_t x2851 = INT8_MAX;
	static volatile uint64_t x2852 = UINT64_MAX;
	volatile uint64_t t50 = 21363LLU;

    t50 = ((x2849>>x2850)-(x2851&x2852));

    if (t50 != 16256LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x2869 = INT32_MAX;
	int8_t x2870 = 7;
	int8_t x2871 = -3;
	uint16_t x2872 = UINT16_MAX;
	volatile int32_t t51 = -1;

    t51 = ((x2869>>x2870)-(x2871&x2872));

    if (t51 != 16711682) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x2913 = INT8_MAX;
	static int16_t x2914 = 1;
	int8_t x2915 = INT8_MIN;
	static volatile int64_t x2916 = INT64_MAX;
	int64_t t52 = -949157LL;

    t52 = ((x2913>>x2914)-(x2915&x2916));

    if (t52 != -9223372036854775617LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x2925 = 1U;
	static uint16_t x2928 = 45U;
	volatile int32_t t53 = 232946;

    t53 = ((x2925>>x2926)-(x2927&x2928));

    if (t53 != -40) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x2961 = UINT16_MAX;
	volatile uint64_t t54 = 2044552LLU;

    t54 = ((x2961>>x2962)-(x2963&x2964));

    if (t54 != 18446744073709535074LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x3062 = 2;
	int32_t x3063 = -1;
	static int32_t t55 = -1;

    t55 = ((x3061>>x3062)-(x3063&x3064));

    if (t55 != 16384) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x3069 = 0;
	uint8_t x3070 = 16U;
	uint16_t x3071 = 26914U;
	uint8_t x3072 = 109U;
	static int32_t t56 = 342340874;

    t56 = ((x3069>>x3070)-(x3071&x3072));

    if (t56 != -32) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x3093 = 1U;
	static int16_t x3094 = 1;
	int64_t x3095 = INT64_MAX;
	int8_t x3096 = INT8_MAX;

    t57 = ((x3093>>x3094)-(x3095&x3096));

    if (t57 != -127LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x3221 = 91U;
	uint32_t x3222 = 2U;
	int64_t x3223 = INT64_MIN;
	uint32_t x3224 = UINT32_MAX;
	static int64_t t58 = 694LL;

    t58 = ((x3221>>x3222)-(x3223&x3224));

    if (t58 != 22LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x3357 = UINT16_MAX;
	int16_t x3358 = 3;
	static volatile int32_t x3359 = -1;
	volatile int32_t t59 = 90729125;

    t59 = ((x3357>>x3358)-(x3359&x3360));

    if (t59 != 40959) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x3421 = 6U;
	volatile uint8_t x3422 = 14U;
	int32_t x3423 = -12;
	int16_t x3424 = INT16_MIN;
	int32_t t60 = 55;

    t60 = ((x3421>>x3422)-(x3423&x3424));

    if (t60 != 32768) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x3429 = UINT16_MAX;
	uint8_t x3432 = UINT8_MAX;
	int64_t t61 = -1LL;

    t61 = ((x3429>>x3430)-(x3431&x3432));

    if (t61 != 32621LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x3437 = 0U;
	volatile int32_t x3438 = 11;
	int16_t x3440 = INT16_MIN;

    t62 = ((x3437>>x3438)-(x3439&x3440));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x3537 = UINT16_MAX;
	int64_t x3540 = 7LL;
	volatile int64_t t63 = 10276697747318LL;

    t63 = ((x3537>>x3538)-(x3539&x3540));

    if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x3585 = 3U;
	static volatile uint8_t x3586 = 2U;
	uint64_t x3588 = UINT64_MAX;

    t64 = ((x3585>>x3586)-(x3587&x3588));

    if (t64 != 32768LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x3605 = INT16_MAX;
	uint32_t x3606 = 4U;
	static int8_t x3608 = INT8_MIN;
	volatile int32_t t65 = 635410;

    t65 = ((x3605>>x3606)-(x3607&x3608));

    if (t65 != 2175) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x3645 = 4500U;
	uint8_t x3646 = 5U;
	uint32_t x3647 = UINT32_MAX;
	uint8_t x3648 = 45U;
	volatile uint32_t t66 = 5410U;

    t66 = ((x3645>>x3646)-(x3647&x3648));

    if (t66 != 95U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x3853 = INT8_MAX;
	int8_t x3855 = INT8_MAX;
	int8_t x3856 = INT8_MIN;
	volatile int32_t t67 = 1024;

    t67 = ((x3853>>x3854)-(x3855&x3856));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x3913 = INT16_MAX;
	volatile int16_t x3915 = INT16_MIN;
	volatile uint64_t x3916 = 20927LLU;
	static uint64_t t68 = 7LLU;

    t68 = ((x3913>>x3914)-(x3915&x3916));

    if (t68 != 16383LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x3996 = 14;
	int32_t t69 = -15034;

    t69 = ((x3993>>x3994)-(x3995&x3996));

    if (t69 != 497) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x4017 = INT32_MAX;
	uint8_t x4018 = 5U;
	uint8_t x4019 = 6U;
	uint64_t x4020 = UINT64_MAX;
	uint64_t t70 = 104625865384LLU;

    t70 = ((x4017>>x4018)-(x4019&x4020));

    if (t70 != 67108857LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x4097 = 7924518896043LLU;
	int16_t x4098 = 1;
	volatile int64_t x4099 = -705LL;
	volatile int64_t x4100 = -1LL;
	volatile uint64_t t71 = 18149206017LLU;

    t71 = ((x4097>>x4098)-(x4099&x4100));

    if (t71 != 3962259448726LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x4102 = 3U;
	int16_t x4103 = INT16_MAX;
	int32_t x4104 = INT32_MIN;

    t72 = ((x4101>>x4102)-(x4103&x4104));

    if (t72 != 5017247479432758LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x4113 = INT16_MAX;
	int32_t t73 = 150543;

    t73 = ((x4113>>x4114)-(x4115&x4116));

    if (t73 != 49151) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x4125 = UINT64_MAX;
	int8_t x4126 = 7;
	int16_t x4127 = -1;
	static volatile uint16_t x4128 = 78U;
	volatile uint64_t t74 = 88274530000LLU;

    t74 = ((x4125>>x4126)-(x4127&x4128));

    if (t74 != 144115188075855793LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4237 = INT8_MAX;
	static volatile uint16_t x4238 = 2U;
	int8_t x4240 = INT8_MIN;
	static uint32_t t75 = 29U;

    t75 = ((x4237>>x4238)-(x4239&x4240));

    if (t75 != 31U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x4357 = INT16_MAX;
	int8_t x4358 = 1;
	uint8_t x4359 = 15U;
	int32_t x4360 = INT32_MIN;
	int32_t t76 = -51;

    t76 = ((x4357>>x4358)-(x4359&x4360));

    if (t76 != 16383) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x4509 = INT8_MAX;
	int32_t x4511 = INT32_MAX;
	int16_t x4512 = INT16_MAX;

    t77 = ((x4509>>x4510)-(x4511&x4512));

    if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x4513 = 1U;
	int8_t x4514 = 1;
	int64_t x4515 = -5LL;
	volatile int8_t x4516 = INT8_MAX;
	volatile int64_t t78 = -78315570413423LL;

    t78 = ((x4513>>x4514)-(x4515&x4516));

    if (t78 != -123LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x4541 = UINT32_MAX;
	uint16_t x4542 = 3U;
	int64_t x4543 = 1578982LL;
	int32_t x4544 = INT32_MIN;
	int64_t t79 = -350LL;

    t79 = ((x4541>>x4542)-(x4543&x4544));

    if (t79 != 536870911LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x4578 = 6LL;
	volatile uint64_t x4579 = 444592443LLU;
	uint16_t x4580 = 5289U;
	static uint64_t t80 = 49270LLU;

    t80 = ((x4577>>x4578)-(x4579&x4580));

    if (t80 != 67104726LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x4693 = 1555940442795LLU;
	static uint8_t x4694 = 3U;
	int16_t x4696 = INT16_MAX;

    t81 = ((x4693>>x4694)-(x4695&x4696));

    if (t81 != 194492551357LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4825 = UINT8_MAX;
	volatile int64_t x4826 = 0LL;
	static int32_t t82 = -552;

    t82 = ((x4825>>x4826)-(x4827&x4828));

    if (t82 != -2147483265) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x4901 = UINT8_MAX;
	int8_t x4902 = 0;
	uint8_t x4903 = UINT8_MAX;
	int8_t x4904 = INT8_MIN;
	int32_t t83 = 834707;

    t83 = ((x4901>>x4902)-(x4903&x4904));

    if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x4917 = 474295U;
	int8_t x4918 = 5;
	static uint8_t x4919 = UINT8_MAX;
	volatile int32_t x4920 = -1;
	uint32_t t84 = 1682151U;

    t84 = ((x4917>>x4918)-(x4919&x4920));

    if (t84 != 14566U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x4922 = 20U;
	static uint64_t x4924 = UINT64_MAX;
	volatile uint64_t t85 = 190261218242LLU;

    t85 = ((x4921>>x4922)-(x4923&x4924));

    if (t85 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x5046 = 1;
	volatile int8_t x5048 = INT8_MIN;
	volatile int32_t t86 = 0;

    t86 = ((x5045>>x5046)-(x5047&x5048));

    if (t86 != 71) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x5101 = INT32_MAX;
	int16_t x5102 = 1;
	static int32_t x5103 = 1679084;
	int32_t x5104 = -1;
	volatile int32_t t87 = 0;

    t87 = ((x5101>>x5102)-(x5103&x5104));

    if (t87 != 1072062739) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x5173 = 116854102374172847LLU;
	int8_t x5174 = 0;
	int16_t x5175 = -221;
	int16_t x5176 = 1833;

    t88 = ((x5173>>x5174)-(x5175&x5176));

    if (t88 != 116854102374171022LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x5334 = 10;
	int16_t x5335 = INT16_MIN;
	uint8_t x5336 = UINT8_MAX;
	volatile uint32_t t89 = 220U;

    t89 = ((x5333>>x5334)-(x5335&x5336));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x5357 = INT8_MAX;
	volatile uint64_t x5359 = 2001993228299LLU;
	static volatile int64_t x5360 = 971478300568LL;
	uint64_t t90 = 5147678540324021LLU;

    t90 = ((x5357>>x5358)-(x5359&x5360));

    if (t90 != 18446743239947427895LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x5405 = UINT64_MAX;
	int16_t x5406 = 5;
	int16_t x5407 = INT16_MIN;
	static int16_t x5408 = 0;
	uint64_t t91 = 1054774160LLU;

    t91 = ((x5405>>x5406)-(x5407&x5408));

    if (t91 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x5433 = UINT8_MAX;
	int8_t x5435 = INT8_MIN;
	static volatile uint8_t x5436 = 11U;
	static volatile int32_t t92 = -434080;

    t92 = ((x5433>>x5434)-(x5435&x5436));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x5477 = UINT64_MAX;
	int8_t x5478 = 43;
	volatile int8_t x5479 = INT8_MIN;
	volatile uint64_t t93 = 1475044341240LLU;

    t93 = ((x5477>>x5478)-(x5479&x5480));

    if (t93 != 2097279LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x5513 = INT8_MAX;
	uint8_t x5514 = 25U;
	int32_t t94 = -159594428;

    t94 = ((x5513>>x5514)-(x5515&x5516));

    if (t94 != -65408) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x5554 = 0LLU;
	uint16_t x5555 = 5087U;
	int32_t x5556 = -726;
	static int32_t t95 = -285179;

    t95 = ((x5553>>x5554)-(x5555&x5556));

    if (t95 != 1938445) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x5582 = 31U;
	static uint32_t x5584 = UINT32_MAX;
	uint32_t t96 = 64477U;

    t96 = ((x5581>>x5582)-(x5583&x5584));

    if (t96 != 4294967267U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x5621 = INT16_MAX;
	static int64_t x5623 = 16573291654LL;
	int8_t x5624 = INT8_MIN;
	volatile int64_t t97 = 99970LL;

    t97 = ((x5621>>x5622)-(x5623&x5624));

    if (t97 != -16573258881LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x5725 = 73749U;
	uint8_t x5726 = 4U;
	int16_t x5727 = 1;
	int16_t x5728 = -1;
	static volatile uint32_t t98 = 666937314U;

    t98 = ((x5725>>x5726)-(x5727&x5728));

    if (t98 != 4608U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x5737 = UINT64_MAX;
	int32_t x5738 = 1;
	static uint16_t x5739 = 9U;
	static int8_t x5740 = INT8_MIN;

    t99 = ((x5737>>x5738)-(x5739&x5740));

    if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x5805 = 41U;
	static uint8_t x5806 = 2U;
	int32_t x5807 = -2349026;
	int8_t x5808 = -5;
	int32_t t100 = -1;

    t100 = ((x5805>>x5806)-(x5807&x5808));

    if (t100 != 2349040) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x5829 = 2978025541057216363LLU;
	uint8_t x5830 = 7U;
	int16_t x5831 = -3771;
	volatile int32_t x5832 = INT32_MIN;
	volatile uint64_t t101 = 193LLU;

    t101 = ((x5829>>x5830)-(x5831&x5832));

    if (t101 != 23265826686993150LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x5841 = 58;
	static int16_t x5842 = 1;
	uint16_t x5843 = UINT16_MAX;

    t102 = ((x5841>>x5842)-(x5843&x5844));

    if (t102 != -65318) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x6023 = 3870056660361233LL;
	static int64_t x6024 = 1467991LL;
	volatile int64_t t103 = -197127476370LL;

    t103 = ((x6021>>x6022)-(x6023&x6024));

    if (t103 != -24593LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x6053 = UINT32_MAX;
	static int8_t x6055 = INT8_MAX;
	int16_t x6056 = -316;
	uint32_t t104 = 50U;

    t104 = ((x6053>>x6054)-(x6055&x6056));

    if (t104 != 2147483579U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x6058 = 3;
	static volatile int64_t x6059 = INT64_MAX;
	int8_t x6060 = -7;
	int64_t t105 = 404758LL;

    t105 = ((x6057>>x6058)-(x6059&x6060));

    if (t105 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x6069 = INT16_MAX;
	static uint64_t x6070 = 13LLU;
	volatile uint8_t x6071 = UINT8_MAX;
	int16_t x6072 = INT16_MAX;
	int32_t t106 = 517;

    t106 = ((x6069>>x6070)-(x6071&x6072));

    if (t106 != -252) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x6073 = 10895U;
	uint16_t x6074 = 5U;
	static uint64_t x6075 = 161711832059LLU;
	int16_t x6076 = INT16_MAX;
	uint64_t t107 = 55424923794106733LLU;

    t107 = ((x6073>>x6074)-(x6075&x6076));

    if (t107 != 18446744073709536601LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x6085 = 8029;
	uint16_t x6086 = 19U;
	static int16_t x6087 = INT16_MIN;
	static int8_t x6088 = -1;

    t108 = ((x6085>>x6086)-(x6087&x6088));

    if (t108 != 32768) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x6101 = 32U;
	int16_t x6102 = 30;
	volatile int32_t t109 = 2825676;

    t109 = ((x6101>>x6102)-(x6103&x6104));

    if (t109 != -24) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x6121 = 2U;
	uint16_t x6122 = 0U;
	static int8_t x6123 = -1;
	int64_t x6124 = 222201677034LL;

    t110 = ((x6121>>x6122)-(x6123&x6124));

    if (t110 != -222201677032LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x6245 = 1474;
	uint8_t x6246 = 3U;
	static uint32_t x6247 = 725U;
	int16_t x6248 = INT16_MIN;
	uint32_t t111 = 103375U;

    t111 = ((x6245>>x6246)-(x6247&x6248));

    if (t111 != 184U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x6273 = 1386629373718750LL;
	uint16_t x6275 = 31497U;
	int64_t x6276 = INT64_MIN;
	int64_t t112 = -4065381LL;

    t112 = ((x6273>>x6274)-(x6275&x6276));

    if (t112 != 693314686859375LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x6461 = UINT8_MAX;
	uint8_t x6462 = 12U;
	uint16_t x6463 = 14232U;
	int32_t x6464 = INT32_MIN;
	volatile int32_t t113 = -371002736;

    t113 = ((x6461>>x6462)-(x6463&x6464));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x6473 = UINT8_MAX;
	volatile uint8_t x6474 = 0U;
	int16_t x6476 = -1;
	int32_t t114 = 165151;

    t114 = ((x6473>>x6474)-(x6475&x6476));

    if (t114 != 256) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x6513 = UINT8_MAX;
	volatile uint8_t x6514 = 31U;
	int16_t x6516 = INT16_MIN;

    t115 = ((x6513>>x6514)-(x6515&x6516));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x6669 = UINT32_MAX;
	uint8_t x6672 = 11U;
	uint32_t t116 = 5U;

    t116 = ((x6669>>x6670)-(x6671&x6672));

    if (t116 != 4294967286U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x6737 = INT8_MAX;
	volatile uint32_t x6738 = 3U;
	int8_t x6739 = INT8_MIN;
	int32_t t117 = -1;

    t117 = ((x6737>>x6738)-(x6739&x6740));

    if (t117 != 3215) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x6813 = 212;
	int16_t x6816 = INT16_MAX;

    t118 = ((x6813>>x6814)-(x6815&x6816));

    if (t118 != -2229) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x6865 = 116U;
	int16_t x6866 = 3;
	int8_t x6867 = INT8_MAX;
	int64_t t119 = 4518994LL;

    t119 = ((x6865>>x6866)-(x6867&x6868));

    if (t119 != -113LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x6877 = 1;
	int16_t x6878 = 22;
	volatile int8_t x6879 = INT8_MIN;
	int32_t x6880 = -6937636;
	volatile int32_t t120 = 12;

    t120 = ((x6877>>x6878)-(x6879&x6880));

    if (t120 != 6937728) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x6961 = 1;
	static int16_t x6963 = INT16_MIN;
	static volatile int16_t x6964 = -15;
	int32_t t121 = -740;

    t121 = ((x6961>>x6962)-(x6963&x6964));

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x7089 = 26320LL;
	static int8_t x7092 = INT8_MIN;
	static int64_t t122 = -338846LL;

    t122 = ((x7089>>x7090)-(x7091&x7092));

    if (t122 != -15148800LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x7093 = 1U;
	volatile int8_t x7094 = 1;
	int64_t x7095 = 1992326LL;
	static uint8_t x7096 = UINT8_MAX;
	int64_t t123 = -1LL;

    t123 = ((x7093>>x7094)-(x7095&x7096));

    if (t123 != -134LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x7149 = UINT64_MAX;
	volatile uint8_t x7150 = 1U;
	volatile int8_t x7151 = -1;
	volatile uint64_t x7152 = UINT64_MAX;
	static uint64_t t124 = 23412189LLU;

    t124 = ((x7149>>x7150)-(x7151&x7152));

    if (t124 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x7153 = 9960803LLU;
	int8_t x7154 = 1;
	uint16_t x7155 = 3960U;
	volatile uint64_t x7156 = 1316823LLU;
	volatile uint64_t t125 = 71901918LLU;

    t125 = ((x7153>>x7154)-(x7155&x7156));

    if (t125 != 4978529LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x7169 = INT8_MAX;
	static int8_t x7170 = 3;
	uint16_t x7171 = 5046U;
	uint64_t x7172 = 6187LLU;

    t126 = ((x7169>>x7170)-(x7171&x7172));

    if (t126 != 18446744073709547501LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x7229 = INT64_MAX;
	uint8_t x7230 = 1U;
	uint16_t x7231 = 0U;
	int32_t x7232 = INT32_MIN;
	int64_t t127 = -1615961982457LL;

    t127 = ((x7229>>x7230)-(x7231&x7232));

    if (t127 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x7297 = 34721LLU;
	uint64_t x7298 = 1LLU;
	int8_t x7299 = INT8_MIN;

    t128 = ((x7297>>x7298)-(x7299&x7300));

    if (t128 != 50128LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x7313 = INT8_MAX;
	uint32_t x7314 = 5U;
	int16_t x7315 = 1;
	int16_t x7316 = INT16_MAX;
	static volatile int32_t t129 = -376267362;

    t129 = ((x7313>>x7314)-(x7315&x7316));

    if (t129 != 2) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x7349 = UINT8_MAX;
	uint16_t x7350 = 17U;
	int32_t x7351 = -1;
	volatile uint64_t x7352 = 349250603140601LLU;
	volatile uint64_t t130 = 3512220535272LLU;

    t130 = ((x7349>>x7350)-(x7351&x7352));

    if (t130 != 18446394823106411015LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x7358 = 1;
	uint8_t x7359 = 50U;
	int64_t x7360 = 1LL;
	int64_t t131 = -70146945196946182LL;

    t131 = ((x7357>>x7358)-(x7359&x7360));

    if (t131 != 1402628LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x7530 = 2LLU;
	uint32_t x7531 = UINT32_MAX;
	static uint8_t x7532 = UINT8_MAX;
	static uint64_t t132 = 2621872001802LLU;

    t132 = ((x7529>>x7530)-(x7531&x7532));

    if (t132 != 976101131051LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint16_t x7553 = 20834U;
	uint32_t x7554 = 5U;
	int8_t x7555 = INT8_MIN;
	int64_t x7556 = -418071014323024457LL;
	int64_t t133 = 130281850006LL;

    t133 = ((x7553>>x7554)-(x7555&x7556));

    if (t133 != 418071014323025163LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x7613 = UINT64_MAX;
	int8_t x7614 = 17;
	int64_t x7615 = INT64_MAX;
	int64_t x7616 = 75368145873LL;

    t134 = ((x7613>>x7614)-(x7615&x7616));

    if (t134 != 140662120209454LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x7649 = 4083LLU;
	static uint8_t x7650 = 1U;
	static uint16_t x7651 = UINT16_MAX;

    t135 = ((x7649>>x7650)-(x7651&x7652));

    if (t135 != 18446744073709488122LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x7684 = -16238600102LL;

    t136 = ((x7681>>x7682)-(x7683&x7684));

    if (t136 != 16381570290LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x7830 = 11U;
	static uint32_t x7831 = UINT32_MAX;
	int64_t t137 = 111437685757389LL;

    t137 = ((x7829>>x7830)-(x7831&x7832));

    if (t137 != -4294967295LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x7977 = 1U;
	int8_t x7978 = 0;
	uint64_t x7979 = 31463LLU;
	static int8_t x7980 = -1;
	uint64_t t138 = 493298494138305LLU;

    t138 = ((x7977>>x7978)-(x7979&x7980));

    if (t138 != 18446744073709520154LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x7981 = 3U;
	uint8_t x7982 = 13U;
	uint32_t x7983 = UINT32_MAX;
	static uint64_t x7984 = 291666LLU;
	uint64_t t139 = 887817417LLU;

    t139 = ((x7981>>x7982)-(x7983&x7984));

    if (t139 != 18446744073709259950LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x8014 = 2;
	uint64_t x8015 = 877LLU;
	int32_t x8016 = INT32_MIN;

    t140 = ((x8013>>x8014)-(x8015&x8016));

    if (t140 != 4480LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x8182 = 17U;
	int32_t x8184 = -20921763;
	volatile int32_t t141 = -748116141;

    t141 = ((x8181>>x8182)-(x8183&x8184));

    if (t141 != 20955127) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x8193 = UINT8_MAX;
	static uint16_t x8194 = 30U;
	int8_t x8195 = -1;
	static volatile int32_t t142 = 633121;

    t142 = ((x8193>>x8194)-(x8195&x8196));

    if (t142 != 128) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x8229 = UINT32_MAX;
	uint16_t x8230 = 0U;
	int32_t x8231 = -14632;
	volatile uint32_t x8232 = 403U;
	uint32_t t143 = 189230U;

    t143 = ((x8229>>x8230)-(x8231&x8232));

    if (t143 != 4294967151U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x8257 = 187U;
	uint8_t x8258 = 7U;
	static int16_t x8259 = -1;
	static int32_t x8260 = INT32_MAX;
	static volatile int32_t t144 = -6;

    t144 = ((x8257>>x8258)-(x8259&x8260));

    if (t144 != -2147483646) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x8281 = 0U;
	volatile uint8_t x8282 = 1U;
	static int8_t x8283 = 1;
	int32_t t145 = 94683915;

    t145 = ((x8281>>x8282)-(x8283&x8284));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x8389 = UINT16_MAX;
	static volatile int32_t x8391 = INT32_MIN;
	uint16_t x8392 = 2994U;
	static volatile int32_t t146 = -348210580;

    t146 = ((x8389>>x8390)-(x8391&x8392));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x8565 = UINT64_MAX;
	static int32_t x8567 = INT32_MIN;
	int16_t x8568 = INT16_MIN;
	static volatile uint64_t t147 = 14063286153118LLU;

    t147 = ((x8565>>x8566)-(x8567&x8568));

    if (t147 != 2305843011361177599LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x8717 = 748657444U;
	uint32_t x8718 = 14U;
	int64_t x8719 = -10167783730LL;
	int32_t x8720 = -1562;
	int64_t t148 = -6745132LL;

    t148 = ((x8717>>x8718)-(x8719&x8720));

    if (t148 != 10167830968LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x8734 = 8U;
	volatile uint8_t x8736 = 19U;
	volatile int32_t t149 = -2336;

    t149 = ((x8733>>x8734)-(x8735&x8736));

    if (t149 != -3) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x8829 = 1;
	int8_t x8830 = 8;
	int64_t x8831 = 9862622625526002LL;
	int64_t x8832 = INT64_MIN;

    t150 = ((x8829>>x8830)-(x8831&x8832));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x8865 = UINT32_MAX;
	uint16_t x8866 = 4U;
	int64_t x8867 = 2247331647LL;
	int64_t t151 = 110LL;

    t151 = ((x8865>>x8866)-(x8867&x8868));

    if (t151 != -1978896192LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x8897 = 42U;
	int8_t x8898 = 3;
	int64_t x8899 = -1LL;
	static int64_t t152 = -160398853739238388LL;

    t152 = ((x8897>>x8898)-(x8899&x8900));

    if (t152 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x8910 = 1U;
	uint16_t x8911 = UINT16_MAX;
	static volatile int32_t t153 = -2;

    t153 = ((x8909>>x8910)-(x8911&x8912));

    if (t153 != 1073709055) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x8929 = INT8_MAX;
	static uint8_t x8930 = 1U;
	int32_t x8931 = INT32_MAX;
	uint16_t x8932 = 1445U;
	volatile int32_t t154 = 147103;

    t154 = ((x8929>>x8930)-(x8931&x8932));

    if (t154 != -1382) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x8945 = INT16_MAX;
	uint8_t x8946 = 3U;
	uint16_t x8947 = UINT16_MAX;
	static int16_t x8948 = INT16_MAX;
	int32_t t155 = 202588417;

    t155 = ((x8945>>x8946)-(x8947&x8948));

    if (t155 != -28672) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x8989 = UINT8_MAX;
	int16_t x8991 = INT16_MIN;
	int16_t x8992 = INT16_MIN;

    t156 = ((x8989>>x8990)-(x8991&x8992));

    if (t156 != 33023) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x9009 = 0U;
	static volatile int8_t x9010 = 0;
	int16_t x9011 = INT16_MIN;
	uint16_t x9012 = UINT16_MAX;
	volatile int32_t t157 = 5;

    t157 = ((x9009>>x9010)-(x9011&x9012));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x9013 = UINT32_MAX;
	uint8_t x9014 = 2U;
	volatile int32_t x9016 = INT32_MAX;

    t158 = ((x9013>>x9014)-(x9015&x9016));

    if (t158 != 18446744073325647404LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x9021 = INT64_MAX;
	uint16_t x9022 = 3U;
	int8_t x9023 = INT8_MAX;
	int16_t x9024 = INT16_MIN;
	volatile int64_t t159 = -17520303LL;

    t159 = ((x9021>>x9022)-(x9023&x9024));

    if (t159 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x9085 = UINT64_MAX;
	uint64_t t160 = 1752LLU;

    t160 = ((x9085>>x9086)-(x9087&x9088));

    if (t160 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x9186 = 4;
	volatile int8_t x9187 = INT8_MIN;
	int16_t x9188 = 12;
	static volatile int32_t t161 = -50;

    t161 = ((x9185>>x9186)-(x9187&x9188));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x9206 = 7U;
	int16_t x9207 = -1;
	volatile uint32_t t162 = 1003U;

    t162 = ((x9205>>x9206)-(x9207&x9208));

    if (t162 != 14U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x9210 = 0;
	int64_t x9211 = INT64_MIN;
	static int16_t x9212 = INT16_MAX;
	volatile int64_t t163 = 3219LL;

    t163 = ((x9209>>x9210)-(x9211&x9212));

    if (t163 != 65535LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x9213 = 20U;
	volatile int16_t x9215 = 1748;
	int16_t x9216 = -1;
	volatile int32_t t164 = -1838813;

    t164 = ((x9213>>x9214)-(x9215&x9216));

    if (t164 != -1728) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x9225 = INT8_MAX;
	uint8_t x9226 = 6U;
	uint32_t x9227 = 10661U;
	int32_t x9228 = INT32_MAX;

    t165 = ((x9225>>x9226)-(x9227&x9228));

    if (t165 != 4294956636U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x9301 = INT16_MAX;
	static uint8_t x9302 = 13U;
	int32_t x9303 = INT32_MIN;
	uint32_t x9304 = 31U;
	volatile uint32_t t166 = 1902028214U;

    t166 = ((x9301>>x9302)-(x9303&x9304));

    if (t166 != 3U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x9310 = 14U;
	uint8_t x9311 = UINT8_MAX;
	uint32_t x9312 = 9561U;
	volatile uint32_t t167 = 8319858U;

    t167 = ((x9309>>x9310)-(x9311&x9312));

    if (t167 != 4294967207U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x9405 = 95574954LL;
	uint16_t x9406 = 55U;
	int16_t x9407 = -26;
	volatile uint64_t x9408 = UINT64_MAX;
	static volatile uint64_t t168 = 828497024LLU;

    t168 = ((x9405>>x9406)-(x9407&x9408));

    if (t168 != 26LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x9417 = 543U;
	int8_t x9418 = 0;
	volatile int32_t t169 = -161;

    t169 = ((x9417>>x9418)-(x9419&x9420));

    if (t169 != -64992) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x9449 = 61LL;
	uint8_t x9450 = 0U;
	int32_t x9451 = INT32_MIN;
	uint8_t x9452 = 6U;
	int64_t t170 = 914502070796075397LL;

    t170 = ((x9449>>x9450)-(x9451&x9452));

    if (t170 != 61LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x9477 = 1060550679;
	int16_t x9478 = 1;
	uint32_t x9479 = 245697909U;
	int32_t x9480 = INT32_MIN;
	static uint32_t t171 = 13U;

    t171 = ((x9477>>x9478)-(x9479&x9480));

    if (t171 != 530275339U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x9545 = 15984U;
	int8_t x9546 = 16;
	int16_t x9547 = INT16_MIN;
	static uint64_t x9548 = 27239585495081LLU;

    t172 = ((x9545>>x9546)-(x9547&x9548));

    if (t172 != 18446716834124070912LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x9697 = 21LLU;
	int16_t x9698 = 1;
	static volatile uint64_t x9699 = 50058189LLU;
	volatile int8_t x9700 = -1;
	uint64_t t173 = 91205874251582LLU;

    t173 = ((x9697>>x9698)-(x9699&x9700));

    if (t173 != 18446744073659493437LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x9705 = UINT32_MAX;
	uint32_t x9706 = 17U;
	uint8_t x9708 = 123U;
	uint32_t t174 = 0U;

    t174 = ((x9705>>x9706)-(x9707&x9708));

    if (t174 != 32767U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x9709 = 1937500;
	uint8_t x9710 = 7U;
	int16_t x9712 = INT16_MIN;
	volatile int32_t t175 = 1456855;

    t175 = ((x9709>>x9710)-(x9711&x9712));

    if (t175 != 15136) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x9765 = 0;
	uint8_t x9766 = 13U;
	static uint32_t x9767 = 497923607U;
	static volatile int64_t t176 = -18875318LL;

    t176 = ((x9765>>x9766)-(x9767&x9768));

    if (t176 != -142717441LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x9885 = INT8_MAX;
	int16_t x9887 = INT16_MAX;
	int64_t x9888 = 4056224939LL;
	static volatile int64_t t177 = -21464981836443LL;

    t177 = ((x9885>>x9886)-(x9887&x9888));

    if (t177 != -5228LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x9941 = 3467184LLU;
	static volatile uint16_t x9942 = 1U;
	int16_t x9943 = 95;
	uint64_t x9944 = 20925289935393022LLU;

    t178 = ((x9941>>x9942)-(x9943&x9944));

    if (t178 != 1733498LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x9953 = 1548;
	uint32_t x9954 = 3U;
	volatile uint16_t x9955 = 48U;
	static int64_t x9956 = INT64_MIN;
	volatile int64_t t179 = -664595714157767399LL;

    t179 = ((x9953>>x9954)-(x9955&x9956));

    if (t179 != 193LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x9958 = 14U;
	int32_t x9959 = INT32_MIN;
	uint8_t x9960 = 25U;
	volatile int32_t t180 = 146455;

    t180 = ((x9957>>x9958)-(x9959&x9960));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x9973 = 2U;
	static volatile uint8_t x9974 = 0U;
	volatile uint8_t x9975 = 29U;
	int64_t x9976 = INT64_MAX;
	int64_t t181 = 70302LL;

    t181 = ((x9973>>x9974)-(x9975&x9976));

    if (t181 != -27LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x10057 = 1045533773234756795LLU;
	uint64_t t182 = 158636967263174178LLU;

    t182 = ((x10057>>x10058)-(x10059&x10060));

    if (t182 != 127628634428071LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x10093 = 1;
	volatile uint8_t x10094 = 27U;
	int64_t x10095 = INT64_MAX;
	int64_t x10096 = -1LL;
	volatile int64_t t183 = 56574267038431347LL;

    t183 = ((x10093>>x10094)-(x10095&x10096));

    if (t183 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x10153 = UINT8_MAX;
	volatile int16_t x10154 = 0;
	int64_t x10155 = 4436655232LL;
	volatile int32_t x10156 = -81497190;
	int64_t t184 = 389842069LL;

    t184 = ((x10153>>x10154)-(x10155&x10156));

    if (t184 != -4431310721LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x10177 = 46808;
	int8_t x10178 = 11;
	int64_t x10179 = -438LL;
	int32_t x10180 = -1;
	int64_t t185 = 1LL;

    t185 = ((x10177>>x10178)-(x10179&x10180));

    if (t185 != 460LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x10181 = UINT16_MAX;
	int16_t x10182 = 28;
	int64_t x10183 = -73364LL;
	uint16_t x10184 = 0U;
	int64_t t186 = -11LL;

    t186 = ((x10181>>x10182)-(x10183&x10184));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x10202 = 1;
	uint64_t x10203 = 253276LLU;
	uint16_t x10204 = UINT16_MAX;
	volatile uint64_t t187 = 41261680954LLU;

    t187 = ((x10201>>x10202)-(x10203&x10204));

    if (t187 != 18446744073709494948LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x10225 = UINT32_MAX;
	volatile int8_t x10226 = 0;
	uint16_t x10227 = 16292U;
	uint16_t x10228 = 14731U;
	static volatile uint32_t t188 = 8511U;

    t188 = ((x10225>>x10226)-(x10227&x10228));

    if (t188 != 4294952575U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x10309 = 36012537LL;
	static int8_t x10310 = 0;
	int64_t x10311 = -121323433796856LL;
	int8_t x10312 = INT8_MIN;
	static int64_t t189 = 65074LL;

    t189 = ((x10309>>x10310)-(x10311&x10312));

    if (t189 != 121323469809401LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x10417 = 1805LLU;
	int8_t x10418 = 5;
	int32_t x10420 = 30200;
	uint64_t t190 = 8418LLU;

    t190 = ((x10417>>x10418)-(x10419&x10420));

    if (t190 != 40LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x10545 = 0U;
	int32_t x10546 = 6;
	int64_t x10548 = -59543694LL;
	volatile uint64_t t191 = 3938905987348339389LLU;

    t191 = ((x10545>>x10546)-(x10547&x10548));

    if (t191 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x10677 = INT16_MAX;
	int8_t x10678 = 3;
	volatile int8_t x10679 = INT8_MAX;
	volatile uint32_t x10680 = 1371U;
	volatile uint32_t t192 = 31655315U;

    t192 = ((x10677>>x10678)-(x10679&x10680));

    if (t192 != 4004U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x10681 = 409;
	static volatile int8_t x10683 = -1;
	uint64_t x10684 = 102777251LLU;
	uint64_t t193 = 713534409LLU;

    t193 = ((x10681>>x10682)-(x10683&x10684));

    if (t193 != 18446744073606774365LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x10710 = 6U;
	int16_t x10711 = 44;
	int64_t x10712 = -2172519664928980833LL;
	volatile int64_t t194 = 211413518224705LL;

    t194 = ((x10709>>x10710)-(x10711&x10712));

    if (t194 != -11LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x10777 = 3U;
	uint8_t x10778 = 4U;
	volatile uint32_t x10779 = UINT32_MAX;
	static uint16_t x10780 = 10744U;
	uint32_t t195 = 1299456U;

    t195 = ((x10777>>x10778)-(x10779&x10780));

    if (t195 != 4294956552U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x10881 = 605012490951LLU;
	volatile int8_t x10884 = INT8_MAX;
	uint64_t t196 = 56787302LLU;

    t196 = ((x10881>>x10882)-(x10883&x10884));

    if (t196 != 4726660060LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x11029 = 86U;
	volatile int32_t x11031 = INT32_MAX;
	volatile int32_t t197 = -663;

    t197 = ((x11029>>x11030)-(x11031&x11032));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x11042 = 1LLU;
	volatile int32_t x11044 = -18757;
	int32_t t198 = 1;

    t198 = ((x11041>>x11042)-(x11043&x11044));

    if (t198 != -701570) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x11049 = 169235711U;
	uint8_t x11050 = 1U;
	static int32_t x11051 = -234;
	uint64_t x11052 = 1LLU;
	volatile uint64_t t199 = 213LLU;

    t199 = ((x11049>>x11050)-(x11051&x11052));

    if (t199 != 84617855LLU) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

