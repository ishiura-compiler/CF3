#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MAX;
static volatile int16_t x23 = -95;
static int64_t x30 = -761929500795LL;
int8_t x34 = -1;
volatile uint64_t x44 = 1LLU;
static int16_t x50 = -43;
int32_t x53 = INT32_MIN;
static int8_t x60 = -1;
uint64_t t13 = 1LLU;
int16_t x67 = 1;
static volatile int32_t x68 = -4943;
uint32_t x71 = 31U;
uint8_t x73 = 3U;
uint32_t x74 = UINT32_MAX;
static volatile int32_t x75 = -242206;
volatile uint8_t x76 = 5U;
uint32_t t17 = 17496321U;
int32_t x78 = INT32_MIN;
uint64_t t18 = 44788783663010248LLU;
static int8_t x84 = INT8_MIN;
static uint8_t x85 = 0U;
uint32_t x87 = 0U;
int32_t x104 = -1;
int8_t x106 = -1;
volatile int16_t x113 = INT16_MIN;
int32_t x123 = INT32_MAX;
int8_t x124 = INT8_MIN;
static int64_t t30 = 15976481284919011LL;
int32_t x129 = INT32_MIN;
int8_t x139 = INT8_MIN;
static int64_t t33 = -8729321473450LL;
uint64_t x143 = 2035594LLU;
static volatile int64_t x147 = -68458LL;
int16_t x151 = -10;
static int8_t x157 = 0;
volatile uint64_t t40 = 3118668LLU;
static int64_t x170 = -1LL;
volatile uint64_t x175 = 236228643LLU;
volatile uint64_t t42 = 117LLU;
int64_t x185 = INT64_MIN;
int64_t x202 = INT64_MAX;
int64_t x208 = -1LL;
int64_t x209 = INT64_MAX;
int64_t t50 = 2223LL;
volatile uint32_t t51 = 6695U;
uint64_t x218 = 6171280LLU;
static uint64_t x223 = 7729793530945256LLU;
static int8_t x232 = -1;
volatile int16_t x237 = 11962;
int64_t x239 = INT64_MAX;
uint16_t x241 = 477U;
static volatile int16_t x242 = INT16_MAX;
int64_t x251 = 22LL;
int64_t x252 = -1LL;
int32_t x260 = INT32_MIN;
uint16_t x261 = 0U;
int64_t x262 = INT64_MIN;
static uint64_t x267 = UINT64_MAX;
int16_t x272 = INT16_MIN;
int32_t t64 = 33898904;
int64_t t65 = 2125673712405373LL;
int16_t x282 = 2364;
static int64_t t68 = 2076723LL;
int64_t x290 = 2083917918187LL;
int64_t x293 = -54442068LL;
int16_t x308 = INT16_MAX;
volatile int64_t x312 = INT64_MIN;
int16_t x314 = -2920;
static volatile int8_t x320 = -1;
static uint16_t x322 = 1919U;
volatile int16_t x323 = -1;
uint8_t x333 = 3U;
int32_t x336 = -1;
static volatile int64_t t79 = 175LL;
int32_t t81 = 91;
int32_t x353 = -1;
int16_t x362 = INT16_MAX;
static int64_t x364 = 1LL;
int32_t x386 = INT32_MIN;
int8_t x387 = INT8_MIN;
static int64_t t92 = 223979125659591LL;
int32_t x392 = INT32_MIN;
int16_t x393 = INT16_MIN;
int32_t t95 = 0;
int32_t x410 = 46;
static int8_t x414 = INT8_MAX;
volatile int64_t x420 = 797701255047LL;
static int64_t t99 = 8081509LL;


