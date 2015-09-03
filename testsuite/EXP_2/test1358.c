#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x109 = 16351;
volatile uint8_t x112 = 1U;
volatile int32_t x147 = -329;
volatile uint8_t x160 = 2U;
int16_t x174 = INT16_MIN;
int32_t x197 = 3454;
volatile int32_t t8 = 959520022;
int64_t x226 = INT64_MAX;
int32_t t12 = 261138;
int32_t x359 = INT32_MIN;
volatile int32_t t13 = -569739484;
static uint32_t t16 = 1216826U;
uint8_t x558 = UINT8_MAX;
int64_t x582 = INT64_MAX;
int32_t x586 = -54877206;
volatile int32_t x587 = INT32_MAX;
static int64_t x631 = INT64_MAX;
uint16_t x773 = UINT16_MAX;
uint16_t x915 = 16U;
uint64_t x937 = 1293554066448989209LLU;
volatile uint64_t t32 = 8008297LLU;
int64_t x1158 = -30710542741340LL;
uint16_t x1219 = 21U;
int32_t x1278 = -503707;
volatile int32_t t36 = -945;
volatile int16_t x1508 = 14;
int32_t t40 = -35725;
uint64_t x1595 = UINT64_MAX;
int16_t x1596 = 1;
uint8_t x1635 = 9U;
volatile int16_t x1636 = 0;
volatile uint8_t x1762 = UINT8_MAX;
uint8_t x1797 = UINT8_MAX;
int32_t x1798 = INT32_MIN;
int32_t t45 = -385048123;
int32_t x1839 = -678847736;
int64_t x1874 = INT64_MIN;
uint8_t x1876 = 20U;
uint16_t x1960 = 1U;
int16_t x2043 = INT16_MIN;
static int8_t x2461 = 2;
int64_t x2462 = -3796910LL;
uint32_t x2492 = 1U;
uint8_t x2770 = 3U;
uint8_t x2772 = 0U;
volatile int16_t x2854 = INT16_MIN;
static int32_t x2899 = -1;
static int32_t x2962 = 1;
uint64_t x2964 = 3LLU;
int64_t x3110 = -5LL;
static uint8_t x3112 = 15U;
volatile uint8_t x3138 = UINT8_MAX;
int32_t x3142 = INT32_MIN;
uint16_t x3144 = 9U;
volatile uint32_t t64 = 10344U;
volatile int8_t x3279 = INT8_MIN;
int16_t x3280 = 1;
int32_t t69 = 5;
int32_t x3461 = 37;
static uint16_t x3464 = 5U;
static int16_t x3501 = -1;
volatile int32_t t72 = -81;
uint64_t x3505 = 530509LLU;
static volatile uint64_t t73 = 3731LLU;
uint8_t x3557 = 99U;
int16_t x3558 = INT16_MIN;
volatile int16_t x3559 = INT16_MAX;
volatile uint32_t x3565 = 6U;
uint64_t x3568 = 15LLU;
int8_t x3577 = INT8_MAX;
int32_t x3653 = -1;
volatile int64_t x3770 = 547861LL;
volatile uint64_t t79 = 10232LLU;
uint16_t x3806 = 86U;
volatile uint32_t x3816 = 0U;
int8_t x3866 = INT8_MIN;
uint8_t x3867 = 39U;
int8_t x4084 = 1;
int8_t x4123 = INT8_MIN;
static uint8_t x4124 = 24U;
volatile uint32_t x4181 = UINT32_MAX;
uint32_t t89 = 5225753U;
volatile int64_t x4197 = -1LL;
uint32_t x4206 = 56580U;
int8_t x4208 = 14;
volatile int64_t t91 = 1465322038490936LL;
static volatile int32_t x4254 = -10772;
uint8_t x4256 = 1U;
static uint32_t x4261 = UINT32_MAX;
int8_t x4381 = 52;
uint32_t x4384 = 8U;
volatile int32_t t95 = 3087735;
static volatile int64_t x4530 = INT64_MIN;


