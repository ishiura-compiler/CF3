#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = INT64_MIN;
volatile int32_t x14 = 19327;
int8_t x16 = INT8_MIN;
uint32_t x18 = 245427271U;
int64_t t8 = 210816459090178406LL;
int64_t x41 = INT64_MAX;
static int8_t x45 = INT8_MAX;
uint64_t t11 = 6488024000431127LLU;
uint8_t x57 = 1U;
volatile uint16_t x59 = UINT16_MAX;
static volatile int32_t t14 = 31;
int16_t x67 = -185;
int32_t x71 = -1;
uint16_t x74 = 1039U;
int64_t x75 = -1LL;
uint64_t x81 = 4286674611558252LLU;
static volatile uint64_t x83 = 952173852LLU;
int16_t x84 = INT16_MIN;
uint64_t t21 = 246LLU;
uint32_t x90 = 55307505U;
volatile int32_t x99 = INT32_MAX;
volatile uint16_t x103 = 1U;
static int64_t t25 = -1LL;
volatile int32_t x106 = INT32_MIN;
int32_t x107 = 10146601;
uint32_t x110 = 31320U;
volatile uint32_t t27 = 156985646U;
volatile int8_t x131 = INT8_MIN;
static int32_t x135 = -1;
int16_t x137 = INT16_MIN;
static volatile int64_t t34 = -18318251262985LL;
uint64_t x142 = UINT64_MAX;
int8_t x155 = INT8_MAX;
int8_t x170 = INT8_MIN;
volatile uint64_t t43 = 1LLU;
static uint32_t x182 = UINT32_MAX;
static int16_t x187 = -2;
int32_t x191 = -1498;
int64_t x195 = 45180470322076LL;
volatile int64_t t49 = -337394182100LL;
int64_t x201 = -1LL;
int8_t x203 = INT8_MIN;
int8_t x205 = INT8_MAX;
volatile uint8_t x210 = 0U;
volatile int16_t x211 = 7758;
int8_t x213 = -1;
uint8_t x223 = 57U;
volatile int64_t x224 = -1LL;
static volatile int64_t t55 = -14030LL;
volatile int8_t x228 = INT8_MIN;
static int64_t x240 = -629986986871712LL;
static int32_t x242 = 0;
int32_t x244 = -43946930;
uint16_t x257 = 9U;
static int16_t x258 = -3078;
static int64_t x259 = INT64_MIN;
static uint64_t x264 = 30LLU;
static uint16_t x269 = 846U;
int64_t x271 = INT64_MIN;
int32_t x272 = INT32_MIN;
int32_t x277 = INT32_MIN;
int32_t x284 = -82;
volatile int16_t x290 = INT16_MIN;
volatile int16_t x292 = -1;
int16_t x298 = -1;
uint32_t t74 = UINT32_MAX;
static int8_t x301 = INT8_MIN;
uint64_t x304 = 2001328LLU;
int64_t x305 = 26358190921752836LL;
int32_t x313 = -1;
int64_t t78 = 193817623009LL;
int32_t x320 = INT32_MIN;
static volatile int64_t x329 = INT64_MIN;
static int64_t x330 = INT64_MAX;
volatile uint32_t x332 = 469255U;
int16_t x334 = -1;
uint64_t x344 = 44306506572116788LLU;
uint64_t t85 = 4073LLU;
int16_t x346 = -1684;
int32_t x348 = 1;
static uint8_t x350 = UINT8_MAX;
int8_t x353 = INT8_MIN;
static volatile int64_t t88 = 200LL;
int64_t x363 = 155LL;
volatile int64_t t90 = 111804803862584663LL;
int32_t x367 = 44201841;
int32_t x372 = INT32_MIN;
int32_t x374 = INT32_MIN;
int64_t x375 = INT64_MIN;
int64_t t93 = -127223117353749LL;
volatile int64_t x377 = INT64_MIN;
uint64_t x383 = UINT64_MAX;
static int32_t x388 = 1;
volatile int32_t x395 = -3;
int16_t x397 = -1;
uint64_t t99 = 205934670LLU;