void f0(void) {
	volatile int64_t x1 = -74LL;
	int64_t x2 = INT64_MIN;
	volatile uint16_t x3 = 161U;
	uint32_t x4 = UINT32_MAX;
	volatile int64_t t0 = -12464336283318977LL;

	t0 = ((x1^x2)-(x3%x4));

	if (t0 != 9223372036854775573LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 14387U;
	int32_t x7 = INT32_MIN;
	int16_t x8 = -1;
	int64_t t1 = 488LL;

	t1 = ((x5^x6)-(x7%x8));

	if (t1 != 9223372036854761420LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x10 = UINT8_MAX;
	uint16_t x11 = 9U;
	static uint8_t x12 = 7U;
	int32_t t2 = 114;

	t2 = ((x9^x10)-(x11%x12));

	if (t2 != -258) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 3142U;
	volatile int16_t x18 = INT16_MAX;
	volatile int8_t x19 = INT8_MAX;
	int64_t x20 = -63162159812051630LL;
	volatile int64_t t3 = -33067LL;

	t3 = ((x17^x18)-(x19%x20));

	if (t3 != 29498LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	volatile uint32_t x22 = 170U;
	int32_t x24 = 3919;
	static uint32_t t4 = 1375U;

	t4 = ((x21^x22)-(x23%x24));

	if (t4 != 4294967220U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	uint8_t x27 = 0U;
	int32_t x28 = -1;
	volatile int32_t t5 = -11450038;

	t5 = ((x25^x26)-(x27%x28));

	if (t5 != 32640) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MAX;
	int32_t x31 = INT32_MAX;
	static int32_t x32 = INT32_MIN;
	int64_t t6 = 129318171572869LL;

	t6 = ((x29^x30)-(x31%x32));

	if (t6 != -762783889285LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MAX;
	volatile int16_t x35 = -1679;
	int32_t x36 = INT32_MIN;
	static volatile int32_t t7 = 1898;

	t7 = ((x33^x34)-(x35%x36));

	if (t7 != 1551) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = -16;
	static int64_t x39 = INT64_MAX;
	uint32_t x40 = UINT32_MAX;
	static volatile int64_t t8 = -209479108LL;

	t8 = ((x37^x38)-(x39%x40));

	if (t8 != -2147483535LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MAX;
	static uint64_t t9 = 94LLU;

	t9 = ((x41^x42)-(x43%x44));

	if (t9 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 8U;
	uint32_t x46 = UINT32_MAX;
	volatile uint8_t x47 = UINT8_MAX;
	volatile int8_t x48 = INT8_MIN;
	uint32_t t10 = 442U;

	t10 = ((x45^x46)-(x47%x48));

	if (t10 != 4294967160U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	static uint32_t x51 = 13U;
	volatile int8_t x52 = INT8_MIN;
	uint32_t t11 = 896U;

	t11 = ((x49^x50)-(x51%x52));

	if (t11 != 4294967197U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x54 = UINT16_MAX;
	int16_t x55 = INT16_MAX;
	int64_t x56 = INT64_MAX;
	int64_t t12 = 15LL;

	t12 = ((x53^x54)-(x55%x56));

	if (t12 != -2147450880LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -3;
	int32_t x58 = INT32_MIN;
	uint64_t x59 = 2650631015315LLU;

	t13 = ((x57^x58)-(x59%x60));

	if (t13 != 18446741425226019946LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 666995LLU;
	static int64_t x62 = -1LL;
	int64_t x63 = -451602483LL;
	static int16_t x64 = -1;
	volatile uint64_t t14 = 12801LLU;

	t14 = ((x61^x62)-(x63%x64));

	if (t14 != 18446744073708884620LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -36970;
	int8_t x66 = INT8_MIN;
	static volatile int32_t t15 = 6577;

	t15 = ((x65^x66)-(x67%x68));

	if (t15 != 36885) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MAX;
	int16_t x70 = -3044;
	static uint8_t x72 = 123U;
	uint32_t t16 = 7U;

	t16 = ((x69^x70)-(x71%x72));

	if (t16 != 2147486660U) { NG(); } else { ; }
	
}

void f17(void) {


	t17 = ((x73^x74)-(x75%x76));

	if (t17 != 4294967293U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 803LLU;
	static int32_t x79 = INT32_MAX;
	int8_t x80 = -2;

	t18 = ((x77^x78)-(x79%x80));

	if (t18 != 18446744071562068770LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = 50U;
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = INT64_MAX;
	static int64_t t19 = 7579631288LL;

	t19 = ((x81^x82)-(x83%x84));

	if (t19 != 65358LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x86 = 113U;
	volatile int32_t x88 = INT32_MIN;
	uint32_t t20 = 3U;

	t20 = ((x85^x86)-(x87%x88));

	if (t20 != 113U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = UINT16_MAX;
	int64_t x90 = -1LL;
	volatile uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MIN;
	volatile uint64_t t21 = 3634808757LLU;

	t21 = ((x89^x90)-(x91%x92));

	if (t21 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = -20;
	int8_t x95 = 0;
	int32_t x96 = INT32_MIN;
	volatile int32_t t22 = -163;

	t22 = ((x93^x94)-(x95%x96));

	if (t22 != 32748) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	static volatile int32_t x98 = INT32_MAX;
	static int32_t x99 = -5943;
	static int64_t x100 = 15LL;
	int64_t t23 = -1LL;

	t23 = ((x97^x98)-(x99%x100));

	if (t23 != -2147483645LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	int8_t x102 = -1;
	int16_t x103 = -3;
	int32_t t24 = -8;

	t24 = ((x101^x102)-(x103%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 357320801U;
	int16_t x107 = -1;
	static volatile uint32_t x108 = 2564U;
	volatile uint32_t t25 = 1U;

	t25 = ((x105^x106)-(x107%x108));

	if (t25 != 3937645855U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = 1433U;
	volatile int32_t x110 = -1;
	int8_t x111 = -1;
	int16_t x112 = INT16_MAX;
	uint32_t t26 = 10323U;

	t26 = ((x109^x110)-(x111%x112));

	if (t26 != 4294965863U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = -1;
	static int8_t x115 = -1;
	int32_t x116 = -1;
	static volatile int32_t t27 = -5957;

	t27 = ((x113^x114)-(x115%x116));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 110922922495656LLU;
	int16_t x118 = -1;
	volatile uint16_t x119 = 1031U;
	int16_t x120 = -1;
	uint64_t t28 = 374761056LLU;

	t28 = ((x117^x118)-(x119%x120));

	if (t28 != 18446633150787055959LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -1LL;
	int8_t x122 = INT8_MAX;
	int64_t t29 = -361653350142748534LL;

	t29 = ((x121^x122)-(x123%x124));

	if (t29 != -255LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = -1;

	t30 = ((x125^x126)-(x127%x128));

	if (t30 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x130 = INT8_MIN;
	uint32_t x131 = 0U;
	static int16_t x132 = INT16_MIN;
	uint32_t t31 = 3U;

	t31 = ((x129^x130)-(x131%x132));

	if (t31 != 2147483520U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x133 = INT16_MAX;
	static int64_t x134 = -1LL;
	int64_t x135 = INT64_MAX;
	int16_t x136 = INT16_MIN;
	static volatile int64_t t32 = -7313295LL;

	t32 = ((x133^x134)-(x135%x136));

	if (t32 != -65535LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = 7LL;
	int64_t x138 = -4243183708370538LL;
	static int64_t x140 = INT64_MIN;

	t33 = ((x137^x138)-(x139%x140));

	if (t33 != -4243183708370415LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = 16259285044108311LL;
	int8_t x142 = 0;
	uint64_t x144 = UINT64_MAX;
	uint64_t t34 = 53080614142638LLU;

	t34 = ((x141^x142)-(x143%x144));

	if (t34 != 16259285042072717LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	static int16_t x146 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	static volatile int64_t t35 = 1579223989224587648LL;

	t35 = ((x145^x146)-(x147%x148));

	if (t35 != 35689LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x149 = 14U;
	int32_t x150 = -1;
	int8_t x152 = 5;
	int32_t t36 = -656;

	t36 = ((x149^x150)-(x151%x152));

	if (t36 != -15) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = -1;
	int64_t x154 = -1LL;
	int32_t x155 = -1;
	uint64_t x156 = UINT64_MAX;
	uint64_t t37 = 68614148LLU;

	t37 = ((x153^x154)-(x155%x156));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x158 = 11U;
	int16_t x159 = -30;
	static int8_t x160 = -7;
	int32_t t38 = 4;

	t38 = ((x157^x158)-(x159%x160));

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	static volatile int16_t x162 = INT16_MAX;
	int64_t x163 = INT64_MIN;
	static volatile int64_t x164 = -3798LL;
	volatile int64_t t39 = 19152LL;

	t39 = ((x161^x162)-(x163%x164));

	if (t39 != 35312LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 4333429657576LLU;
	int16_t x166 = INT16_MIN;
	int8_t x167 = -60;
	static int32_t x168 = INT32_MIN;

	t40 = ((x165^x166)-(x167%x168));

	if (t40 != 18446739740279869476LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int8_t x171 = -1;
	uint32_t x172 = 42487659U;
	volatile uint64_t t41 = 110031037706LLU;

	t41 = ((x169^x170)-(x171%x172));

	if (t41 != 18446744073705837880LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = INT16_MAX;
	uint8_t x176 = UINT8_MAX;

	t42 = ((x173^x174)-(x175%x176));

	if (t42 != 9223372036854808362LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x177 = 396648LLU;
	volatile int64_t x178 = INT64_MAX;
	uint64_t x179 = 19LLU;
	static int16_t x180 = INT16_MIN;
	volatile uint64_t t43 = 15240451601LLU;

	t43 = ((x177^x178)-(x179%x180));

	if (t43 != 9223372036854379140LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MAX;
	int64_t x183 = -4LL;
	uint32_t x184 = UINT32_MAX;
	volatile int64_t t44 = 27836961758256080LL;

	t44 = ((x181^x182)-(x183%x184));

	if (t44 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = 10;
	uint64_t x187 = UINT64_MAX;
	volatile uint16_t x188 = 477U;
	volatile uint64_t t45 = 5LLU;

	t45 = ((x185^x186)-(x187%x188));

	if (t45 != 9223372036854775380LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x193 = 455049;
	int8_t x194 = INT8_MAX;
	uint64_t x195 = 472LLU;
	volatile int32_t x196 = -227643;
	uint64_t t46 = 515542180133LLU;

	t46 = ((x193^x194)-(x195%x196));

	if (t46 != 454686LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MIN;
	int16_t x198 = 2;
	volatile int32_t x199 = 60;
	int32_t x200 = 1978209;
	volatile int32_t t47 = 1;

	t47 = ((x197^x198)-(x199%x200));

	if (t47 != -32826) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = UINT8_MAX;
	static int8_t x203 = -26;
	int64_t x204 = -2790666577717543910LL;
	int64_t t48 = 950532LL;

	t48 = ((x201^x202)-(x203%x204));

	if (t48 != 9223372036854775578LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = -1;
	int16_t x206 = -1;
	uint64_t x207 = 1410785LLU;
	static volatile uint64_t t49 = 4951932LLU;

	t49 = ((x205^x206)-(x207%x208));

	if (t49 != 18446744073708140831LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x210 = 1;
	uint32_t x211 = 10U;
	int8_t x212 = INT8_MIN;

	t50 = ((x209^x210)-(x211%x212));

	if (t50 != 9223372036854775796LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = UINT16_MAX;
	int32_t x214 = INT32_MIN;
	static uint8_t x215 = 0U;
	uint32_t x216 = 188242U;

	t51 = ((x213^x214)-(x215%x216));

	if (t51 != 2147549183U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = INT32_MIN;
	int16_t x219 = 1;
	static int64_t x220 = INT64_MAX;
	uint64_t t52 = 218304483631392101LLU;

	t52 = ((x217^x218)-(x219%x220));

	if (t52 != 18446744071568239247LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = -1;
	uint16_t x222 = 22405U;
	int64_t x224 = -1LL;
	static volatile uint64_t t53 = 5LLU;

	t53 = ((x221^x222)-(x223%x224));

	if (t53 != 18439014280178583954LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = -1605;
	uint8_t x226 = 8U;
	int16_t x227 = -1;
	static int16_t x228 = INT16_MAX;
	volatile int32_t t54 = 68780866;

	t54 = ((x225^x226)-(x227%x228));

	if (t54 != -1612) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	static int32_t t55 = -2396265;

	t55 = ((x229^x230)-(x231%x232));

	if (t55 != -129) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x238 = -1LL;
	int16_t x240 = INT16_MIN;
	int64_t t56 = 1946463790LL;

	t56 = ((x237^x238)-(x239%x240));

	if (t56 != -44730LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x243 = 64U;
	volatile int32_t x244 = -1;
	volatile int32_t t57 = 594730179;

	t57 = ((x241^x242)-(x243%x244));

	if (t57 != 32290) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = 14;
	int8_t x246 = 0;
	volatile int64_t x247 = -4451957623829752LL;
	int16_t x248 = -153;
	int64_t t58 = -2781332094581117LL;

	t58 = ((x245^x246)-(x247%x248));

	if (t58 != 57LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MAX;
	volatile uint16_t x250 = 5U;
	volatile int64_t t59 = -1423LL;

	t59 = ((x249^x250)-(x251%x252));

	if (t59 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = -12;
	static volatile int16_t x254 = -179;
	int8_t x255 = 0;
	static volatile uint64_t x256 = UINT64_MAX;
	volatile uint64_t t60 = 179841227LLU;

	t60 = ((x253^x254)-(x255%x256));

	if (t60 != 185LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = -1;
	static volatile int64_t x258 = -1LL;
	int16_t x259 = -1;
	volatile int64_t t61 = 4206089077633LL;

	t61 = ((x257^x258)-(x259%x260));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x263 = -6;
	uint16_t x264 = UINT16_MAX;
	int64_t t62 = 3211995053090LL;

	t62 = ((x261^x262)-(x263%x264));

	if (t62 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x265 = -1;
	int32_t x266 = INT32_MIN;
	static volatile int64_t x268 = INT64_MIN;
	volatile uint64_t t63 = 1714802836078469835LLU;

	t63 = ((x265^x266)-(x267%x268));

	if (t63 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x269 = 15U;
	int16_t x270 = -39;
	static volatile int16_t x271 = INT16_MAX;

	t64 = ((x269^x270)-(x271%x272));

	if (t64 != -32809) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MAX;
	volatile int64_t x274 = INT64_MAX;
	int64_t x275 = -1LL;
	static uint32_t x276 = UINT32_MAX;

	t65 = ((x273^x274)-(x275%x276));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -1;
	uint16_t x278 = 4U;
	volatile uint8_t x279 = 10U;
	uint32_t x280 = 760903332U;
	uint32_t t66 = 70708781U;

	t66 = ((x277^x278)-(x279%x280));

	if (t66 != 4294967281U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = -1;
	volatile int64_t x283 = -1LL;
	uint64_t x284 = 2416373701007LLU;
	static uint64_t t67 = 4441545278960291LLU;

	t67 = ((x281^x282)-(x283%x284));

	if (t67 != 18446741815909496056LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x286 = 71U;
	int16_t x287 = -1;
	int8_t x288 = INT8_MIN;

	t68 = ((x285^x286)-(x287%x288));

	if (t68 != -9223372036854775736LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	int32_t x291 = 0;
	static volatile int32_t x292 = -1;
	volatile int64_t t69 = 4035359226LL;

	t69 = ((x289^x290)-(x291%x292));

	if (t69 != -9223369952936857621LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x294 = UINT32_MAX;
	int8_t x295 = 43;
	static volatile int32_t x296 = INT32_MAX;
	volatile int64_t t70 = -28841969LL;

	t70 = ((x293^x294)-(x295%x296));

	if (t70 != -4240525272LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x297 = 7623043LL;
	static int8_t x298 = INT8_MAX;
	int64_t x299 = INT64_MIN;
	static int16_t x300 = -48;
	int64_t t71 = -19015943364685LL;

	t71 = ((x297^x298)-(x299%x300));

	if (t71 != 7623196LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MIN;
	static int64_t x306 = INT64_MIN;
	int64_t x307 = -1LL;
	int64_t t72 = -113LL;

	t72 = ((x305^x306)-(x307%x308));

	if (t72 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = -1LL;
	uint8_t x310 = 45U;
	int32_t x311 = -1;
	int64_t t73 = 113136932099LL;

	t73 = ((x309^x310)-(x311%x312));

	if (t73 != -45LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MIN;
	static int64_t x315 = 893024059808LL;
	volatile int16_t x316 = -3;
	volatile int64_t t74 = -216LL;

	t74 = ((x313^x314)-(x315%x316));

	if (t74 != 2838LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = -1;
	int8_t x318 = -12;
	static uint8_t x319 = UINT8_MAX;
	int32_t t75 = 452;

	t75 = ((x317^x318)-(x319%x320));

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MAX;
	int16_t x324 = -112;
	volatile int32_t t76 = -1;

	t76 = ((x321^x322)-(x323%x324));

	if (t76 != 30849) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x325 = INT8_MIN;
	volatile int64_t x326 = INT64_MAX;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = 293389;
	volatile uint64_t t77 = 13LLU;

	t77 = ((x325^x326)-(x327%x328));

	if (t77 != 9223372036854690325LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x329 = 1U;
	uint16_t x330 = 11731U;
	int16_t x331 = -1;
	uint64_t x332 = UINT64_MAX;
	uint64_t t78 = 389LLU;

	t78 = ((x329^x330)-(x331%x332));

	if (t78 != 11730LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x334 = UINT16_MAX;
	int64_t x335 = INT64_MAX;

	t79 = ((x333^x334)-(x335%x336));

	if (t79 != 65532LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = -737;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = 1;
	uint32_t x340 = 15992U;
	volatile uint64_t t80 = 199075200516525168LLU;

	t80 = ((x337^x338)-(x339%x340));

	if (t80 != 735LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x341 = -7;
	static volatile int32_t x342 = 2477408;
	uint8_t x343 = 87U;
	int8_t x344 = INT8_MIN;

	t81 = ((x341^x342)-(x343%x344));

	if (t81 != -2477502) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 232695U;
	uint64_t x346 = 25026139LLU;
	int64_t x347 = INT64_MAX;
	int64_t x348 = INT64_MAX;
	volatile uint64_t t82 = 116LLU;

	t82 = ((x345^x346)-(x347%x348));

	if (t82 != 25055916LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	int16_t x351 = -1;
	int8_t x352 = INT8_MIN;
	int32_t t83 = -29;

	t83 = ((x349^x350)-(x351%x352));

	if (t83 != 2147483521) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x354 = 5U;
	uint8_t x355 = 121U;
	uint16_t x356 = 13531U;
	static volatile int32_t t84 = 74195;

	t84 = ((x353^x354)-(x355%x356));

	if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = 11U;
	static volatile uint32_t x358 = 87959377U;
	volatile int8_t x359 = -3;
	int16_t x360 = -2210;
	volatile uint32_t t85 = 6U;

	t85 = ((x357^x358)-(x359%x360));

	if (t85 != 87959389U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x361 = 738U;
	static int32_t x363 = -1;
	volatile int64_t t86 = 33818562975LL;

	t86 = ((x361^x362)-(x363%x364));

	if (t86 != 32029LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x365 = 505190LL;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = UINT8_MAX;
	uint16_t x368 = 8431U;
	static int64_t t87 = 875526994430910LL;

	t87 = ((x365^x366)-(x367%x368));

	if (t87 != -510873LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MIN;
	uint32_t x370 = 734211U;
	uint64_t x371 = 125527LLU;
	static int8_t x372 = -1;
	static uint64_t t88 = 0LLU;

	t88 = ((x369^x370)-(x371%x372));

	if (t88 != 4294107436LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 32U;
	int8_t x375 = -3;
	int16_t x376 = -5083;
	uint64_t t89 = 3312863673709799LLU;

	t89 = ((x373^x374)-(x375%x376));

	if (t89 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x377 = INT32_MIN;
	static uint8_t x378 = 3U;
	static int64_t x379 = -1LL;
	uint64_t x380 = 6LLU;
	uint64_t t90 = 15LLU;

	t90 = ((x377^x378)-(x379%x380));

	if (t90 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = 24643LLU;
	int32_t x384 = -6121410;
	volatile uint64_t t91 = 1668270LLU;

	t91 = ((x381^x382)-(x383%x384));

	if (t91 != 9223372036854783932LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	static int8_t x388 = INT8_MIN;

	t92 = ((x385^x386)-(x387%x388));

	if (t92 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	uint64_t x391 = 37451291779311LLU;
	uint64_t t93 = 75205740268825404LLU;

	t93 = ((x389^x390)-(x391%x392));

	if (t93 != 18446706622417805072LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x394 = 835101890U;
	uint64_t x395 = 2LLU;
	volatile int16_t x396 = INT16_MIN;
	uint64_t t94 = 3328582311573LLU;

	t94 = ((x393^x394)-(x395%x396));

	if (t94 != 3459851456LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MIN;
	uint16_t x399 = 98U;
	static int16_t x400 = 4519;

	t95 = ((x397^x398)-(x399%x400));

	if (t95 != 32542) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = -1;
	int64_t x402 = -1LL;
	uint8_t x403 = UINT8_MAX;
	int32_t x404 = -2696;
	volatile int64_t t96 = 778930020LL;

	t96 = ((x401^x402)-(x403%x404));

	if (t96 != -255LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MIN;
	int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;
	int64_t t97 = 16LL;

	t97 = ((x409^x410)-(x411%x412));

	if (t97 != -9223372036854742994LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = -1LL;
	uint8_t x415 = 18U;
	int64_t x416 = INT64_MIN;
	int64_t t98 = 24216LL;

	t98 = ((x413^x414)-(x415%x416));

	if (t98 != -146LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x417 = 8;
	static uint32_t x418 = 11686073U;
	int16_t x419 = INT16_MIN;

	t99 = ((x417^x418)-(x419%x420));

	if (t99 != 11718833LL) { NG(); } else { ; }
	
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