void f0(void) {
	volatile uint8_t x57 = 0U;
	volatile int32_t x58 = INT32_MAX;
	int32_t x59 = -1;
	volatile int8_t x60 = 7;
	volatile int32_t t0 = 0;

	t0 = ((x57+(x58<x59))<<x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x110 = 1U;
	static int32_t x111 = -1;
	static int32_t t1 = -7;

	t1 = ((x109+(x110<x111))<<x112);

	if (t1 != 32702) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x121 = 471963369471079LL;
	int64_t x122 = -29585085LL;
	static uint32_t x123 = 1711514U;
	uint8_t x124 = 2U;
	int64_t t2 = 1565LL;

	t2 = ((x121+(x122<x123))<<x124);

	if (t2 != 1887853477884320LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x133 = INT16_MAX;
	int64_t x134 = 2618LL;
	volatile uint16_t x135 = UINT16_MAX;
	int16_t x136 = 3;
	static int32_t t3 = 117697801;

	t3 = ((x133+(x134<x135))<<x136);

	if (t3 != 262144) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MIN;
	int16_t x148 = 7;
	volatile uint64_t t4 = 5819506LLU;

	t4 = ((x145+(x146<x147))<<x148);

	if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x157 = UINT64_MAX;
	uint32_t x158 = 450878371U;
	volatile int8_t x159 = 2;
	static uint64_t t5 = 20090978LLU;

	t5 = ((x157+(x158<x159))<<x160);

	if (t5 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x169 = 0U;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = 31;
	uint8_t x172 = 0U;
	int32_t t6 = -7;

	t6 = ((x169+(x170<x171))<<x172);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x173 = UINT64_MAX;
	uint32_t x175 = 2571259U;
	int8_t x176 = 2;
	volatile uint64_t t7 = 217514894713442LLU;

	t7 = ((x173+(x174<x175))<<x176);

	if (t7 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x198 = -1;
	volatile int64_t x199 = 1LL;
	uint8_t x200 = 1U;

	t8 = ((x197+(x198<x199))<<x200);

	if (t8 != 6910) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int64_t x227 = INT64_MIN;
	uint8_t x228 = 16U;
	static volatile uint32_t t9 = 1534U;

	t9 = ((x225+(x226<x227))<<x228);

	if (t9 != 4294901760U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x261 = 1;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = -9673359292569LL;
	static uint8_t x264 = 1U;
	volatile int32_t t10 = 756963174;

	t10 = ((x261+(x262<x263))<<x264);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x289 = 17766U;
	volatile uint8_t x290 = UINT8_MAX;
	static uint64_t x291 = UINT64_MAX;
	int8_t x292 = 0;
	int32_t t11 = 671874;

	t11 = ((x289+(x290<x291))<<x292);

	if (t11 != 17767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x345 = -1;
	int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	uint8_t x348 = 5U;

	t12 = ((x345+(x346<x347))<<x348);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x357 = 0;
	static volatile int64_t x358 = INT64_MIN;
	volatile int32_t x360 = 0;

	t13 = ((x357+(x358<x359))<<x360);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x389 = 7318283302LLU;
	volatile uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 0LLU;
	uint64_t t14 = 4976318803066LLU;

	t14 = ((x389+(x390<x391))<<x392);

	if (t14 != 7318283302LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x449 = UINT32_MAX;
	volatile uint32_t x450 = UINT32_MAX;
	volatile int8_t x451 = -27;
	volatile uint8_t x452 = 18U;
	volatile uint32_t t15 = 1039886U;

	t15 = ((x449+(x450<x451))<<x452);

	if (t15 != 4294705152U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x545 = 34992U;
	int8_t x546 = INT8_MIN;
	int32_t x547 = INT32_MIN;
	uint8_t x548 = 0U;

	t16 = ((x545+(x546<x547))<<x548);

	if (t16 != 34992U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x557 = 442U;
	int16_t x559 = -1;
	static volatile uint8_t x560 = 13U;
	volatile uint32_t t17 = 60124U;

	t17 = ((x557+(x558<x559))<<x560);

	if (t17 != 3620864U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x581 = 791639U;
	int32_t x583 = -1;
	int32_t x584 = 0;
	volatile uint32_t t18 = 680U;

	t18 = ((x581+(x582<x583))<<x584);

	if (t18 != 791639U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x585 = 988LLU;
	static uint8_t x588 = 1U;
	uint64_t t19 = 0LLU;

	t19 = ((x585+(x586<x587))<<x588);

	if (t19 != 1978LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x605 = -1LL;
	uint64_t x606 = 194LLU;
	int32_t x607 = -1;
	uint32_t x608 = 20U;
	volatile int64_t t20 = 5048LL;

	t20 = ((x605+(x606<x607))<<x608);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x629 = UINT32_MAX;
	static int8_t x630 = INT8_MIN;
	int8_t x632 = 10;
	volatile uint32_t t21 = 13759270U;

	t21 = ((x629+(x630<x631))<<x632);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x657 = UINT64_MAX;
	uint8_t x658 = 20U;
	int64_t x659 = INT64_MIN;
	static int32_t x660 = 1;
	volatile uint64_t t22 = 32385546LLU;

	t22 = ((x657+(x658<x659))<<x660);

	if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x673 = INT8_MAX;
	int32_t x674 = 0;
	int16_t x675 = INT16_MAX;
	static int16_t x676 = 13;
	int32_t t23 = 0;

	t23 = ((x673+(x674<x675))<<x676);

	if (t23 != 1048576) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x749 = UINT8_MAX;
	uint32_t x750 = UINT32_MAX;
	uint16_t x751 = 37U;
	int8_t x752 = 17;
	volatile int32_t t24 = 70567;

	t24 = ((x749+(x750<x751))<<x752);

	if (t24 != 33423360) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint8_t x774 = 2U;
	int64_t x775 = INT64_MIN;
	uint8_t x776 = 1U;
	static volatile int32_t t25 = 472;

	t25 = ((x773+(x774<x775))<<x776);

	if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x825 = 33359282307188LLU;
	int16_t x826 = INT16_MIN;
	int8_t x827 = INT8_MIN;
	uint8_t x828 = 28U;
	static uint64_t t26 = 234LLU;

	t26 = ((x825+(x826<x827))<<x828);

	if (t26 != 8143282213878759424LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x885 = UINT8_MAX;
	uint8_t x886 = 4U;
	uint32_t x887 = UINT32_MAX;
	volatile int16_t x888 = 2;
	volatile int32_t t27 = -341144;

	t27 = ((x885+(x886<x887))<<x888);

	if (t27 != 1024) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x913 = -1;
	static int64_t x914 = INT64_MIN;
	static int32_t x916 = 10;
	int32_t t28 = -112;

	t28 = ((x913+(x914<x915))<<x916);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x929 = 1657U;
	int8_t x930 = INT8_MAX;
	volatile int8_t x931 = -1;
	static uint8_t x932 = 0U;
	uint32_t t29 = 918U;

	t29 = ((x929+(x930<x931))<<x932);

	if (t29 != 1657U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x938 = -1;
	int64_t x939 = -481018LL;
	volatile uint32_t x940 = 63U;
	uint64_t t30 = 116078802307919LLU;

	t30 = ((x937+(x938<x939))<<x940);

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x973 = 142533236229LLU;
	int64_t x974 = 6755793084109301LL;
	uint64_t x975 = 322562LLU;
	uint8_t x976 = 7U;
	static volatile uint64_t t31 = 56434214909334419LLU;

	t31 = ((x973+(x974<x975))<<x976);

	if (t31 != 18244254237312LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1105 = UINT64_MAX;
	int32_t x1106 = -1;
	uint8_t x1107 = 7U;
	int8_t x1108 = 52;

	t32 = ((x1105+(x1106<x1107))<<x1108);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1157 = 1402LLU;
	static volatile int8_t x1159 = 6;
	int8_t x1160 = 4;
	static uint64_t t33 = 14454103LLU;

	t33 = ((x1157+(x1158<x1159))<<x1160);

	if (t33 != 22448LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1189 = 1U;
	int64_t x1190 = INT64_MAX;
	int8_t x1191 = 47;
	int8_t x1192 = 6;
	volatile int32_t t34 = -2688115;

	t34 = ((x1189+(x1190<x1191))<<x1192);

	if (t34 != 64) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1217 = 1988U;
	uint64_t x1218 = UINT64_MAX;
	uint32_t x1220 = 1U;
	static uint32_t t35 = 6969125U;

	t35 = ((x1217+(x1218<x1219))<<x1220);

	if (t35 != 3976U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1277 = 943U;
	uint64_t x1279 = 518607LLU;
	uint8_t x1280 = 3U;

	t36 = ((x1277+(x1278<x1279))<<x1280);

	if (t36 != 7544) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1285 = INT16_MAX;
	static volatile int16_t x1286 = 6795;
	static int32_t x1287 = INT32_MAX;
	volatile int32_t x1288 = 6;
	static volatile int32_t t37 = 381306;

	t37 = ((x1285+(x1286<x1287))<<x1288);

	if (t37 != 2097152) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1297 = -1;
	static uint32_t x1298 = 1U;
	int16_t x1299 = INT16_MAX;
	int8_t x1300 = 1;
	int32_t t38 = -1;

	t38 = ((x1297+(x1298<x1299))<<x1300);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1473 = UINT32_MAX;
	static int8_t x1474 = INT8_MIN;
	static volatile uint64_t x1475 = 65401476324LLU;
	static uint16_t x1476 = 5U;
	volatile uint32_t t39 = 69644336U;

	t39 = ((x1473+(x1474<x1475))<<x1476);

	if (t39 != 4294967264U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1505 = UINT8_MAX;
	static int16_t x1506 = -1;
	int64_t x1507 = INT64_MIN;

	t40 = ((x1505+(x1506<x1507))<<x1508);

	if (t40 != 4177920) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1577 = 0LLU;
	uint64_t x1578 = 1722432LLU;
	int64_t x1579 = INT64_MAX;
	uint8_t x1580 = 1U;
	volatile uint64_t t41 = 559023013660439LLU;

	t41 = ((x1577+(x1578<x1579))<<x1580);

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1593 = UINT64_MAX;
	volatile int64_t x1594 = -1LL;
	volatile uint64_t t42 = 17834513520286LLU;

	t42 = ((x1593+(x1594<x1595))<<x1596);

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1633 = 1U;
	static int8_t x1634 = INT8_MAX;
	volatile uint32_t t43 = 3U;

	t43 = ((x1633+(x1634<x1635))<<x1636);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x1761 = 171582U;
	static volatile uint64_t x1763 = 63821LLU;
	int16_t x1764 = 1;
	uint32_t t44 = 194U;

	t44 = ((x1761+(x1762<x1763))<<x1764);

	if (t44 != 343166U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1799 = 10U;
	uint8_t x1800 = 12U;

	t45 = ((x1797+(x1798<x1799))<<x1800);

	if (t45 != 1048576) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1837 = 77U;
	static volatile int8_t x1838 = INT8_MIN;
	uint8_t x1840 = 16U;
	static volatile int32_t t46 = -129580369;

	t46 = ((x1837+(x1838<x1839))<<x1840);

	if (t46 != 5046272) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x1873 = 1190U;
	static uint16_t x1875 = 220U;
	int32_t t47 = -996;

	t47 = ((x1873+(x1874<x1875))<<x1876);

	if (t47 != 1248854016) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1917 = 9387981149LL;
	int8_t x1918 = 1;
	int8_t x1919 = -43;
	uint8_t x1920 = 1U;
	static int64_t t48 = 1519431LL;

	t48 = ((x1917+(x1918<x1919))<<x1920);

	if (t48 != 18775962298LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x1957 = 3719;
	int32_t x1958 = INT32_MIN;
	uint8_t x1959 = UINT8_MAX;
	static volatile int32_t t49 = 29480;

	t49 = ((x1957+(x1958<x1959))<<x1960);

	if (t49 != 7440) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2041 = 3U;
	uint8_t x2042 = 74U;
	uint8_t x2044 = 15U;
	volatile int32_t t50 = 3;

	t50 = ((x2041+(x2042<x2043))<<x2044);

	if (t50 != 98304) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2337 = 5U;
	int32_t x2338 = INT32_MIN;
	int32_t x2339 = -4975020;
	int8_t x2340 = 0;
	static volatile int32_t t51 = -43797624;

	t51 = ((x2337+(x2338<x2339))<<x2340);

	if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x2377 = UINT8_MAX;
	int16_t x2378 = INT16_MIN;
	static uint64_t x2379 = UINT64_MAX;
	uint32_t x2380 = 8U;
	static int32_t t52 = -813044;

	t52 = ((x2377+(x2378<x2379))<<x2380);

	if (t52 != 65536) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2463 = INT64_MAX;
	static uint16_t x2464 = 29U;
	volatile int32_t t53 = -27461456;

	t53 = ((x2461+(x2462<x2463))<<x2464);

	if (t53 != 1610612736) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2489 = INT8_MAX;
	int64_t x2490 = -1LL;
	volatile uint32_t x2491 = 3860016U;
	volatile int32_t t54 = -6328;

	t54 = ((x2489+(x2490<x2491))<<x2492);

	if (t54 != 256) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2705 = 49685;
	int8_t x2706 = INT8_MIN;
	volatile int64_t x2707 = 16413739700LL;
	uint8_t x2708 = 0U;
	int32_t t55 = 892;

	t55 = ((x2705+(x2706<x2707))<<x2708);

	if (t55 != 49686) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x2757 = 4U;
	int8_t x2758 = INT8_MIN;
	static uint16_t x2759 = UINT16_MAX;
	int8_t x2760 = 0;
	static volatile int32_t t56 = 118;

	t56 = ((x2757+(x2758<x2759))<<x2760);

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2765 = UINT32_MAX;
	uint16_t x2766 = 1U;
	uint8_t x2767 = UINT8_MAX;
	int64_t x2768 = 1LL;
	uint32_t t57 = 1U;

	t57 = ((x2765+(x2766<x2767))<<x2768);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2769 = 3669LL;
	volatile uint16_t x2771 = UINT16_MAX;
	int64_t t58 = 3804LL;

	t58 = ((x2769+(x2770<x2771))<<x2772);

	if (t58 != 3670LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2853 = 1U;
	static uint8_t x2855 = UINT8_MAX;
	static volatile int8_t x2856 = 0;
	int32_t t59 = 6294;

	t59 = ((x2853+(x2854<x2855))<<x2856);

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2897 = 0;
	int16_t x2898 = INT16_MIN;
	uint16_t x2900 = 2U;
	volatile int32_t t60 = 22686;

	t60 = ((x2897+(x2898<x2899))<<x2900);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2961 = UINT8_MAX;
	static int64_t x2963 = -1LL;
	volatile int32_t t61 = 62;

	t61 = ((x2961+(x2962<x2963))<<x2964);

	if (t61 != 2040) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3109 = 21LLU;
	static volatile int16_t x3111 = -714;
	volatile uint64_t t62 = 35747544373399LLU;

	t62 = ((x3109+(x3110<x3111))<<x3112);

	if (t62 != 688128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3137 = 4087355524666889LLU;
	int16_t x3139 = -1;
	volatile uint8_t x3140 = 2U;
	uint64_t t63 = 40678998939358020LLU;

	t63 = ((x3137+(x3138<x3139))<<x3140);

	if (t63 != 16349422098667556LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3141 = 30U;
	int16_t x3143 = INT16_MIN;

	t64 = ((x3141+(x3142<x3143))<<x3144);

	if (t64 != 15872U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3149 = UINT64_MAX;
	int8_t x3150 = -1;
	volatile int8_t x3151 = -61;
	int16_t x3152 = 30;
	volatile uint64_t t65 = 150676748378LLU;

	t65 = ((x3149+(x3150<x3151))<<x3152);

	if (t65 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x3157 = UINT8_MAX;
	volatile int32_t x3158 = INT32_MIN;
	int16_t x3159 = INT16_MIN;
	volatile uint16_t x3160 = 2U;
	volatile int32_t t66 = -82;

	t66 = ((x3157+(x3158<x3159))<<x3160);

	if (t66 != 1024) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3185 = 1743238758977LLU;
	int64_t x3186 = 740580430384196637LL;
	uint8_t x3187 = UINT8_MAX;
	static uint32_t x3188 = 7U;
	volatile uint64_t t67 = 5551150495337LLU;

	t67 = ((x3185+(x3186<x3187))<<x3188);

	if (t67 != 223134561149056LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x3277 = 1;
	static uint8_t x3278 = UINT8_MAX;
	volatile int32_t t68 = -16569743;

	t68 = ((x3277+(x3278<x3279))<<x3280);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3373 = 2U;
	uint16_t x3374 = 1118U;
	static uint64_t x3375 = 44LLU;
	static int16_t x3376 = 0;

	t69 = ((x3373+(x3374<x3375))<<x3376);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3462 = INT64_MIN;
	int8_t x3463 = 61;
	int32_t t70 = 617560;

	t70 = ((x3461+(x3462<x3463))<<x3464);

	if (t70 != 1216) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3485 = INT16_MAX;
	uint64_t x3486 = 5848LLU;
	volatile int64_t x3487 = INT64_MAX;
	uint16_t x3488 = 4U;
	static volatile int32_t t71 = 1;

	t71 = ((x3485+(x3486<x3487))<<x3488);

	if (t71 != 524288) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3502 = -14130;
	volatile int16_t x3503 = 1;
	uint8_t x3504 = 31U;

	t72 = ((x3501+(x3502<x3503))<<x3504);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3506 = INT16_MIN;
	uint32_t x3507 = 323U;
	volatile uint32_t x3508 = 48U;

	t73 = ((x3505+(x3506<x3507))<<x3508);

	if (t73 != 1751055830116990976LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3560 = 0LLU;
	int32_t t74 = 905237942;

	t74 = ((x3557+(x3558<x3559))<<x3560);

	if (t74 != 100) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3566 = UINT32_MAX;
	int8_t x3567 = -1;
	uint32_t t75 = 4U;

	t75 = ((x3565+(x3566<x3567))<<x3568);

	if (t75 != 196608U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3578 = 3U;
	static uint16_t x3579 = 15U;
	static int64_t x3580 = 5LL;
	static volatile int32_t t76 = 176369;

	t76 = ((x3577+(x3578<x3579))<<x3580);

	if (t76 != 4096) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x3654 = 6;
	int64_t x3655 = 104488057672690875LL;
	static uint16_t x3656 = 5U;
	volatile int32_t t77 = -619936379;

	t77 = ((x3653+(x3654<x3655))<<x3656);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3725 = UINT64_MAX;
	volatile int64_t x3726 = 2478864262467514LL;
	volatile int64_t x3727 = INT64_MIN;
	uint8_t x3728 = 22U;
	uint64_t t78 = 260584450LLU;

	t78 = ((x3725+(x3726<x3727))<<x3728);

	if (t78 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x3769 = UINT64_MAX;
	volatile uint8_t x3771 = UINT8_MAX;
	uint8_t x3772 = 48U;

	t79 = ((x3769+(x3770<x3771))<<x3772);

	if (t79 != 18446462598732840960LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x3801 = UINT16_MAX;
	uint16_t x3802 = 15544U;
	int8_t x3803 = 6;
	uint16_t x3804 = 14U;
	static volatile int32_t t80 = 0;

	t80 = ((x3801+(x3802<x3803))<<x3804);

	if (t80 != 1073725440) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3805 = INT8_MAX;
	uint16_t x3807 = 1109U;
	int8_t x3808 = 4;
	int32_t t81 = -709841221;

	t81 = ((x3805+(x3806<x3807))<<x3808);

	if (t81 != 2048) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x3813 = 447U;
	int16_t x3814 = INT16_MIN;
	uint8_t x3815 = 0U;
	static volatile int32_t t82 = 252;

	t82 = ((x3813+(x3814<x3815))<<x3816);

	if (t82 != 448) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3865 = UINT64_MAX;
	uint8_t x3868 = 38U;
	static volatile uint64_t t83 = 41220LLU;

	t83 = ((x3865+(x3866<x3867))<<x3868);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3909 = 106U;
	int32_t x3910 = -432444;
	volatile int64_t x3911 = -112LL;
	uint16_t x3912 = 3U;
	volatile int32_t t84 = 47402;

	t84 = ((x3909+(x3910<x3911))<<x3912);

	if (t84 != 856) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4025 = 123363U;
	volatile int64_t x4026 = 8LL;
	volatile int8_t x4027 = 16;
	static uint16_t x4028 = 5U;
	volatile uint32_t t85 = 1U;

	t85 = ((x4025+(x4026<x4027))<<x4028);

	if (t85 != 3947648U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x4045 = 28;
	int8_t x4046 = -9;
	int32_t x4047 = -1;
	int8_t x4048 = 0;
	volatile int32_t t86 = -9;

	t86 = ((x4045+(x4046<x4047))<<x4048);

	if (t86 != 29) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x4081 = 92U;
	int32_t x4082 = 19079805;
	static int64_t x4083 = -460625555199632473LL;
	volatile int32_t t87 = 18;

	t87 = ((x4081+(x4082<x4083))<<x4084);

	if (t87 != 184) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4121 = 409LLU;
	uint64_t x4122 = UINT64_MAX;
	volatile uint64_t t88 = 2LLU;

	t88 = ((x4121+(x4122<x4123))<<x4124);

	if (t88 != 6861881344LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4182 = INT32_MIN;
	static int64_t x4183 = -151747635LL;
	uint8_t x4184 = 6U;

	t89 = ((x4181+(x4182<x4183))<<x4184);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4198 = -39;
	static int8_t x4199 = 2;
	volatile uint8_t x4200 = 0U;
	volatile int64_t t90 = -2620904923LL;

	t90 = ((x4197+(x4198<x4199))<<x4200);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4205 = 1845443517873LL;
	static volatile int32_t x4207 = INT32_MIN;

	t91 = ((x4205+(x4206<x4207))<<x4208);

	if (t91 != 30235746596847616LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4253 = UINT16_MAX;
	static uint8_t x4255 = 47U;
	volatile int32_t t92 = -81;

	t92 = ((x4253+(x4254<x4255))<<x4256);

	if (t92 != 131072) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4262 = INT16_MIN;
	uint8_t x4263 = 16U;
	static uint8_t x4264 = 13U;
	static uint32_t t93 = 5871947U;

	t93 = ((x4261+(x4262<x4263))<<x4264);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x4382 = -1LL;
	volatile uint8_t x4383 = 1U;
	int32_t t94 = 3182;

	t94 = ((x4381+(x4382<x4383))<<x4384);

	if (t94 != 13568) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4501 = 13U;
	static int32_t x4502 = INT32_MIN;
	int64_t x4503 = INT64_MAX;
	static uint8_t x4504 = 0U;

	t95 = ((x4501+(x4502<x4503))<<x4504);

	if (t95 != 14) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x4529 = 2U;
	static int8_t x4531 = INT8_MIN;
	int16_t x4532 = 0;
	uint32_t t96 = 72074U;

	t96 = ((x4529+(x4530<x4531))<<x4532);

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4645 = 55U;
	int32_t x4646 = 7298;
	uint16_t x4647 = 0U;
	uint8_t x4648 = 13U;
	volatile uint32_t t97 = 247U;

	t97 = ((x4645+(x4646<x4647))<<x4648);

	if (t97 != 450560U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4665 = 3U;
	int32_t x4666 = INT32_MIN;
	int16_t x4667 = -227;
	uint8_t x4668 = 26U;
	volatile int32_t t98 = 425;

	t98 = ((x4665+(x4666<x4667))<<x4668);

	if (t98 != 268435456) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x4761 = -1LL;
	int16_t x4762 = INT16_MIN;
	int64_t x4763 = 106330LL;
	int8_t x4764 = 9;
	volatile int64_t t99 = 1083573113800647LL;

	t99 = ((x4761+(x4762<x4763))<<x4764);

	if (t99 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

