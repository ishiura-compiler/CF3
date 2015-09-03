#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MIN;
static volatile int32_t x3 = 1659;
static int16_t x11 = INT16_MIN;
volatile uint8_t x12 = UINT8_MAX;
int64_t x13 = -16189LL;
volatile uint16_t x14 = 6071U;
uint8_t x23 = 40U;
uint64_t t7 = 9950558066430LLU;
int8_t x37 = INT8_MAX;
int64_t x39 = -6628600448840161LL;
int64_t x55 = INT64_MIN;
int16_t x58 = 1;
static uint32_t x60 = UINT32_MAX;
int32_t x61 = INT32_MIN;
uint16_t x63 = UINT16_MAX;
volatile int8_t x64 = -1;
uint64_t t16 = 45750LLU;
uint32_t x94 = 13U;
int32_t x108 = 83;
uint8_t x110 = UINT8_MAX;
uint8_t x111 = 9U;
uint64_t t20 = 6372245073366529LLU;
uint8_t x125 = 1U;
uint32_t x127 = 56U;
uint32_t t24 = 13U;
uint8_t x148 = UINT8_MAX;
int32_t x158 = 14709;
int32_t x160 = INT32_MIN;
uint8_t x161 = UINT8_MAX;
static uint16_t x163 = 10U;
uint16_t x165 = 15U;
uint64_t x166 = UINT64_MAX;
static uint16_t x179 = 3214U;
static int32_t x180 = -1;
int8_t x183 = INT8_MIN;
int8_t x185 = -1;
volatile int16_t x191 = INT16_MAX;
uint32_t x192 = 30U;
int64_t x197 = -1LL;
static volatile int32_t x199 = -198859416;
int16_t x201 = INT16_MIN;
static uint64_t t40 = 1LLU;
int32_t x210 = INT32_MIN;
uint64_t x217 = 3405076LLU;
uint64_t x226 = 1018LLU;
uint64_t t43 = 979566067302LLU;
int8_t x234 = 59;
int64_t t46 = INT64_MIN;
uint16_t x247 = UINT16_MAX;
int8_t x248 = INT8_MIN;
int64_t x251 = INT64_MIN;
volatile int64_t t48 = 984LL;
static uint32_t x257 = UINT32_MAX;
int32_t x258 = INT32_MIN;
volatile uint32_t t49 = 2247745U;
int16_t x276 = INT16_MIN;
int8_t x278 = -4;
int8_t x288 = -1;
uint64_t x301 = 5577040703134337LLU;
volatile uint64_t t55 = UINT64_MAX;
int32_t x311 = INT32_MAX;
static uint64_t t56 = 7527262013LLU;
int64_t t59 = 1065241764803LL;
static volatile int32_t x330 = -5672493;
uint32_t x331 = 25U;
static volatile uint32_t t60 = 440130410U;
int64_t x335 = -7176470294628130LL;
volatile int8_t x337 = INT8_MAX;
static uint8_t x343 = 1U;
int16_t x344 = -1;
int32_t x345 = INT32_MIN;
static int32_t x348 = INT32_MIN;
uint32_t t64 = 2799U;
int8_t x349 = -2;
volatile int32_t t67 = -138;
int32_t x372 = -1;
volatile uint32_t x374 = 9148U;
int8_t x385 = -1;
int64_t x396 = INT64_MAX;
uint16_t x412 = UINT16_MAX;
int16_t x421 = 3;
int8_t x423 = INT8_MIN;
uint8_t x424 = 14U;
uint8_t x426 = UINT8_MAX;
int32_t t78 = 14932369;
int32_t x429 = -261;
int32_t x432 = 1023131;
static uint32_t x433 = 999408U;
volatile uint64_t t80 = 7691578LLU;
static uint16_t x449 = 1U;
static uint16_t x469 = 0U;
uint64_t x471 = UINT64_MAX;
uint64_t t84 = 95827447LLU;
volatile uint8_t x473 = 4U;
static uint32_t x476 = 198812291U;
static uint64_t t86 = 985668LLU;
volatile int64_t x495 = INT64_MIN;
int64_t t88 = -610064LL;
int8_t x500 = -3;
int32_t t89 = 7043;
int64_t x501 = -1LL;
int8_t x508 = 0;
uint64_t t91 = 22503913449994869LLU;
uint16_t x514 = 93U;
static volatile uint32_t t92 = UINT32_MAX;
uint8_t x517 = 0U;
volatile uint64_t t93 = UINT64_MAX;
int32_t x528 = INT32_MAX;
static int16_t x537 = INT16_MIN;
static uint16_t x538 = 21U;
int8_t x540 = INT8_MAX;
int16_t x541 = 1;
int16_t x542 = INT16_MIN;


