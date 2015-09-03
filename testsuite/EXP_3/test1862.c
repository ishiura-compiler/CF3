#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -1;
int16_t x14 = INT16_MIN;
uint32_t x21 = UINT32_MAX;
int32_t x24 = 449;
uint32_t t4 = 560U;
int32_t x27 = INT32_MIN;
static uint64_t x32 = UINT64_MAX;
uint64_t t6 = 134684307677LLU;
uint64_t x33 = 1833527704884LLU;
int16_t x42 = -1;
int16_t x44 = INT16_MIN;
int32_t x59 = INT32_MAX;
int16_t x61 = 3;
int32_t x104 = -1;
uint32_t x111 = UINT32_MAX;
uint32_t t18 = 274444911U;
int8_t x119 = INT8_MIN;
volatile uint32_t t20 = 3U;
static int32_t x130 = -1;
int16_t x136 = INT16_MIN;
int64_t x141 = INT64_MAX;
static int8_t x154 = INT8_MIN;
uint16_t x161 = 2U;
static uint8_t x177 = 0U;
volatile uint16_t x182 = UINT16_MAX;
static int16_t x183 = INT16_MIN;
int8_t x184 = INT8_MIN;
uint32_t x189 = 635123496U;
int8_t x191 = 27;
volatile int64_t x197 = -1LL;
uint8_t x202 = UINT8_MAX;
int32_t x209 = -1991;
volatile uint64_t x213 = 54302624829578726LLU;
static int16_t x215 = INT16_MIN;
volatile uint64_t x216 = UINT64_MAX;
int8_t x220 = -1;
int64_t x230 = 8682LL;
volatile uint16_t x231 = 1959U;
int32_t x237 = 1;
int64_t x240 = INT64_MAX;
volatile uint64_t t41 = 14712872786476613LLU;
volatile int16_t x241 = INT16_MAX;
int16_t x242 = 1;
volatile uint8_t x247 = UINT8_MAX;
static uint16_t x281 = UINT16_MAX;
int64_t t48 = 79624016517011LL;
static volatile int32_t x286 = INT32_MIN;
uint8_t x294 = 1U;
static volatile int32_t t51 = -676152;
int64_t x307 = INT64_MIN;
int8_t x309 = INT8_MAX;
volatile uint32_t t54 = 328220U;
static uint64_t x346 = 3679414LLU;
int32_t x349 = -1;
int8_t x350 = INT8_MAX;
static int8_t x352 = INT8_MIN;
static uint8_t x360 = UINT8_MAX;
volatile int32_t t61 = -461917;
volatile int8_t x364 = 2;
volatile uint64_t x370 = UINT64_MAX;
static volatile int16_t x392 = INT16_MIN;
int32_t t67 = -2199;
int16_t x403 = 8915;
static int16_t x405 = INT16_MAX;
static int64_t x407 = INT64_MIN;
int32_t x408 = INT32_MIN;
int8_t x416 = -1;
volatile int64_t t70 = -19649749LL;
volatile int8_t x417 = INT8_MIN;
static uint32_t t71 = 26441750U;
uint8_t x429 = 13U;
int8_t x439 = INT8_MIN;
static int8_t x441 = INT8_MIN;
static int64_t x450 = -50245LL;
static int16_t x467 = -11;
uint16_t x478 = 1U;
volatile int8_t x491 = -1;
uint64_t t85 = 107945396730256350LLU;
int8_t x493 = INT8_MIN;
int64_t x499 = INT64_MIN;
volatile int64_t t87 = -73252387521354LL;
uint8_t x506 = 54U;
volatile int8_t x507 = -18;
int8_t x509 = -1;
int16_t x512 = INT16_MAX;
uint64_t t91 = 474196793090074LLU;
uint16_t x517 = 6623U;
uint64_t x518 = 1203925417940LLU;
uint64_t x531 = 413599365272LLU;
volatile uint64_t t95 = 34669058737186LLU;
static uint32_t x538 = UINT32_MAX;
int64_t x541 = INT64_MIN;
int32_t x543 = INT32_MAX;
int16_t x549 = INT16_MIN;
int8_t x552 = INT8_MIN;
static volatile uint64_t t98 = 255502893527971366LLU;
uint64_t x556 = UINT64_MAX;