void f0(void) {
	int64_t x2 = INT64_MIN;
	static int16_t x3 = -1;
	uint32_t x4 = 1488839666U;
	static int64_t t0 = -4LL;

	t0 = ((x1^(x2|x3))^x4);

	if (t0 != 9223372035365936141LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 46356033U;
	uint64_t x6 = 1LLU;
	int32_t x7 = INT32_MIN;
	int8_t x8 = -1;
	volatile uint64_t t1 = 4LLU;

	t1 = ((x5^(x6|x7))^x8);

	if (t1 != 2101127615LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = 9LL;
	volatile int32_t x10 = INT32_MIN;
	int32_t x11 = -9908;
	volatile int8_t x12 = INT8_MIN;
	static volatile int64_t t2 = -27741970688318LL;

	t2 = ((x9^(x10|x11))^x12);

	if (t2 != 9925LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 3699U;
	uint32_t x15 = UINT32_MAX;
	volatile uint32_t t3 = 61017052U;

	t3 = ((x13^(x14|x15))^x16);

	if (t3 != 3596U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -61564;
	int16_t x19 = 1;
	int64_t x20 = 63LL;
	volatile int64_t t4 = -11397400LL;

	t4 = ((x17^(x18|x19))^x20);

	if (t4 != 4049593340LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	volatile int16_t x22 = 1011;
	int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -831;

	t5 = ((x21^(x22|x23))^x24);

	if (t5 != -1012) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint8_t x26 = 78U;
	static uint32_t x27 = 1921789012U;
	int16_t x28 = -1;
	volatile int64_t t6 = 502663417LL;

	t6 = ((x25^(x26|x27))^x28);

	if (t6 != 9223372034932986785LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 18U;
	volatile int32_t t7 = -93;

	t7 = ((x29^(x30|x31))^x32);

	if (t7 != 109) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = UINT8_MAX;
	static int64_t x34 = INT64_MIN;
	int32_t x35 = -9253581;
	int32_t x36 = -1;

	t8 = ((x33^(x34|x35))^x36);

	if (t8 != 9253427LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	uint16_t x38 = 383U;
	int32_t x39 = -1;
	uint32_t x40 = UINT32_MAX;
	static uint32_t t9 = 5U;

	t9 = ((x37^(x38|x39))^x40);

	if (t9 != 32767U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 10U;
	volatile int64_t x43 = -1LL;
	static volatile int8_t x44 = -10;
	int64_t t10 = 244926120823LL;

	t10 = ((x41^(x42|x43))^x44);

	if (t10 != 9223372036854775798LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 11LLU;
	int16_t x47 = INT16_MIN;
	volatile int64_t x48 = INT64_MIN;

	t11 = ((x45^(x46|x47))^x48);

	if (t11 != 9223372036854743156LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 861010LLU;
	int64_t x50 = 1LL;
	uint8_t x51 = 8U;
	int64_t x52 = 1536LL;
	volatile uint64_t t12 = 184694LLU;

	t12 = ((x49^(x50|x51))^x52);

	if (t12 != 861531LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 168269492U;
	static int8_t x54 = INT8_MIN;
	volatile int32_t x55 = INT32_MIN;
	static volatile uint32_t x56 = UINT32_MAX;
	volatile uint32_t t13 = 975U;

	t13 = ((x53^(x54|x55))^x56);

	if (t13 != 168269515U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x58 = 205;
	volatile int32_t x60 = 1;

	t14 = ((x57^(x58|x59))^x60);

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 63625LLU;
	volatile int64_t x62 = -1LL;
	volatile int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = 14186U;
	uint64_t t15 = 16739LLU;

	t15 = ((x61^(x62|x63))^x64);

	if (t15 != 18446744073709498396LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int8_t x66 = INT8_MIN;
	static uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = 574209LLU;

	t16 = ((x65^(x66|x67))^x68);

	if (t16 != 18446744073709518904LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 18;
	uint16_t x70 = 113U;
	volatile int16_t x72 = 2;
	int32_t t17 = 63363259;

	t17 = ((x69^(x70|x71))^x72);

	if (t17 != -17) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -96;
	int8_t x76 = INT8_MAX;
	int64_t t18 = -1042436425181LL;

	t18 = ((x73^(x74|x75))^x76);

	if (t18 != 32LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -738500869;
	volatile int32_t x78 = INT32_MIN;
	int16_t x79 = -1;
	int8_t x80 = INT8_MAX;
	int32_t t19 = -467531;

	t19 = ((x77^(x78|x79))^x80);

	if (t19 != 738500987) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x82 = 31850U;
	static uint64_t t20 = 1LLU;

	t20 = ((x81^(x82|x83))^x84);

	if (t20 != 18442457399764953618LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 12U;
	uint64_t x86 = 166666440446912646LLU;
	int16_t x87 = -10;
	static int16_t x88 = -1;

	t21 = ((x85^(x86|x87))^x88);

	if (t21 != 5LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 141U;
	static volatile uint32_t t22 = 429198U;

	t22 = ((x89^(x90|x91))^x92);

	if (t22 != 32636U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 1U;
	volatile int64_t x94 = INT64_MIN;
	uint64_t x95 = 427LLU;
	int16_t x96 = INT16_MIN;
	volatile uint64_t t23 = 1LLU;

	t23 = ((x93^(x94|x95))^x96);

	if (t23 != 9223372036854743466LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 93U;
	uint16_t x98 = UINT16_MAX;
	uint16_t x100 = 3U;
	volatile int32_t t24 = 292;

	t24 = ((x97^(x98|x99))^x100);

	if (t24 != 2147483553) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	static int32_t x102 = -58587;
	int64_t x104 = 985027061261998LL;

	t25 = ((x101^(x102|x103))^x104);

	if (t25 != -9222387009793539468LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	static uint16_t x108 = UINT16_MAX;
	volatile int64_t t26 = 1LL;

	t26 = ((x105^(x106|x107))^x108);

	if (t26 != 9223372034717396182LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile uint16_t x111 = 2U;
	int16_t x112 = -440;

	t27 = ((x109^(x110|x111))^x112);

	if (t27 != 2147451922U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 260575680882779815LLU;
	static int32_t x114 = INT32_MAX;
	volatile int32_t x115 = INT32_MIN;
	volatile uint16_t x116 = 28514U;
	volatile uint64_t t28 = 17459413539921LLU;

	t28 = ((x113^(x114|x115))^x116);

	if (t28 != 18186168392826762810LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	volatile int32_t x118 = INT32_MIN;
	uint16_t x119 = 4U;
	int64_t x120 = -2770LL;
	int64_t t29 = 86006611588692LL;

	t29 = ((x117^(x118|x119))^x120);

	if (t29 != -2147453654LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 10363888U;
	int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	static int64_t t30 = 9725LL;

	t30 = ((x121^(x122|x123))^x124);

	if (t30 != 2137119759LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	uint64_t x126 = UINT64_MAX;
	uint16_t x127 = UINT16_MAX;
	uint64_t x128 = 225716579852589573LLU;
	uint64_t t31 = 1343794781322LLU;

	t31 = ((x125^(x126|x127))^x128);

	if (t31 != 225716579852589573LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	int32_t x130 = -1;
	volatile int32_t x132 = -15767;
	int32_t t32 = -851;

	t32 = ((x129^(x130|x131))^x132);

	if (t32 != -2147467882) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 2017;

	t33 = ((x133^(x134|x135))^x136);

	if (t33 != -2147483521) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x138 = INT64_MAX;
	int16_t x139 = -1;
	int32_t x140 = INT32_MAX;

	t34 = ((x137^(x138|x139))^x140);

	if (t34 != 2147450880LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -1LL;
	volatile int8_t x143 = 1;
	static int64_t x144 = -1LL;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x141^(x142|x143))^x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = -5;
	static int64_t x146 = 1374944794523LL;
	static uint16_t x147 = 3033U;
	uint16_t x148 = UINT16_MAX;
	int64_t t36 = 6079929626LL;

	t36 = ((x145^(x146|x147))^x148);

	if (t36 != -1374944780321LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	volatile int8_t x150 = INT8_MAX;
	static uint32_t x151 = UINT32_MAX;
	int64_t x152 = INT64_MIN;
	static int64_t t37 = INT64_MIN;

	t37 = ((x149^(x150|x151))^x152);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 378LL;
	int64_t x154 = INT64_MIN;
	int16_t x156 = -4286;
	int64_t t38 = -41501886549397LL;

	t38 = ((x153^(x154|x155))^x156);

	if (t38 != 9223372036854771271LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = INT8_MIN;
	int8_t x159 = 0;
	int64_t x160 = -1LL;
	volatile int64_t t39 = -501LL;

	t39 = ((x157^(x158|x159))^x160);

	if (t39 != -32641LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	uint8_t x162 = 25U;
	int8_t x163 = 0;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 39506277;

	t40 = ((x161^(x162|x163))^x164);

	if (t40 != 32665) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint8_t x166 = 111U;
	int16_t x167 = INT16_MIN;
	static volatile int8_t x168 = -1;
	volatile uint64_t t41 = 8LLU;

	t41 = ((x165^(x166|x167))^x168);

	if (t41 != 18446744073709518959LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	uint32_t x171 = 0U;
	static uint32_t x172 = UINT32_MAX;
	static uint32_t t42 = 827952172U;

	t42 = ((x169^(x170|x171))^x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = -1481LL;
	static int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -1LL;

	t43 = ((x173^(x174|x175))^x176);

	if (t43 != 18446744073709550135LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint16_t x178 = 1238U;
	uint64_t x179 = 1LLU;
	int32_t x180 = INT32_MIN;
	volatile uint64_t t44 = 130668LLU;

	t44 = ((x177^(x178|x179))^x180);

	if (t44 != 2147482455LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MAX;
	uint8_t x183 = 16U;
	int16_t x184 = -558;
	static volatile uint32_t t45 = 240U;

	t45 = ((x181^(x182|x183))^x184);

	if (t45 != 32210U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -5LL;
	int8_t x186 = -19;
	int16_t x188 = 609;
	int64_t t46 = -360524359LL;

	t46 = ((x185^(x186|x187))^x188);

	if (t46 != 613LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 953878844U;
	uint32_t x190 = UINT32_MAX;
	uint64_t x192 = 37511439LLU;
	static volatile uint64_t t47 = 529776325LLU;

	t47 = ((x189^(x190|x191))^x192);

	if (t47 != 3306723276LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -44817061;
	int32_t x194 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	static int64_t t48 = 2544026102412LL;

	t48 = ((x193^(x194|x195))^x196);

	if (t48 != -1732884793LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	volatile int64_t x200 = 488LL;

	t49 = ((x197^(x198|x199))^x200);

	if (t49 != -489LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x202 = -1LL;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t50 = INT64_MIN;

	t50 = ((x201^(x202|x203))^x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x206 = -3725122327297600LL;
	static int8_t x207 = INT8_MAX;
	int64_t x208 = -1LL;
	volatile int64_t t51 = -370404LL;

	t51 = ((x205^(x206|x207))^x208);

	if (t51 != 3725122327297663LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = 1339497674U;
	int16_t x212 = 10970;
	volatile uint32_t t52 = 346401345U;

	t52 = ((x209^(x210|x211))^x212);

	if (t52 != 1339500638U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x214 = UINT16_MAX;
	uint16_t x215 = 1U;
	volatile int32_t x216 = -682734477;
	int32_t t53 = -454;

	t53 = ((x213^(x214|x215))^x216);

	if (t53 != 682708083) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 23866476444462716LL;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = -65;
	int8_t x220 = INT8_MIN;
	static volatile int64_t t54 = -11767348541169LL;

	t54 = ((x217^(x218|x219))^x220);

	if (t54 != -23866480118256125LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1757;
	int8_t x222 = INT8_MIN;

	t55 = ((x221^(x222|x223))^x224);

	if (t55 != -1691LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 755558430U;
	int16_t x226 = 0;
	int16_t x227 = -1;
	uint32_t t56 = 704U;

	t56 = ((x225^(x226|x227))^x228);

	if (t56 != 755558497U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	uint32_t x230 = 11605U;
	int8_t x231 = INT8_MAX;
	static int64_t x232 = INT64_MIN;
	int64_t t57 = 54063654937LL;

	t57 = ((x229^(x230|x231))^x232);

	if (t57 != -9223372032559820160LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x233 = UINT64_MAX;
	int8_t x234 = -38;
	int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t58 = 97LLU;

	t58 = ((x233^(x234|x235))^x236);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = 3816469388323367126LL;
	static int16_t x238 = INT16_MAX;
	static uint32_t x239 = 10U;
	volatile int64_t t59 = 0LL;

	t59 = ((x237^(x238|x239))^x240);

	if (t59 != -3815936779135622327LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 2729U;
	uint16_t x243 = 283U;
	static int32_t t60 = 266027;

	t60 = ((x241^(x242|x243))^x244);

	if (t60 != -43948036) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -8;
	int16_t x246 = -1;
	uint8_t x247 = 26U;
	volatile int16_t x248 = INT16_MIN;
	static volatile int32_t t61 = 10805;

	t61 = ((x245^(x246|x247))^x248);

	if (t61 != -32761) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = INT8_MAX;
	int8_t x250 = -1;
	int8_t x251 = -1;
	volatile uint32_t x252 = 484550U;
	volatile uint32_t t62 = 522631U;

	t62 = ((x249^(x250|x251))^x252);

	if (t62 != 4294482758U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	volatile int8_t x254 = INT8_MAX;
	volatile int32_t x255 = -4;
	int8_t x256 = 6;
	volatile int32_t t63 = -915740;

	t63 = ((x253^(x254|x255))^x256);

	if (t63 != -122) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x260 = -1LL;
	static int64_t t64 = 260569LL;

	t64 = ((x257^(x258|x259))^x260);

	if (t64 != 3084LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 719550;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = UINT16_MAX;
	static volatile uint64_t t65 = 8186942342429LLU;

	t65 = ((x261^(x262|x263))^x264);

	if (t65 != 18446744073708832095LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	uint64_t x266 = 120LLU;
	static uint64_t x267 = 22457265300LLU;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t66 = 5LLU;

	t66 = ((x265^(x266|x267))^x268);

	if (t66 != 22457265404LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = -1;
	int64_t t67 = -16539952378075LL;

	t67 = ((x269^(x270|x271))^x272);

	if (t67 != 2147482801LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int32_t x274 = -14;
	int8_t x275 = 1;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t68 = 711967930533413LL;

	t68 = ((x273^(x274|x275))^x276);

	if (t68 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x278 = -1;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -168402;

	t69 = ((x277^(x278|x279))^x280);

	if (t69 != 2147418112) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x281 = 5LLU;
	static uint32_t x282 = 6310U;
	static volatile int8_t x283 = -2;
	volatile uint64_t t70 = 1027978352254LLU;

	t70 = ((x281^(x282|x283))^x284);

	if (t70 != 18446744069414584405LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 69653228LLU;
	int16_t x286 = -1;
	int16_t x287 = -11759;
	static volatile uint32_t x288 = UINT32_MAX;
	volatile uint64_t t71 = 16193279885LLU;

	t71 = ((x285^(x286|x287))^x288);

	if (t71 != 18446744069484237548LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	uint16_t x291 = 29757U;
	static int32_t t72 = -1053789660;

	t72 = ((x289^(x290|x291))^x292);

	if (t72 != -3006) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MAX;
	static int32_t x294 = INT32_MAX;
	volatile uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MAX;
	volatile int32_t t73 = 3407979;

	t73 = ((x293^(x294|x295))^x296);

	if (t73 != 2147451007) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	uint32_t x299 = UINT32_MAX;
	static int8_t x300 = INT8_MIN;

	t74 = ((x297^(x298|x299))^x300);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = UINT64_MAX;
	volatile int16_t x303 = INT16_MAX;
	uint64_t t75 = 914384LLU;

	t75 = ((x301^(x302|x303))^x304);

	if (t75 != 2001359LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MAX;
	int16_t x307 = INT16_MIN;
	volatile uint64_t x308 = 31235930200198446LLU;
	uint64_t t76 = 1497795590525LLU;

	t76 = ((x305^(x306|x307))^x308);

	if (t76 != 18432287371813721045LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint8_t x310 = UINT8_MAX;
	uint16_t x311 = 505U;
	static int8_t x312 = 40;
	volatile int32_t t77 = 16065151;

	t77 = ((x309^(x310|x311))^x312);

	if (t77 != -2147483177) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x314 = 58799757688LL;
	int32_t x315 = 493109;
	int8_t x316 = INT8_MIN;

	t78 = ((x313^(x314|x315))^x316);

	if (t78 != 58799922946LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	static int8_t x318 = INT8_MIN;
	static int32_t x319 = -881413;
	int32_t t79 = 9342033;

	t79 = ((x317^(x318|x319))^x320);

	if (t79 != 2147483524) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	volatile int64_t x322 = -1LL;
	static volatile uint64_t x323 = UINT64_MAX;
	static int16_t x324 = 22;
	volatile uint64_t t80 = 4065679556849LLU;

	t80 = ((x321^(x322|x323))^x324);

	if (t80 != 18446744069414584342LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	int64_t x326 = 1008105843513LL;
	int16_t x327 = INT16_MAX;
	int16_t x328 = 38;
	volatile int64_t t81 = -2002573845779970LL;

	t81 = ((x325^(x326|x327))^x328);

	if (t81 != -1008105816103LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = INT32_MAX;
	int64_t t82 = -500398LL;

	t82 = ((x329^(x330|x331))^x332);

	if (t82 != -469256LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 940;
	static int8_t x335 = 2;
	int32_t x336 = -213964205;
	int32_t t83 = -16;

	t83 = ((x333^(x334|x335))^x336);

	if (t83 != 213964288) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -17;
	static uint32_t x338 = 5097578U;
	int8_t x339 = INT8_MAX;
	int8_t x340 = INT8_MIN;
	uint32_t t84 = 79666U;

	t84 = ((x337^(x338|x339))^x340);

	if (t84 != 5097488U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	static uint8_t x342 = 1U;
	uint32_t x343 = 4467U;

	t85 = ((x341^(x342|x343))^x344);

	if (t85 != 44306508719596103LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x347 = UINT16_MAX;
	int32_t t86 = -1;

	t86 = ((x345^(x346|x347))^x348);

	if (t86 != 32766) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 4345422;
	static int16_t x351 = INT16_MIN;
	static int16_t x352 = 99;
	static int32_t t87 = -13293124;

	t87 = ((x349^(x350|x351))^x352);

	if (t87 != -4337966) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MAX;
	uint16_t x355 = 50U;
	int64_t x356 = -16350646LL;

	t88 = ((x353^(x354|x355))^x356);

	if (t88 != 9223372036838425141LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 113731118U;
	int16_t x358 = -2621;
	int32_t x359 = -53737695;
	int64_t x360 = INT64_MIN;
	int64_t t89 = -15304313423569343LL;

	t89 = ((x357^(x358|x359))^x360);

	if (t89 != -9223372032673541683LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x361 = -35301045;
	static int8_t x362 = INT8_MIN;
	uint16_t x364 = 138U;

	t90 = ((x361^(x362|x363))^x364);

	if (t90 != 35300954LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x366 = -293LL;
	int32_t x368 = -1;
	volatile int64_t t91 = -215437708239609LL;

	t91 = ((x365^(x366|x367))^x368);

	if (t91 != -32764LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = -24;
	volatile int64_t x370 = 16158372629LL;
	int8_t x371 = -1;
	volatile int64_t t92 = 149084337031844363LL;

	t92 = ((x369^(x370|x371))^x372);

	if (t92 != -2147483625LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = 15;
	int32_t x376 = 1028;

	t93 = ((x373^(x374|x375))^x376);

	if (t93 != -2147482613LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = UINT64_MAX;
	int8_t x379 = -3;
	volatile uint64_t x380 = 27LLU;
	uint64_t t94 = 1609180562239LLU;

	t94 = ((x377^(x378|x379))^x380);

	if (t94 != 9223372036854775780LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	volatile int32_t x384 = INT32_MIN;
	volatile uint64_t t95 = 89749842LLU;

	t95 = ((x381^(x382|x383))^x384);

	if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MAX;
	int16_t x386 = INT16_MIN;
	static uint8_t x387 = 62U;
	volatile int32_t t96 = 14946895;

	t96 = ((x385^(x386|x387))^x388);

	if (t96 != -64) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1080702866152LL;
	int16_t x390 = INT16_MAX;
	volatile int8_t x391 = INT8_MIN;
	static volatile int32_t x392 = INT32_MIN;
	volatile int64_t t97 = 810313985LL;

	t97 = ((x389^(x390|x391))^x392);

	if (t97 != -1081813167385LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -268;
	uint64_t x394 = UINT64_MAX;
	volatile int8_t x396 = -1;
	volatile uint64_t t98 = 301954LLU;

	t98 = ((x393^(x394|x395))^x396);

	if (t98 != 18446744073709551348LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x398 = 2067471439LLU;
	int64_t x399 = INT64_MAX;
	uint8_t x400 = UINT8_MAX;

	t99 = ((x397^(x398|x399))^x400);

	if (t99 != 9223372036854776063LLU) { NG(); } else { ; }
	
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

