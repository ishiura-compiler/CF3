#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = UINT32_MAX;
static int32_t x19 = INT32_MIN;
volatile uint64_t t3 = 73LLU;
int16_t x66 = -1;
volatile int32_t x67 = -1;
volatile int16_t x78 = -1;
static uint64_t t9 = 1405LLU;
uint16_t x134 = 908U;
uint16_t x163 = UINT16_MAX;
volatile uint32_t x193 = 250U;
int16_t x194 = INT16_MIN;
static int32_t x195 = INT32_MAX;
uint64_t x277 = 1940706LLU;
static uint8_t x280 = UINT8_MAX;
static int16_t x331 = INT16_MIN;
int32_t t20 = -1;
uint32_t x367 = 1853483226U;
uint8_t x368 = 4U;
int16_t x375 = -1;
int32_t x421 = INT32_MIN;
volatile uint64_t t25 = 66422LLU;
int16_t x446 = INT16_MIN;
static uint32_t x448 = 3496U;
volatile uint64_t x505 = 6094590758961032LLU;
uint64_t x507 = 23707893062624LLU;
volatile uint64_t t27 = 3753496325296666804LLU;
uint8_t x573 = UINT8_MAX;
int8_t x579 = 2;
volatile int32_t t30 = -34711;
volatile int32_t x633 = 53525042;
uint32_t x635 = 8U;
static volatile int16_t x636 = INT16_MIN;
volatile int16_t x642 = 1;
int32_t t34 = -6;
static uint8_t x657 = UINT8_MAX;
uint64_t x660 = 473808LLU;
volatile uint64_t t36 = 269403682262LLU;
int8_t x713 = -1;
int16_t x755 = -223;
uint16_t x794 = 33U;
int32_t t42 = -5;
int64_t t43 = -26LL;
static uint32_t x835 = UINT32_MAX;
uint64_t t45 = 744402946230147LLU;
volatile int64_t t47 = -203750LL;
uint8_t x930 = 91U;
int8_t x932 = INT8_MIN;
volatile int32_t t51 = -38;
volatile int64_t t52 = -469324516675955LL;
volatile int32_t x994 = INT32_MIN;
volatile int32_t x995 = INT32_MIN;
static int64_t x1042 = INT64_MAX;
int64_t x1063 = -30LL;
volatile int64_t x1074 = 216451LL;
static volatile int32_t x1100 = 701;
int64_t x1107 = INT64_MIN;
int64_t x1108 = INT64_MAX;
uint32_t x1144 = 408676U;
int32_t x1234 = INT32_MIN;
int32_t x1235 = 1;
int64_t x1293 = INT64_MIN;
volatile int32_t t69 = -997;
int8_t x1310 = -29;
int16_t x1313 = -29;
volatile uint32_t x1314 = 695U;
uint64_t x1356 = 1306233LLU;
uint64_t t73 = 14484756655LLU;
int16_t x1365 = -1;
volatile uint64_t x1373 = 385802750LLU;
uint32_t x1473 = 152272704U;
int16_t x1476 = 882;
static int16_t x1545 = -1;
static volatile uint16_t x1577 = UINT16_MAX;
uint32_t x1578 = 27U;
static uint8_t x1579 = 10U;
uint32_t x1598 = 18355U;
uint32_t t93 = 51465U;
volatile uint8_t x1721 = 41U;
static int16_t x1748 = -635;
volatile uint8_t x1767 = 9U;
volatile uint32_t t98 = 112016U;
int8_t x1773 = INT8_MAX;
int8_t x1775 = 0;