void f0(void) {
	int64_t x1 = 2815LL;
	static uint8_t x4 = UINT8_MAX;
	volatile int64_t t0 = 4395869509LL;

	t0 = (((x1*x2)/x3)+x4);

	if (t0 != -55345LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	volatile uint64_t x6 = UINT64_MAX;
	int16_t x7 = -1;
	uint16_t x8 = 8U;
	uint64_t t1 = 1633786712838089LLU;

	t1 = (((x5*x6)/x7)+x8);

	if (t1 != 8LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static int64_t x10 = INT64_MAX;
	volatile int64_t t2 = -580716153LL;

	t2 = (((x9*x10)/x11)+x12);

	if (t2 != 281474976710910LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = INT32_MAX;
	uint8_t x16 = 22U;
	int64_t t3 = -152LL;

	t3 = (((x13*x14)/x15)+x16);

	if (t3 != 22LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static int16_t x18 = -3831;
	uint16_t x19 = UINT16_MAX;
	uint32_t x20 = 474980132U;
	volatile uint32_t t4 = 65889659U;

	t4 = (((x17*x18)/x19)+x20);

	if (t4 != 474976301U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 1U;
	uint32_t x22 = 530917751U;
	int16_t x24 = -1;
	static volatile uint32_t t5 = 7U;

	t5 = (((x21*x22)/x23)+x24);

	if (t5 != 13272942U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x26 = INT64_MAX;
	int64_t x27 = -124964495874232LL;
	int8_t x28 = 1;
	volatile int64_t t6 = -283435240722LL;

	t6 = (((x25*x26)/x27)+x28);

	if (t6 != 73808LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 104U;
	uint64_t x30 = UINT64_MAX;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 8U;

	t7 = (((x29*x30)/x31)+x32);

	if (t7 != 9LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x38 = 11185U;
	int8_t x40 = 14;
	volatile int64_t t8 = -16231553195313418LL;

	t8 = (((x37*x38)/x39)+x40);

	if (t8 != 14LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = -30143934LL;
	uint32_t x47 = 1799146U;
	int64_t x48 = INT64_MAX;
	volatile uint64_t t9 = 77638856688815534LLU;

	t9 = (((x45*x46)/x47)+x48);

	if (t9 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = -2;
	int8_t x54 = 1;
	int32_t x56 = INT32_MAX;
	int64_t t10 = -14521802225506LL;

	t10 = (((x53*x54)/x55)+x56);

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = 10121LLU;
	int32_t x59 = INT32_MIN;
	static uint64_t t11 = 19LLU;

	t11 = (((x57*x58)/x59)+x60);

	if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = UINT64_MAX;
	volatile uint64_t t12 = 3594684LLU;

	t12 = (((x61*x62)/x63)+x64);

	if (t12 != 32767LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x73 = UINT8_MAX;
	int16_t x74 = INT16_MIN;
	static uint32_t x75 = 19U;
	volatile int8_t x76 = INT8_MAX;
	volatile uint32_t t13 = 6725236U;

	t13 = (((x73*x74)/x75)+x76);

	if (t13 != 225611256U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MAX;
	int16_t x83 = -1;
	uint8_t x84 = 34U;
	int32_t t14 = 2923;

	t14 = (((x81*x82)/x83)+x84);

	if (t14 != 16290) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = 8;
	volatile uint16_t x86 = 24416U;
	int16_t x87 = 428;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t15 = -945;

	t15 = (((x85*x86)/x87)+x88);

	if (t15 != 711) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x89 = -1;
	static int64_t x90 = 3898463368329LL;
	uint64_t x91 = UINT64_MAX;
	int64_t x92 = 24166LL;

	t16 = (((x89*x90)/x91)+x92);

	if (t16 != 24166LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -6718;
	volatile uint16_t x95 = UINT16_MAX;
	uint16_t x96 = 18U;
	static volatile uint32_t t17 = 81U;

	t17 = (((x93*x94)/x95)+x96);

	if (t17 != 65553U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = 50355029031LLU;
	uint16_t x98 = UINT16_MAX;
	static int64_t x99 = -1LL;
	uint32_t x100 = 66007U;
	volatile uint64_t t18 = 2LLU;

	t18 = (((x97*x98)/x99)+x100);

	if (t18 != 66007LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x105 = 6042217LLU;
	static int8_t x106 = 9;
	volatile int8_t x107 = INT8_MAX;
	static volatile uint64_t t19 = 3948939440384647495LLU;

	t19 = (((x105*x106)/x107)+x108);

	if (t19 != 428271LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x109 = UINT8_MAX;
	static uint64_t x112 = 41760352299LLU;

	t20 = (((x109*x110)/x111)+x112);

	if (t20 != 41760359524LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MAX;
	uint32_t x114 = 24U;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = 3519572698553804098LL;
	uint64_t t21 = 6878683228424098393LLU;

	t21 = (((x113*x114)/x115)+x116);

	if (t21 != 3519572698553804098LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = INT16_MAX;
	static uint16_t x118 = 209U;
	uint8_t x119 = 3U;
	volatile int32_t x120 = INT32_MIN;
	volatile int32_t t22 = -792;

	t22 = (((x117*x118)/x119)+x120);

	if (t22 != -2145200881) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MIN;
	uint8_t x122 = 6U;
	int16_t x123 = -103;
	int32_t x124 = -1586997;
	int32_t t23 = -90809874;

	t23 = (((x121*x122)/x123)+x124);

	if (t23 != -1586990) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x126 = INT16_MIN;
	int8_t x128 = INT8_MIN;

	t24 = (((x125*x126)/x127)+x128);

	if (t24 != 76695131U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = 9LLU;
	static int8_t x130 = -9;
	volatile int64_t x131 = -1LL;
	static int64_t x132 = INT64_MIN;
	volatile uint64_t t25 = 33LLU;

	t25 = (((x129*x130)/x131)+x132);

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MIN;
	static int8_t x134 = -1;
	int64_t x135 = 2908762LL;
	int64_t x136 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (((x133*x134)/x135)+x136);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = 193263LLU;
	int64_t x138 = -3844LL;
	int64_t x139 = INT64_MAX;
	volatile int64_t x140 = INT64_MIN;
	uint64_t t27 = 4092758791501932LLU;

	t27 = (((x137*x138)/x139)+x140);

	if (t27 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = 1;
	int8_t x146 = 0;
	static int8_t x147 = INT8_MIN;
	int32_t t28 = -76428;

	t28 = (((x145*x146)/x147)+x148);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x153 = -1;
	int16_t x154 = -1;
	int8_t x155 = INT8_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t29 = INT32_MIN;

	t29 = (((x153*x154)/x155)+x156);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x157 = -1LL;
	volatile int64_t x159 = 501986LL;
	int64_t t30 = -14LL;

	t30 = (((x157*x158)/x159)+x160);

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x162 = UINT64_MAX;
	volatile uint32_t x164 = 141213U;
	uint64_t t31 = 53185104989869LLU;

	t31 = (((x161*x162)/x163)+x164);

	if (t31 != 1844674407371096349LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x167 = -1;
	int32_t x168 = INT32_MAX;
	uint64_t t32 = 4271269202867LLU;

	t32 = (((x165*x166)/x167)+x168);

	if (t32 != 2147483647LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 3U;
	int32_t x170 = -1;
	volatile int8_t x171 = 22;
	int16_t x172 = INT16_MIN;
	static int32_t t33 = -21904;

	t33 = (((x169*x170)/x171)+x172);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = INT8_MIN;
	static int8_t x174 = -1;
	volatile int16_t x175 = -4;
	static int64_t x176 = INT64_MAX;
	volatile int64_t t34 = 390697910139441937LL;

	t34 = (((x173*x174)/x175)+x176);

	if (t34 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x177 = 0;
	static int16_t x178 = INT16_MIN;
	int32_t t35 = 6170418;

	t35 = (((x177*x178)/x179)+x180);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = 5511U;
	int64_t x182 = -1LL;
	int16_t x184 = -1;
	int64_t t36 = -324895066411LL;

	t36 = (((x181*x182)/x183)+x184);

	if (t36 != 42LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x186 = -1;
	uint16_t x187 = 485U;
	volatile int32_t x188 = INT32_MAX;
	int32_t t37 = INT32_MAX;

	t37 = (((x185*x186)/x187)+x188);

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x189 = 53;
	static int8_t x190 = INT8_MIN;
	volatile uint32_t t38 = 4810U;

	t38 = (((x189*x190)/x191)+x192);

	if (t38 != 30U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x198 = UINT8_MAX;
	int16_t x200 = -1;
	int64_t t39 = -51291205217LL;

	t39 = (((x197*x198)/x199)+x200);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x202 = 1LLU;
	static volatile int16_t x203 = -2;
	int8_t x204 = INT8_MIN;

	t40 = (((x201*x202)/x203)+x204);

	if (t40 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x209 = -46512883LL;
	uint16_t x211 = 46U;
	int16_t x212 = INT16_MIN;
	volatile int64_t t41 = -2059089916846556964LL;

	t41 = (((x209*x210)/x211)+x212);

	if (t41 != 2171427297007170LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x218 = 39;
	volatile uint32_t x219 = UINT32_MAX;
	int64_t x220 = -23846973016759165LL;
	uint64_t t42 = 10LLU;

	t42 = (((x217*x218)/x219)+x220);

	if (t42 != 18422897100692792451LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x225 = INT32_MAX;
	static int16_t x227 = INT16_MAX;
	int16_t x228 = INT16_MIN;

	t43 = (((x225*x226)/x227)+x228);

	if (t43 != 66684916LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = -1LL;
	volatile int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 5U;
	volatile int64_t t44 = -178LL;

	t44 = (((x229*x230)/x231)+x232);

	if (t44 != 4LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x233 = INT16_MIN;
	volatile int8_t x235 = -1;
	volatile uint64_t x236 = 477LLU;
	static volatile uint64_t t45 = 1800935LLU;

	t45 = (((x233*x234)/x235)+x236);

	if (t45 != 1933789LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x237 = UINT32_MAX;
	volatile int8_t x238 = -1;
	volatile uint16_t x239 = 1431U;
	static volatile int64_t x240 = INT64_MIN;

	t46 = (((x237*x238)/x239)+x240);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x245 = 402717301171461205LLU;
	uint64_t x246 = 2057394LLU;
	uint64_t t47 = 477113LLU;

	t47 = (((x245*x246)/x247)+x248);

	if (t47 != 193012217787978LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x249 = -1;
	int32_t x250 = INT32_MAX;
	int16_t x252 = INT16_MIN;

	t48 = (((x249*x250)/x251)+x252);

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x259 = UINT16_MAX;
	int32_t x260 = -1;

	t49 = (((x257*x258)/x259)+x260);

	if (t49 != 32767U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x261 = 16180299U;
	int32_t x262 = INT32_MAX;
	uint64_t x263 = UINT64_MAX;
	int64_t x264 = 438LL;
	volatile uint64_t t50 = 2057LLU;

	t50 = (((x261*x262)/x263)+x264);

	if (t50 != 438LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x273 = INT64_MAX;
	static int8_t x274 = -1;
	int64_t x275 = INT64_MAX;
	volatile int64_t t51 = -1090136LL;

	t51 = (((x273*x274)/x275)+x276);

	if (t51 != -32769LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x277 = INT8_MIN;
	uint8_t x279 = 4U;
	int8_t x280 = INT8_MIN;
	int32_t t52 = 173224300;

	t52 = (((x277*x278)/x279)+x280);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = INT32_MAX;
	int64_t x286 = -13779730LL;
	static int8_t x287 = -1;
	volatile int64_t t53 = 41LL;

	t53 = (((x285*x286)/x287)+x288);

	if (t53 != 29591744835075309LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x302 = -32;
	static int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MAX;
	uint64_t t54 = 4468689334670512589LLU;

	t54 = (((x301*x302)/x303)+x304);

	if (t54 != 128LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x305 = 6U;
	int8_t x306 = -1;
	static int64_t x307 = -3416961881LL;
	uint64_t x308 = UINT64_MAX;

	t55 = (((x305*x306)/x307)+x308);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x309 = INT8_MIN;
	volatile uint8_t x310 = 1U;
	uint64_t x312 = 34155223926840088LLU;

	t56 = (((x309*x310)/x311)+x312);

	if (t56 != 34155223926840088LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x317 = -7;
	int8_t x318 = -1;
	uint16_t x319 = 3U;
	uint32_t x320 = 39441U;
	uint32_t t57 = 8U;

	t57 = (((x317*x318)/x319)+x320);

	if (t57 != 39443U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x321 = 2LLU;
	uint32_t x322 = UINT32_MAX;
	int32_t x323 = INT32_MIN;
	volatile int32_t x324 = -1;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x321*x322)/x323)+x324);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x325 = -1LL;
	static uint16_t x326 = 12U;
	int16_t x327 = -1;
	int16_t x328 = INT16_MIN;

	t59 = (((x325*x326)/x327)+x328);

	if (t59 != -32756LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x329 = -1;
	volatile uint16_t x332 = 16119U;

	t60 = (((x329*x330)/x331)+x332);

	if (t60 != 243018U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x333 = INT16_MIN;
	volatile int64_t x334 = -939LL;
	int64_t x336 = -283LL;
	volatile int64_t t61 = 38142182930LL;

	t61 = (((x333*x334)/x335)+x336);

	if (t61 != -283LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x338 = -395;
	int16_t x339 = 198;
	uint16_t x340 = 7602U;
	int32_t t62 = 1248860;

	t62 = (((x337*x338)/x339)+x340);

	if (t62 != 7349) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x341 = -51;
	int16_t x342 = -1;
	volatile int32_t t63 = -14594;

	t63 = (((x341*x342)/x343)+x344);

	if (t63 != 50) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x346 = 340050U;
	uint8_t x347 = 4U;

	t64 = (((x345*x346)/x347)+x348);

	if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x350 = INT16_MAX;
	uint8_t x351 = 7U;
	uint64_t x352 = UINT64_MAX;
	uint64_t t65 = 4384767112280LLU;

	t65 = (((x349*x350)/x351)+x352);

	if (t65 != 18446744073709542253LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x353 = INT8_MIN;
	static int16_t x354 = -1;
	static int64_t x355 = -1LL;
	int8_t x356 = -4;
	volatile int64_t t66 = 11668048LL;

	t66 = (((x353*x354)/x355)+x356);

	if (t66 != -132LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x361 = -2451;
	int16_t x362 = -1;
	uint8_t x363 = 1U;
	volatile int8_t x364 = -1;

	t67 = (((x361*x362)/x363)+x364);

	if (t67 != 2450) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x369 = 260013596573LL;
	static int32_t x370 = -27036;
	int8_t x371 = 1;
	int64_t t68 = 898004334284468021LL;

	t68 = (((x369*x370)/x371)+x372);

	if (t68 != -7029727596947629LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x373 = 46;
	uint32_t x375 = UINT32_MAX;
	static uint16_t x376 = UINT16_MAX;
	static volatile uint32_t t69 = 178U;

	t69 = (((x373*x374)/x375)+x376);

	if (t69 != 65535U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x386 = INT8_MIN;
	volatile int64_t x387 = INT64_MAX;
	volatile int8_t x388 = -4;
	static int64_t t70 = -169365833062951118LL;

	t70 = (((x385*x386)/x387)+x388);

	if (t70 != -4LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x393 = 1U;
	static int32_t x394 = 6419;
	int16_t x395 = -300;
	static volatile int64_t t71 = -360LL;

	t71 = (((x393*x394)/x395)+x396);

	if (t71 != 9223372036854775786LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x401 = UINT32_MAX;
	uint64_t x402 = 715949640651059217LLU;
	static int32_t x403 = 176679;
	int8_t x404 = INT8_MAX;
	volatile uint64_t t72 = 332195954LLU;

	t72 = (((x401*x402)/x403)+x404);

	if (t72 != 64496216482283LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x405 = 4931;
	uint16_t x406 = 322U;
	int16_t x407 = INT16_MAX;
	uint8_t x408 = UINT8_MAX;
	int32_t t73 = -6197;

	t73 = (((x405*x406)/x407)+x408);

	if (t73 != 303) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = -1LL;
	static uint16_t x410 = 6U;
	int32_t x411 = INT32_MIN;
	static volatile int64_t t74 = 7631931795531LL;

	t74 = (((x409*x410)/x411)+x412);

	if (t74 != 65535LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x413 = 25240U;
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = -8245548042LL;
	int8_t x416 = -1;
	volatile int64_t t75 = 267100427489927LL;

	t75 = (((x413*x414)/x415)+x416);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x417 = -391328;
	static int16_t x418 = 5196;
	static uint8_t x419 = UINT8_MAX;
	int32_t x420 = -2661706;
	volatile int32_t t76 = 685;

	t76 = (((x417*x418)/x419)+x420);

	if (t76 != -10635589) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x422 = UINT8_MAX;
	int32_t t77 = -9252223;

	t77 = (((x421*x422)/x423)+x424);

	if (t77 != 9) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x425 = INT16_MIN;
	int8_t x427 = INT8_MAX;
	uint8_t x428 = 13U;

	t78 = (((x425*x426)/x427)+x428);

	if (t78 != -65781) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x430 = 124;
	int32_t x431 = INT32_MAX;
	volatile int32_t t79 = 104088697;

	t79 = (((x429*x430)/x431)+x432);

	if (t79 != 1023131) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x434 = -1LL;
	volatile int64_t x435 = -77184565235869LL;
	static volatile uint64_t x436 = 696922355990LLU;

	t80 = (((x433*x434)/x435)+x436);

	if (t80 != 696922355990LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x450 = 3U;
	int32_t x451 = INT32_MIN;
	static uint16_t x452 = UINT16_MAX;
	static volatile uint32_t t81 = 3U;

	t81 = (((x449*x450)/x451)+x452);

	if (t81 != 65535U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x457 = INT16_MIN;
	volatile int8_t x458 = INT8_MIN;
	uint32_t x459 = UINT32_MAX;
	uint16_t x460 = 10635U;
	volatile uint32_t t82 = 5207078U;

	t82 = (((x457*x458)/x459)+x460);

	if (t82 != 10635U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x461 = UINT8_MAX;
	uint64_t x462 = 335504748LLU;
	static int64_t x463 = INT64_MAX;
	volatile int16_t x464 = INT16_MIN;
	volatile uint64_t t83 = 1925380LLU;

	t83 = (((x461*x462)/x463)+x464);

	if (t83 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x470 = -1;
	static int16_t x472 = INT16_MIN;

	t84 = (((x469*x470)/x471)+x472);

	if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x474 = INT8_MIN;
	uint32_t x475 = 51556671U;
	volatile uint32_t t85 = 518334U;

	t85 = (((x473*x474)/x475)+x476);

	if (t85 != 198812374U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x481 = 292LLU;
	uint64_t x482 = 271989933004364358LLU;
	int8_t x483 = -1;
	int8_t x484 = INT8_MAX;

	t86 = (((x481*x482)/x483)+x484);

	if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x489 = UINT32_MAX;
	int32_t x490 = INT32_MIN;
	volatile int32_t x491 = 20;
	static int8_t x492 = INT8_MIN;
	static volatile uint32_t t87 = 860644657U;

	t87 = (((x489*x490)/x491)+x492);

	if (t87 != 107374054U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x493 = INT16_MIN;
	volatile int16_t x494 = INT16_MIN;
	static uint16_t x496 = 54U;

	t88 = (((x493*x494)/x495)+x496);

	if (t88 != 54LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x497 = 112U;
	uint16_t x498 = UINT16_MAX;
	uint8_t x499 = UINT8_MAX;

	t89 = (((x497*x498)/x499)+x500);

	if (t89 != 28781) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x502 = INT8_MAX;
	static int16_t x503 = INT16_MIN;
	static volatile uint8_t x504 = 5U;
	int64_t t90 = 0LL;

	t90 = (((x501*x502)/x503)+x504);

	if (t90 != 5LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x505 = 9478LLU;
	int16_t x506 = INT16_MAX;
	int32_t x507 = INT32_MIN;

	t91 = (((x505*x506)/x507)+x508);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x513 = 72U;
	uint16_t x515 = UINT16_MAX;
	int32_t x516 = -1;

	t92 = (((x513*x514)/x515)+x516);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x518 = 819988U;
	uint32_t x519 = 2U;
	static uint64_t x520 = UINT64_MAX;

	t93 = (((x517*x518)/x519)+x520);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x521 = 230;
	int32_t x522 = -1;
	static int32_t x523 = INT32_MAX;
	uint32_t x524 = UINT32_MAX;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (((x521*x522)/x523)+x524);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x525 = UINT16_MAX;
	static uint64_t x526 = UINT64_MAX;
	int32_t x527 = INT32_MIN;
	uint64_t t95 = 26571944LLU;

	t95 = (((x525*x526)/x527)+x528);

	if (t95 != 2147483648LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x529 = UINT32_MAX;
	volatile uint16_t x530 = UINT16_MAX;
	int16_t x531 = -1;
	static int64_t x532 = INT64_MAX;
	int64_t t96 = INT64_MAX;

	t96 = (((x529*x530)/x531)+x532);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x539 = 43762U;
	static volatile uint32_t t97 = 885U;

	t97 = (((x537*x538)/x539)+x540);

	if (t97 != 98255U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x543 = INT32_MIN;
	uint8_t x544 = 0U;
	int32_t t98 = 533073949;

	t98 = (((x541*x542)/x543)+x544);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x545 = 8;
	static int16_t x546 = 3885;
	int64_t x547 = INT64_MIN;
	static int64_t x548 = INT64_MIN;
	volatile int64_t t99 = INT64_MIN;

	t99 = (((x545*x546)/x547)+x548);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