void f0(void) {
	uint16_t x5 = UINT16_MAX;
	static int32_t x6 = INT32_MIN;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = -13;
	uint32_t t0 = 107029799U;

	t0 = ((x5+x6)*(x7|x8));

	if (t0 != 2147418113U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x9 = UINT16_MAX;
	int8_t x11 = INT8_MAX;
	int64_t x12 = 1016LL;
	static int64_t t1 = 138LL;

	t1 = ((x9+x10)*(x11|x12));

	if (t1 != 67041282LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	uint8_t x15 = UINT8_MAX;
	static volatile uint32_t x16 = UINT32_MAX;
	static volatile uint64_t t2 = 669766LLU;

	t2 = ((x13+x14)*(x15|x16));

	if (t2 != 18446603331926261761LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = 0LL;
	int64_t x18 = -1LL;
	static volatile int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	int64_t t3 = 12988983883231354LL;

	t3 = ((x17+x18)*(x19|x20));

	if (t3 != 32768LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MIN;
	volatile int8_t x23 = 26;

	t4 = ((x21+x22)*(x23|x24));

	if (t4 != 2147483173U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 0LL;
	int32_t x26 = -1;
	int8_t x28 = INT8_MIN;
	int64_t t5 = 2748082003231LL;

	t5 = ((x25+x26)*(x27|x28));

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -720669715161478LL;
	uint8_t x30 = 19U;
	volatile int8_t x31 = -4;

	t6 = ((x29+x30)*(x31|x32));

	if (t6 != 720669715161459LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = INT64_MIN;
	uint64_t x35 = 177004579004LLU;
	uint32_t x36 = UINT32_MAX;
	uint64_t t7 = 107340397571LLU;

	t7 = ((x33+x34)*(x35|x36));

	if (t7 != 6646337633284489932LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 88U;
	static uint16_t x38 = 0U;
	uint32_t x39 = 517U;
	int64_t x40 = 61LL;
	volatile int64_t t8 = -3LL;

	t8 = ((x37+x38)*(x39|x40));

	if (t8 != 50424LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int16_t x43 = 1749;
	int32_t t9 = -35;

	t9 = ((x41+x42)*(x43|x44));

	if (t9 != 62038) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x49 = INT8_MIN;
	uint32_t x50 = 364777U;
	static int32_t x51 = -1;
	int32_t x52 = INT32_MAX;
	volatile uint32_t t10 = 777506166U;

	t10 = ((x49+x50)*(x51|x52));

	if (t10 != 4294602647U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x57 = 3309U;
	volatile int16_t x58 = INT16_MIN;
	static uint16_t x60 = UINT16_MAX;
	uint32_t t11 = 5208340U;

	t11 = ((x57+x58)*(x59|x60));

	if (t11 != 2147513107U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = UINT64_MAX;
	uint32_t x63 = UINT32_MAX;
	int64_t x64 = 537205478673573427LL;
	volatile uint64_t t12 = 221266LLU;

	t12 = ((x61+x62)*(x63|x64));

	if (t12 != 1074410962724847614LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x77 = 18U;
	static uint16_t x78 = 2U;
	static int16_t x79 = -10;
	int8_t x80 = INT8_MIN;
	static int32_t t13 = 2235165;

	t13 = ((x77+x78)*(x79|x80));

	if (t13 != -200) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x81 = 16920247LL;
	static int64_t x82 = -1LL;
	uint32_t x83 = 169U;
	volatile int16_t x84 = INT16_MIN;
	static volatile int64_t t14 = 507LL;

	t14 = ((x81+x82)*(x83|x84));

	if (t14 != 72671351627175462LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 2U;
	static int16_t x86 = INT16_MIN;
	uint32_t x87 = UINT32_MAX;
	static int16_t x88 = 133;
	static volatile uint32_t t15 = 194066503U;

	t15 = ((x85+x86)*(x87|x88));

	if (t15 != 32766U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 398854U;
	static int32_t x90 = 0;
	volatile int64_t x91 = -74957970LL;
	uint8_t x92 = 1U;
	int64_t t16 = -113739562LL;

	t16 = ((x89+x90)*(x91|x92));

	if (t16 != -29897285767526LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x101 = 3881165162674727LLU;
	uint32_t x102 = UINT32_MAX;
	uint64_t x103 = 1653175667LLU;
	volatile uint64_t t17 = 7222849771690LLU;

	t17 = ((x101+x102)*(x103|x104));

	if (t17 != 18442862904251909594LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x109 = INT16_MIN;
	int8_t x110 = INT8_MAX;
	static int8_t x112 = INT8_MIN;

	t18 = ((x109+x110)*(x111|x112));

	if (t18 != 32641U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x113 = INT8_MAX;
	int32_t x114 = -1;
	int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t19 = 95602;

	t19 = ((x113+x114)*(x115|x116));

	if (t19 != -126) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = INT32_MAX;
	uint32_t x118 = UINT32_MAX;
	int16_t x120 = 1128;

	t20 = ((x117+x118)*(x119|x120));

	if (t20 != 48U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	int8_t x123 = -1;
	int16_t x124 = -1;
	int32_t t21 = 34725370;

	t21 = ((x121+x122)*(x123|x124));

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x129 = 5443472596901LL;
	int64_t x131 = INT64_MIN;
	int8_t x132 = -1;
	int64_t t22 = 7693LL;

	t22 = ((x129+x130)*(x131|x132));

	if (t22 != -5443472596900LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x133 = -815LL;
	volatile int32_t x134 = INT32_MIN;
	int64_t x135 = -21LL;
	volatile int64_t t23 = -14LL;

	t23 = ((x133+x134)*(x135|x136));

	if (t23 != 45097173723LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x137 = INT16_MAX;
	uint32_t x138 = UINT32_MAX;
	int64_t x139 = -21044094104281LL;
	static int16_t x140 = 0;
	int64_t t24 = 1LL;

	t24 = ((x137+x138)*(x139|x140));

	if (t24 != -689530787420871246LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x142 = -1LL;
	int16_t x143 = -1;
	volatile int32_t x144 = INT32_MIN;
	int64_t t25 = 451644LL;

	t25 = ((x141+x142)*(x143|x144));

	if (t25 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = -1;
	uint8_t x146 = 3U;
	int8_t x147 = INT8_MAX;
	static uint8_t x148 = 1U;
	volatile int32_t t26 = -7;

	t26 = ((x145+x146)*(x147|x148));

	if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x153 = 7566790LLU;
	int8_t x155 = INT8_MIN;
	int64_t x156 = -1LL;
	uint64_t t27 = 112553LLU;

	t27 = ((x153+x154)*(x155|x156));

	if (t27 != 18446744073701984954LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x157 = -622224320;
	uint64_t x158 = 696106610861662034LLU;
	uint64_t x159 = UINT64_MAX;
	static int8_t x160 = INT8_MIN;
	uint64_t t28 = 492707LLU;

	t28 = ((x157+x158)*(x159|x160));

	if (t28 != 17750637463470113902LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x162 = 0U;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = 1719806316U;
	static volatile uint32_t t29 = 2430732U;

	t29 = ((x161+x162)*(x163|x164));

	if (t29 != 3439612632U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x165 = 1059935203U;
	int16_t x166 = -2;
	int8_t x167 = -28;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t30 = 8055742LLU;

	t30 = ((x165+x166)*(x167|x168));

	if (t30 != 18446744072649616415LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x178 = INT64_MIN;
	static uint64_t x179 = 67289566186LLU;
	int16_t x180 = INT16_MIN;
	uint64_t t31 = 247LLU;

	t31 = ((x177+x178)*(x179|x180));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = INT16_MAX;
	volatile int32_t t32 = -23745;

	t32 = ((x181+x182)*(x183|x184));

	if (t32 != -12582656) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x190 = INT8_MIN;
	int8_t x192 = INT8_MAX;
	volatile uint32_t t33 = 23234U;

	t33 = ((x189+x190)*(x191|x192));

	if (t33 != 3351256408U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x198 = 785382U;
	static int64_t x199 = INT64_MIN;
	int16_t x200 = -1;
	static volatile int64_t t34 = 483596LL;

	t34 = ((x197+x198)*(x199|x200));

	if (t34 != -785381LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 7U;
	int32_t t35 = -1391159;

	t35 = ((x201+x202)*(x203|x204));

	if (t35 != 3934073) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x210 = 1U;
	volatile int16_t x211 = -1;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t36 = -61;

	t36 = ((x209+x210)*(x211|x212));

	if (t36 != 1990) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x214 = INT32_MIN;
	uint64_t t37 = 60129876LLU;

	t37 = ((x213+x214)*(x215|x216));

	if (t37 != 18392441451027456538LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x217 = 0;
	static uint64_t x218 = UINT64_MAX;
	static int32_t x219 = -295730378;
	volatile uint64_t t38 = 96364432791668LLU;

	t38 = ((x217+x218)*(x219|x220));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x225 = INT16_MIN;
	static int16_t x226 = -15;
	int32_t x227 = -1;
	volatile int64_t x228 = -187133490252155LL;
	int64_t t39 = -2300966LL;

	t39 = ((x225+x226)*(x227|x228));

	if (t39 != 32783LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x229 = 0;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t40 = 183LLU;

	t40 = ((x229+x230)*(x231|x232));

	if (t40 != 18446744073709542934LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x238 = 16928754;
	volatile uint64_t x239 = 390878LLU;

	t41 = ((x237+x238)*(x239|x240));

	if (t41 != 9223372036837847053LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x243 = -1LL;
	int32_t x244 = INT32_MAX;
	volatile int64_t t42 = -796250920LL;

	t42 = ((x241+x242)*(x243|x244));

	if (t42 != -32768LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x245 = -1;
	volatile int8_t x246 = INT8_MIN;
	volatile int16_t x248 = INT16_MIN;
	int32_t t43 = 0;

	t43 = ((x245+x246)*(x247|x248));

	if (t43 != 4194177) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x265 = 39U;
	static volatile uint16_t x266 = 7103U;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 1756U;
	volatile uint32_t t44 = 213U;

	t44 = ((x265+x266)*(x267|x268));

	if (t44 != 4073479592U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x269 = 689926758LLU;
	int16_t x270 = -93;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -40783LL;
	uint64_t t45 = 1963058LLU;

	t45 = ((x269+x270)*(x271|x272));

	if (t45 != 18446744019205345081LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x273 = UINT64_MAX;
	uint64_t x274 = 29082LLU;
	volatile uint32_t x275 = 3U;
	int8_t x276 = 0;
	volatile uint64_t t46 = 7LLU;

	t46 = ((x273+x274)*(x275|x276));

	if (t46 != 87243LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x277 = INT64_MIN;
	uint64_t x278 = 467700651047LLU;
	uint64_t x279 = 105LLU;
	int64_t x280 = INT64_MIN;
	static uint64_t t47 = 20LLU;

	t47 = ((x277+x278)*(x279|x280));

	if (t47 != 49108568359935LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x282 = 3U;
	uint16_t x283 = 582U;
	int64_t x284 = 5050582276515LL;

	t48 = ((x281+x282)*(x283|x284));

	if (t48 != 331005061276252110LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x285 = 19619794U;
	static int64_t x287 = INT64_MAX;
	int32_t x288 = INT32_MIN;
	int64_t t49 = -4820LL;

	t49 = ((x285+x286)*(x287|x288));

	if (t49 != -2167103442LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x289 = 5183U;
	int32_t x290 = 1;
	int16_t x291 = 0;
	static volatile int8_t x292 = 0;
	volatile int32_t t50 = -8609;

	t50 = ((x289+x290)*(x291|x292));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x293 = UINT16_MAX;
	int16_t x295 = INT16_MAX;
	static int8_t x296 = INT8_MIN;

	t51 = ((x293+x294)*(x295|x296));

	if (t51 != -65536) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x301 = -1;
	uint64_t x302 = 15204LLU;
	int8_t x303 = -13;
	int32_t x304 = -1;
	volatile uint64_t t52 = 19171318478LLU;

	t52 = ((x301+x302)*(x303|x304));

	if (t52 != 18446744073709536413LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x305 = 29720314051LLU;
	uint16_t x306 = 136U;
	int8_t x308 = 61;
	volatile uint64_t t53 = 416LLU;

	t53 = ((x305+x306)*(x307|x308));

	if (t53 != 9223373849793941215LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x310 = 419191U;
	static int16_t x311 = 15;
	static int32_t x312 = INT32_MIN;

	t54 = ((x309+x310)*(x311|x312));

	if (t54 != 6289770U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x313 = -1;
	uint8_t x314 = 19U;
	uint32_t x315 = 185U;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t55 = 210199608311LLU;

	t55 = ((x313+x314)*(x315|x316));

	if (t55 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x321 = 77U;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = 114U;
	static uint64_t x324 = UINT64_MAX;
	static volatile uint64_t t56 = 18151759LLU;

	t56 = ((x321+x322)*(x323|x324));

	if (t56 != 2147483571LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x333 = -80039495205LL;
	int32_t x334 = INT32_MIN;
	volatile uint64_t x335 = 1879LLU;
	static uint64_t x336 = 3LLU;
	uint64_t t57 = 2054LLU;

	t57 = ((x333+x334)*(x335|x336));

	if (t57 != 18446589644376286829LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x345 = -38141173;
	int64_t x347 = INT64_MIN;
	volatile int64_t x348 = INT64_MIN;
	volatile uint64_t t58 = 2787109643895215768LLU;

	t58 = ((x345+x346)*(x347|x348));

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x351 = 1986198U;
	volatile uint32_t t59 = 109595663U;

	t59 = ((x349+x350)*(x351|x352));

	if (t59 != 4294953940U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x353 = -1;
	uint32_t x354 = UINT32_MAX;
	uint16_t x355 = 3194U;
	int32_t x356 = 254184;
	uint32_t t60 = 42182541U;

	t60 = ((x353+x354)*(x355|x356));

	if (t60 != 4294452748U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x357 = INT16_MIN;
	uint16_t x358 = UINT16_MAX;
	static volatile uint8_t x359 = UINT8_MAX;

	t61 = ((x357+x358)*(x359|x360));

	if (t61 != 8355585) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	int32_t t62 = -1;

	t62 = ((x361+x362)*(x363|x364));

	if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x369 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	int64_t x372 = -1LL;
	uint64_t t63 = 10781095LLU;

	t63 = ((x369+x370)*(x371|x372));

	if (t63 != 32769LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x373 = INT8_MIN;
	uint8_t x374 = 5U;
	static uint16_t x375 = UINT16_MAX;
	static int16_t x376 = INT16_MIN;
	int32_t t64 = 449421;

	t64 = ((x373+x374)*(x375|x376));

	if (t64 != 123) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x381 = -1;
	uint32_t x382 = 1824514842U;
	static volatile int32_t x383 = 10078;
	int16_t x384 = 7216;
	volatile uint32_t t65 = 1928898403U;

	t65 = ((x381+x382)*(x383|x384));

	if (t65 != 3210014030U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x389 = INT8_MAX;
	volatile int64_t x390 = -1LL;
	static uint64_t x391 = UINT64_MAX;
	volatile uint64_t t66 = 14942588470LLU;

	t66 = ((x389+x390)*(x391|x392));

	if (t66 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x393 = 7U;
	int16_t x394 = -1;
	volatile int8_t x395 = 0;
	static int16_t x396 = 0;

	t67 = ((x393+x394)*(x395|x396));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x401 = -1;
	int32_t x402 = 8901757;
	int64_t x404 = -1LL;
	int64_t t68 = 24066LL;

	t68 = ((x401+x402)*(x403|x404));

	if (t68 != -8901756LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x406 = 2U;
	volatile int64_t t69 = 5LL;

	t69 = ((x405+x406)*(x407|x408));

	if (t69 != -70370891661312LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x413 = 37U;
	int64_t x414 = INT64_MIN;
	int32_t x415 = -1;

	t70 = ((x413+x414)*(x415|x416));

	if (t70 != 9223372036854775771LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x418 = 16U;
	int32_t x419 = INT32_MIN;
	int8_t x420 = INT8_MIN;

	t71 = ((x417+x418)*(x419|x420));

	if (t71 != 14336U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x421 = INT8_MIN;
	volatile int32_t x422 = 670624;
	static uint32_t x423 = 21038379U;
	uint64_t x424 = 32LLU;
	volatile uint64_t t72 = 231025400685249764LLU;

	t72 = ((x421+x422)*(x423|x424));

	if (t72 != 14106148965984LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x425 = -12;
	uint32_t x426 = 2342619U;
	int8_t x427 = -1;
	static int16_t x428 = INT16_MIN;
	static uint32_t t73 = 163175153U;

	t73 = ((x425+x426)*(x427|x428));

	if (t73 != 4292624689U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x430 = -7;
	int8_t x431 = 15;
	static int16_t x432 = INT16_MAX;
	volatile int32_t t74 = 9699857;

	t74 = ((x429+x430)*(x431|x432));

	if (t74 != 196602) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x433 = -491506252447LL;
	int64_t x434 = -1LL;
	static int16_t x435 = INT16_MIN;
	int16_t x436 = INT16_MIN;
	volatile int64_t t75 = 0LL;

	t75 = ((x433+x434)*(x435|x436));

	if (t75 != 16105676880216064LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x437 = -3436712LL;
	static int16_t x438 = -238;
	volatile int64_t x440 = INT64_MIN;
	volatile int64_t t76 = 63805LL;

	t76 = ((x437+x438)*(x439|x440));

	if (t76 != 439929600LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x442 = -1484;
	int16_t x443 = -1;
	static int64_t x444 = INT64_MAX;
	static int64_t t77 = -11711598583LL;

	t77 = ((x441+x442)*(x443|x444));

	if (t77 != 1612LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x445 = 9U;
	volatile uint32_t x446 = 210787691U;
	static volatile int32_t x447 = INT32_MIN;
	static uint32_t x448 = 223719832U;
	uint32_t t78 = 247275536U;

	t78 = ((x445+x446)*(x447|x448));

	if (t78 != 836284640U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x449 = 23032LL;
	volatile int8_t x451 = -1;
	uint32_t x452 = UINT32_MAX;
	volatile int64_t t79 = -792871430LL;

	t79 = ((x449+x450)*(x451|x452));

	if (t79 != -116878944998835LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x453 = UINT16_MAX;
	int32_t x454 = INT32_MIN;
	int16_t x455 = -1;
	int16_t x456 = 2617;
	int32_t t80 = -59;

	t80 = ((x453+x454)*(x455|x456));

	if (t80 != 2147418113) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x457 = -1;
	volatile int8_t x458 = 4;
	static uint64_t x459 = UINT64_MAX;
	static int16_t x460 = INT16_MIN;
	volatile uint64_t t81 = 18882860LLU;

	t81 = ((x457+x458)*(x459|x460));

	if (t81 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x461 = 622U;
	uint64_t x462 = 628058476856418927LLU;
	static int64_t x463 = INT64_MIN;
	static int32_t x464 = -1262883;
	volatile uint64_t t82 = 742407084955LLU;

	t82 = ((x461+x462)*(x463|x464));

	if (t82 != 8728253497611085001LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x465 = UINT64_MAX;
	volatile int64_t x466 = INT64_MAX;
	int32_t x468 = INT32_MAX;
	uint64_t t83 = 4842LLU;

	t83 = ((x465+x466)*(x467|x468));

	if (t83 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x477 = INT16_MIN;
	int16_t x479 = INT16_MAX;
	int8_t x480 = 18;
	int32_t t84 = 47577671;

	t84 = ((x477+x478)*(x479|x480));

	if (t84 != -1073676289) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x489 = 49753885764861LLU;
	uint16_t x490 = 5U;
	int64_t x492 = INT64_MIN;

	t85 = ((x489+x490)*(x491|x492));

	if (t85 != 18446694319823786750LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x494 = -1;
	int32_t x495 = INT32_MIN;
	static volatile int64_t x496 = INT64_MAX;
	volatile int64_t t86 = -7546934326LL;

	t86 = ((x493+x494)*(x495|x496));

	if (t86 != 129LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x497 = 35;
	int32_t x498 = 764348757;
	volatile int64_t x500 = -1LL;

	t87 = ((x497+x498)*(x499|x500));

	if (t87 != -764348792LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x501 = UINT16_MAX;
	static uint32_t x502 = 513725U;
	volatile int64_t x503 = -1LL;
	uint16_t x504 = 13U;
	int64_t t88 = -136LL;

	t88 = ((x501+x502)*(x503|x504));

	if (t88 != -579260LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x505 = -3;
	uint16_t x508 = 882U;
	int32_t t89 = -12;

	t89 = ((x505+x506)*(x507|x508));

	if (t89 != -102) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x510 = 13758297U;
	int32_t x511 = INT32_MAX;
	uint32_t t90 = 12886U;

	t90 = ((x509+x510)*(x511|x512));

	if (t90 != 4281209000U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x513 = 0U;
	uint64_t x514 = 339069378145865LLU;
	uint8_t x515 = 1U;
	uint8_t x516 = 2U;

	t91 = ((x513+x514)*(x515|x516));

	if (t91 != 1017208134437595LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x519 = 113765U;
	int64_t x520 = -1LL;
	volatile uint64_t t92 = 6068490591136LLU;

	t92 = ((x517+x518)*(x519|x520));

	if (t92 != 18446742869784127053LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x525 = 41;
	uint16_t x526 = UINT16_MAX;
	volatile uint16_t x527 = 262U;
	int8_t x528 = -1;
	volatile int32_t t93 = -3;

	t93 = ((x525+x526)*(x527|x528));

	if (t93 != -65576) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x529 = -1;
	int8_t x530 = -2;
	uint64_t x532 = 195709483LLU;
	static uint64_t t94 = 393520789779414LLU;

	t94 = ((x529+x530)*(x531|x532));

	if (t94 != 18446742832733327311LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x533 = 3923;
	uint64_t x534 = UINT64_MAX;
	static int32_t x535 = INT32_MIN;
	int32_t x536 = INT32_MAX;

	t95 = ((x533+x534)*(x535|x536));

	if (t95 != 18446744073709547694LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x537 = INT32_MIN;
	uint32_t x539 = 18477U;
	uint32_t x540 = UINT32_MAX;
	uint32_t t96 = 0U;

	t96 = ((x537+x538)*(x539|x540));

	if (t96 != 2147483649U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x542 = INT64_MAX;
	int32_t x544 = -1;
	int64_t t97 = 784LL;

	t97 = ((x541+x542)*(x543|x544));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x550 = -16182;
	uint64_t x551 = UINT64_MAX;

	t98 = ((x549+x550)*(x551|x552));

	if (t98 != 48950LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x553 = INT8_MIN;
	uint64_t x554 = 926060604547654LLU;
	static int64_t x555 = INT64_MIN;
	uint64_t t99 = 41627605917LLU;

	t99 = ((x553+x554)*(x555|x556));

	if (t99 != 18445818013105004090LLU) { NG(); } else { ; }
	
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