void f0(void) {
	uint64_t x5 = 673LLU;
	volatile uint8_t x6 = UINT8_MAX;
	int32_t x7 = 8;
	int64_t x8 = INT64_MIN;
	volatile uint64_t t0 = 63816198728LLU;

	t0 = ((x5^x6)<<(x7&x8));

	if (t0 != 606LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x14 = INT16_MAX;
	int32_t x15 = -124;
	int16_t x16 = 0;
	uint32_t t1 = 55177U;

	t1 = ((x13^x14)<<(x15&x16));

	if (t1 != 4294934528U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	volatile int32_t x18 = -106;
	int16_t x20 = INT16_MAX;
	int32_t t2 = 316888;

	t2 = ((x17^x18)<<(x19&x20));

	if (t2 != 2147483542) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 736012037741LLU;
	volatile uint8_t x26 = 0U;
	volatile int64_t x27 = 570989LL;
	int32_t x28 = INT32_MIN;

	t3 = ((x25^x26)<<(x27&x28));

	if (t3 != 736012037741LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x29 = 3930360461386957LLU;
	static uint32_t x30 = 61228U;
	uint16_t x31 = 7201U;
	static int32_t x32 = INT32_MIN;
	volatile uint64_t t4 = 417426LLU;

	t4 = ((x29^x30)<<(x31&x32));

	if (t4 != 3930360461331425LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x49 = 5U;
	uint8_t x50 = UINT8_MAX;
	int32_t x51 = 0;
	static uint32_t x52 = UINT32_MAX;
	volatile int32_t t5 = 496;

	t5 = ((x49^x50)<<(x51&x52));

	if (t5 != 250) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x61 = 1104LLU;
	uint32_t x62 = 740589U;
	volatile uint32_t x63 = 355597U;
	uint8_t x64 = 1U;
	volatile uint64_t t6 = 5LLU;

	t6 = ((x61^x62)<<(x63&x64));

	if (t6 != 1479034LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x65 = 6977981584107791124LLU;
	int8_t x68 = 0;
	uint64_t t7 = 7009015494551213LLU;

	t7 = ((x65^x66)<<(x67&x68));

	if (t7 != 11468762489601760491LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x77 = -1LL;
	uint32_t x79 = 713U;
	uint8_t x80 = 60U;
	volatile int64_t t8 = 1LL;

	t8 = ((x77^x78)<<(x79&x80));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MAX;
	static int16_t x83 = 1395;
	int16_t x84 = INT16_MIN;

	t9 = ((x81^x82)<<(x83&x84));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x133 = 1;
	static uint8_t x135 = UINT8_MAX;
	int64_t x136 = INT64_MIN;
	volatile int32_t t10 = 1954986;

	t10 = ((x133^x134)<<(x135&x136));

	if (t10 != 909) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x149 = INT16_MIN;
	volatile uint32_t x150 = UINT32_MAX;
	volatile int64_t x151 = INT64_MIN;
	volatile int64_t x152 = 302LL;
	volatile uint32_t t11 = 710U;

	t11 = ((x149^x150)<<(x151&x152));

	if (t11 != 32767U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x153 = -1;
	int32_t x154 = INT32_MIN;
	int8_t x155 = INT8_MIN;
	int16_t x156 = 19;
	volatile int32_t t12 = INT32_MAX;

	t12 = ((x153^x154)<<(x155&x156));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = UINT32_MAX;
	volatile int8_t x164 = 2;
	volatile uint32_t t13 = 5U;

	t13 = ((x161^x162)<<(x163&x164));

	if (t13 != 4294967292U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x196 = INT32_MIN;
	static uint32_t t14 = 15383011U;

	t14 = ((x193^x194)<<(x195&x196));

	if (t14 != 4294934778U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x221 = 1633584815LLU;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	static uint8_t x224 = 6U;
	volatile uint64_t t15 = 1499702797283434LLU;

	t15 = ((x221^x222)<<(x223&x224));

	if (t15 != 18446743969160121280LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x233 = 87541862275LLU;
	volatile uint32_t x234 = UINT32_MAX;
	static int64_t x235 = INT64_MIN;
	int8_t x236 = 1;
	uint64_t t16 = 51462431028LLU;

	t16 = ((x233^x234)<<(x235&x236));

	if (t16 != 88551796860LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x257 = INT16_MIN;
	int64_t x258 = -1LL;
	int64_t x259 = INT64_MAX;
	static int16_t x260 = 0;
	int64_t t17 = 299092119333LL;

	t17 = ((x257^x258)<<(x259&x260));

	if (t17 != 32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x261 = INT16_MIN;
	volatile int16_t x262 = -3286;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = 4684889U;
	static volatile int32_t t18 = -12514;

	t18 = ((x261^x262)<<(x263&x264));

	if (t18 != 29482) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x278 = -59;
	int8_t x279 = 0;
	uint64_t t19 = 51082171256LLU;

	t19 = ((x277^x278)<<(x279&x280));

	if (t19 != 18446744073707610919LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x329 = 5U;
	static uint16_t x330 = 10U;
	static volatile int64_t x332 = 14LL;

	t20 = ((x329^x330)<<(x331&x332));

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x366 = INT8_MAX;
	static volatile int32_t t21 = 3;

	t21 = ((x365^x366)<<(x367&x368));

	if (t21 != 65408) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 19U;
	int16_t x376 = 0;
	volatile uint32_t t22 = 4903U;

	t22 = ((x373^x374)<<(x375&x376));

	if (t22 != 2147483667U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x381 = INT16_MAX;
	volatile int16_t x382 = INT16_MAX;
	volatile int16_t x383 = INT16_MIN;
	static volatile uint8_t x384 = 75U;
	volatile int32_t t23 = -201029;

	t23 = ((x381^x382)<<(x383&x384));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x422 = 997456U;
	volatile int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MAX;
	uint32_t t24 = 394U;

	t24 = ((x421^x422)<<(x423&x424));

	if (t24 != 2148481104U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x429 = 16681479650LLU;
	int32_t x430 = INT32_MIN;
	static int8_t x431 = 8;
	int32_t x432 = -1;

	t25 = ((x429^x430)<<(x431&x432));

	if (t25 != 18446740097831133696LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x445 = -1;
	int64_t x447 = INT64_MIN;
	volatile int32_t t26 = -174;

	t26 = ((x445^x446)<<(x447&x448));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x506 = UINT64_MAX;
	int8_t x508 = 6;

	t27 = ((x505^x506)<<(x507&x508));

	if (t27 != 18440649482950590583LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x574 = UINT16_MAX;
	uint8_t x575 = UINT8_MAX;
	uint32_t x576 = 3345925U;
	int32_t t28 = -18;

	t28 = ((x573^x574)<<(x575&x576));

	if (t28 != 2088960) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x577 = 53U;
	volatile int64_t x578 = INT64_MAX;
	volatile uint16_t x580 = 845U;
	int64_t t29 = -142LL;

	t29 = ((x577^x578)<<(x579&x580));

	if (t29 != 9223372036854775754LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x609 = 196;
	int16_t x610 = INT16_MAX;
	uint16_t x611 = 11U;
	uint32_t x612 = UINT32_MAX;

	t30 = ((x609^x610)<<(x611&x612));

	if (t30 != 66705408) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x617 = -1;
	volatile int64_t x618 = INT64_MIN;
	int16_t x619 = INT16_MIN;
	uint8_t x620 = 9U;
	int64_t t31 = INT64_MAX;

	t31 = ((x617^x618)<<(x619&x620));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x634 = 1U;
	int32_t t32 = 16220;

	t32 = ((x633^x634)<<(x635&x636));

	if (t32 != 53525043) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x641 = INT16_MAX;
	int64_t x643 = INT64_MAX;
	uint16_t x644 = 4U;
	int32_t t33 = -88;

	t33 = ((x641^x642)<<(x643&x644));

	if (t33 != 524256) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x645 = INT32_MIN;
	volatile int8_t x646 = INT8_MIN;
	int32_t x647 = INT32_MIN;
	uint8_t x648 = 4U;

	t34 = ((x645^x646)<<(x647&x648));

	if (t34 != 2147483520) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x658 = UINT32_MAX;
	static uint8_t x659 = 60U;
	uint32_t t35 = 14827U;

	t35 = ((x657^x658)<<(x659&x660));

	if (t35 != 4278190080U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x689 = INT32_MAX;
	static uint64_t x690 = 1588019840414677LLU;
	uint8_t x691 = UINT8_MAX;
	static volatile int64_t x692 = -42439LL;

	t36 = ((x689^x690)<<(x691&x692));

	if (t36 != 6052837899185946624LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x714 = -1LL;
	int8_t x715 = 1;
	int8_t x716 = 15;
	volatile int64_t t37 = 5473115521819249LL;

	t37 = ((x713^x714)<<(x715&x716));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x733 = INT16_MAX;
	uint8_t x734 = 5U;
	volatile int8_t x735 = 1;
	int64_t x736 = INT64_MIN;
	volatile int32_t t38 = -37874;

	t38 = ((x733^x734)<<(x735&x736));

	if (t38 != 32762) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x737 = INT16_MIN;
	static int16_t x738 = -1934;
	int16_t x739 = 286;
	volatile int64_t x740 = 5394501099089LL;
	volatile int32_t t39 = -6700;

	t39 = ((x737^x738)<<(x739&x740));

	if (t39 != 2020737024) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x753 = 0U;
	uint8_t x754 = 0U;
	int16_t x756 = 1;
	volatile int32_t t40 = 26;

	t40 = ((x753^x754)<<(x755&x756));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x793 = 7;
	static int32_t x795 = INT32_MIN;
	static volatile uint8_t x796 = 1U;
	static int32_t t41 = -26055634;

	t41 = ((x793^x794)<<(x795&x796));

	if (t41 != 38) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x813 = 1086;
	int16_t x814 = INT16_MAX;
	volatile int64_t x815 = INT64_MAX;
	int64_t x816 = INT64_MIN;

	t42 = ((x813^x814)<<(x815&x816));

	if (t42 != 31681) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x817 = INT64_MIN;
	int16_t x818 = -1783;
	uint16_t x819 = UINT16_MAX;
	int64_t x820 = INT64_MIN;

	t43 = ((x817^x818)<<(x819&x820));

	if (t43 != 9223372036854774025LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x833 = 8U;
	volatile int16_t x834 = 1;
	int16_t x836 = 6;
	int32_t t44 = -852664;

	t44 = ((x833^x834)<<(x835&x836));

	if (t44 != 576) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x837 = 323456983LL;
	uint64_t x838 = 7356354159642467LLU;
	uint8_t x839 = 9U;
	int8_t x840 = -1;

	t45 = ((x837^x838)<<(x839&x840));

	if (t45 != 3766453494875252736LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x849 = 3U;
	int64_t x850 = 15251LL;
	uint16_t x851 = 11U;
	int16_t x852 = INT16_MAX;
	int64_t t46 = 28LL;

	t46 = ((x849^x850)<<(x851&x852));

	if (t46 != 31227904LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x889 = INT64_MAX;
	int8_t x890 = INT8_MAX;
	volatile uint8_t x891 = UINT8_MAX;
	uint16_t x892 = 0U;

	t47 = ((x889^x890)<<(x891&x892));

	if (t47 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x905 = 4U;
	uint8_t x906 = 1U;
	volatile uint8_t x907 = UINT8_MAX;
	int16_t x908 = INT16_MIN;
	volatile uint32_t t48 = 111094U;

	t48 = ((x905^x906)<<(x907&x908));

	if (t48 != 5U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x925 = 7LLU;
	int64_t x926 = -1LL;
	int16_t x927 = -1;
	static uint8_t x928 = 15U;
	static uint64_t t49 = 7LLU;

	t49 = ((x925^x926)<<(x927&x928));

	if (t49 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x929 = 0U;
	int8_t x931 = INT8_MAX;
	volatile int32_t t50 = -1;

	t50 = ((x929^x930)<<(x931&x932));

	if (t50 != 91) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x961 = INT8_MIN;
	int8_t x962 = INT8_MIN;
	int16_t x963 = 477;
	int16_t x964 = INT16_MIN;

	t51 = ((x961^x962)<<(x963&x964));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x965 = 100LL;
	uint8_t x966 = 17U;
	volatile int32_t x967 = INT32_MIN;
	static uint64_t x968 = 273469029LLU;

	t52 = ((x965^x966)<<(x967&x968));

	if (t52 != 117LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x969 = 14;
	volatile uint64_t x970 = 167331409840786LLU;
	int64_t x971 = INT64_MIN;
	uint64_t x972 = 6757696LLU;
	uint64_t t53 = 4656060LLU;

	t53 = ((x969^x970)<<(x971&x972));

	if (t53 != 167331409840796LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x993 = 110493LLU;
	static uint32_t x996 = 396770277U;
	uint64_t t54 = 7LLU;

	t54 = ((x993^x994)<<(x995&x996));

	if (t54 != 18446744071562178461LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1041 = 518543104U;
	int32_t x1043 = INT32_MIN;
	volatile uint16_t x1044 = 12U;
	volatile int64_t t55 = 28408LL;

	t55 = ((x1041^x1042)<<(x1043&x1044));

	if (t55 != 9223372036336232703LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x1045 = UINT16_MAX;
	static int8_t x1046 = 1;
	uint64_t x1047 = 5571LLU;
	uint32_t x1048 = 12U;
	volatile int32_t t56 = -41959;

	t56 = ((x1045^x1046)<<(x1047&x1048));

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x1061 = INT32_MAX;
	int8_t x1062 = 14;
	uint64_t x1064 = 4LLU;
	volatile int32_t t57 = -436071253;

	t57 = ((x1061^x1062)<<(x1063&x1064));

	if (t57 != 2147483633) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1073 = UINT64_MAX;
	uint32_t x1075 = 112727073U;
	int32_t x1076 = INT32_MIN;
	volatile uint64_t t58 = 1690147067684485399LLU;

	t58 = ((x1073^x1074)<<(x1075&x1076));

	if (t58 != 18446744073709335164LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x1097 = INT32_MAX;
	volatile uint32_t x1098 = 35724435U;
	static volatile int8_t x1099 = 1;
	static uint32_t t59 = 1U;

	t59 = ((x1097^x1098)<<(x1099&x1100));

	if (t59 != 4223518424U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x1105 = -74761076;
	int64_t x1106 = -1LL;
	volatile int64_t t60 = -2926355243924LL;

	t60 = ((x1105^x1106)<<(x1107&x1108));

	if (t60 != 74761075LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x1129 = 4U;
	uint32_t x1130 = 3073U;
	uint64_t x1131 = UINT64_MAX;
	uint8_t x1132 = 1U;
	static uint32_t t61 = 338687U;

	t61 = ((x1129^x1130)<<(x1131&x1132));

	if (t61 != 6154U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x1141 = 134794910666077LLU;
	static uint64_t x1142 = 2646491822807LLU;
	static int64_t x1143 = INT64_MIN;
	volatile uint64_t t62 = 2350804LLU;

	t62 = ((x1141^x1142)<<(x1143&x1144));

	if (t62 != 132973495121802LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x1145 = 2U;
	uint16_t x1146 = 6951U;
	int32_t x1147 = 76462;
	uint8_t x1148 = 28U;
	volatile int32_t t63 = -3083920;

	t63 = ((x1145^x1146)<<(x1147&x1148));

	if (t63 != 28463104) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1153 = -1LL;
	volatile int16_t x1154 = INT16_MIN;
	uint8_t x1155 = 4U;
	uint32_t x1156 = UINT32_MAX;
	int64_t t64 = -4412LL;

	t64 = ((x1153^x1154)<<(x1155&x1156));

	if (t64 != 524272LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1233 = INT16_MIN;
	static int32_t x1236 = 2494344;
	volatile int32_t t65 = 674947;

	t65 = ((x1233^x1234)<<(x1235&x1236));

	if (t65 != 2147450880) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x1241 = INT8_MIN;
	volatile uint64_t x1242 = 37068LLU;
	static int8_t x1243 = 2;
	uint32_t x1244 = 1087285911U;
	volatile uint64_t t66 = 278100716841LLU;

	t66 = ((x1241^x1242)<<(x1243&x1244));

	if (t66 != 18446744073709403440LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x1277 = 151886367U;
	uint16_t x1278 = 16642U;
	int16_t x1279 = 46;
	int64_t x1280 = 525LL;
	volatile uint32_t t67 = 58U;

	t67 = ((x1277^x1278)<<(x1279&x1280));

	if (t67 != 3719417856U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1294 = -1LL;
	volatile int8_t x1295 = 0;
	int16_t x1296 = 42;
	int64_t t68 = INT64_MAX;

	t68 = ((x1293^x1294)<<(x1295&x1296));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x1305 = -7;
	volatile int16_t x1306 = INT16_MIN;
	int64_t x1307 = 1LL;
	int64_t x1308 = 47LL;

	t69 = ((x1305^x1306)<<(x1307&x1308));

	if (t69 != 65522) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1309 = INT64_MIN;
	uint32_t x1311 = 2435U;
	static int16_t x1312 = INT16_MIN;
	int64_t t70 = -4655765758032010LL;

	t70 = ((x1309^x1310)<<(x1311&x1312));

	if (t70 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x1315 = INT16_MIN;
	uint16_t x1316 = 108U;
	uint32_t t71 = 1U;

	t71 = ((x1313^x1314)<<(x1315&x1316));

	if (t71 != 4294966612U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x1329 = 19U;
	volatile uint64_t x1330 = UINT64_MAX;
	uint8_t x1331 = 1U;
	static uint64_t x1332 = 229578LLU;
	uint64_t t72 = 355548379782044LLU;

	t72 = ((x1329^x1330)<<(x1331&x1332));

	if (t72 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1353 = 2410812LLU;
	static int64_t x1354 = INT64_MIN;
	int32_t x1355 = INT32_MIN;

	t73 = ((x1353^x1354)<<(x1355&x1356));

	if (t73 != 9223372036857186620LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x1361 = 6295U;
	uint8_t x1362 = 14U;
	static volatile uint16_t x1363 = UINT16_MAX;
	int16_t x1364 = 13;
	uint32_t t74 = 1530424989U;

	t74 = ((x1361^x1362)<<(x1363&x1364));

	if (t74 != 51585024U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1366 = 6U;
	static int16_t x1367 = INT16_MIN;
	uint16_t x1368 = 16U;
	static uint32_t t75 = 1607222U;

	t75 = ((x1365^x1366)<<(x1367&x1368));

	if (t75 != 4294967289U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x1374 = UINT16_MAX;
	int8_t x1375 = 5;
	int8_t x1376 = -11;
	uint64_t t76 = 41129650LLU;

	t76 = ((x1373^x1374)<<(x1375&x1376));

	if (t76 != 12344082464LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1421 = UINT32_MAX;
	volatile int16_t x1422 = 29;
	volatile uint8_t x1423 = 2U;
	static uint8_t x1424 = 1U;
	uint32_t t77 = 56U;

	t77 = ((x1421^x1422)<<(x1423&x1424));

	if (t77 != 4294967266U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1425 = -1;
	volatile int64_t x1426 = -6968053LL;
	int8_t x1427 = 26;
	static volatile int32_t x1428 = INT32_MIN;
	static volatile int64_t t78 = -2581248840129LL;

	t78 = ((x1425^x1426)<<(x1427&x1428));

	if (t78 != 6968052LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1465 = -1;
	volatile uint64_t x1466 = UINT64_MAX;
	int16_t x1467 = INT16_MIN;
	volatile uint32_t x1468 = 1821U;
	static uint64_t t79 = 1896330812338138567LLU;

	t79 = ((x1465^x1466)<<(x1467&x1468));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1469 = 1;
	uint32_t x1470 = 479730258U;
	static int16_t x1471 = INT16_MIN;
	static uint8_t x1472 = 0U;
	static uint32_t t80 = 50900U;

	t80 = ((x1469^x1470)<<(x1471&x1472));

	if (t80 != 479730259U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x1474 = INT8_MIN;
	static int16_t x1475 = INT16_MIN;
	uint32_t t81 = 0U;

	t81 = ((x1473^x1474)<<(x1475&x1476));

	if (t81 != 4142694592U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x1481 = 0U;
	uint64_t x1482 = UINT64_MAX;
	volatile int64_t x1483 = 452757LL;
	int32_t x1484 = INT32_MIN;
	uint64_t t82 = UINT64_MAX;

	t82 = ((x1481^x1482)<<(x1483&x1484));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1546 = INT16_MIN;
	static uint8_t x1547 = 1U;
	static volatile uint32_t x1548 = 0U;
	volatile int32_t t83 = -33285;

	t83 = ((x1545^x1546)<<(x1547&x1548));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x1565 = -1;
	uint32_t x1566 = 21182U;
	int16_t x1567 = INT16_MIN;
	static uint8_t x1568 = UINT8_MAX;
	uint32_t t84 = 414212U;

	t84 = ((x1565^x1566)<<(x1567&x1568));

	if (t84 != 4294946113U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1580 = UINT64_MAX;
	uint32_t t85 = 3011U;

	t85 = ((x1577^x1578)<<(x1579&x1580));

	if (t85 != 67080192U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x1581 = UINT64_MAX;
	uint8_t x1582 = UINT8_MAX;
	uint8_t x1583 = 3U;
	int64_t x1584 = -1LL;
	uint64_t t86 = 147167000132348LLU;

	t86 = ((x1581^x1582)<<(x1583&x1584));

	if (t86 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x1597 = UINT8_MAX;
	uint8_t x1599 = 2U;
	static volatile int64_t x1600 = INT64_MIN;
	static volatile uint32_t t87 = 32U;

	t87 = ((x1597^x1598)<<(x1599&x1600));

	if (t87 != 18252U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1633 = 12991U;
	int16_t x1634 = -1;
	int8_t x1635 = -6;
	int8_t x1636 = 0;
	static volatile uint32_t t88 = 95437U;

	t88 = ((x1633^x1634)<<(x1635&x1636));

	if (t88 != 4294954304U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x1649 = 493U;
	uint8_t x1650 = UINT8_MAX;
	volatile uint8_t x1651 = 1U;
	volatile int8_t x1652 = -1;
	volatile int32_t t89 = 7;

	t89 = ((x1649^x1650)<<(x1651&x1652));

	if (t89 != 548) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1661 = -1594320LL;
	int8_t x1662 = -1;
	uint16_t x1663 = 2U;
	int32_t x1664 = INT32_MIN;
	int64_t t90 = -787919760LL;

	t90 = ((x1661^x1662)<<(x1663&x1664));

	if (t90 != 1594319LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x1665 = 37279LLU;
	uint64_t x1666 = 129447646677LLU;
	int16_t x1667 = 23;
	int16_t x1668 = 1;
	volatile uint64_t t91 = 60746LLU;

	t91 = ((x1665^x1666)<<(x1667&x1668));

	if (t91 != 258895349908LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x1693 = INT8_MAX;
	int16_t x1694 = INT16_MAX;
	volatile int16_t x1695 = INT16_MIN;
	uint16_t x1696 = 216U;
	static int32_t t92 = -151501;

	t92 = ((x1693^x1694)<<(x1695&x1696));

	if (t92 != 32640) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1709 = INT8_MIN;
	uint32_t x1710 = 39489632U;
	static uint8_t x1711 = 43U;
	static uint64_t x1712 = 6023LLU;

	t93 = ((x1709^x1710)<<(x1711&x1712));

	if (t93 != 3979050752U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x1722 = UINT64_MAX;
	int32_t x1723 = INT32_MIN;
	uint8_t x1724 = 48U;
	volatile uint64_t t94 = 5710706654106LLU;

	t94 = ((x1721^x1722)<<(x1723&x1724));

	if (t94 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x1733 = 0;
	uint8_t x1734 = 3U;
	uint8_t x1735 = 1U;
	uint8_t x1736 = UINT8_MAX;
	int32_t t95 = -18911;

	t95 = ((x1733^x1734)<<(x1735&x1736));

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1745 = 3901053LLU;
	int8_t x1746 = INT8_MIN;
	int8_t x1747 = 42;
	volatile uint64_t t96 = 0LLU;

	t96 = ((x1745^x1746)<<(x1747&x1748));

	if (t96 != 18446744073705650685LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1765 = UINT32_MAX;
	uint64_t x1766 = 486844LLU;
	int16_t x1768 = 3748;
	uint64_t t97 = 20409211008LLU;

	t97 = ((x1765^x1766)<<(x1767&x1768));

	if (t97 != 4294480451LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x1769 = 5203U;
	volatile int32_t x1770 = INT32_MIN;
	volatile int32_t x1771 = INT32_MIN;
	int8_t x1772 = INT8_MAX;

	t98 = ((x1769^x1770)<<(x1771&x1772));

	if (t98 != 2147488851U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1774 = INT32_MAX;
	uint8_t x1776 = 14U;
	volatile int32_t t99 = -1;

	t99 = ((x1773^x1774)<<(x1775&x1776));

	if (t99 != 2147483520) { NG(); } else { ; }
	
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

