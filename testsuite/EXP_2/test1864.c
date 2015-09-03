#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 0;
volatile uint64_t t0 = 75518486LLU;
volatile int64_t t1 = 1020034LL;
volatile int64_t t2 = -555504775911425LL;
int8_t x14 = -1;
int32_t x21 = INT32_MIN;
int8_t x25 = -9;
int16_t x26 = INT16_MIN;
int8_t x32 = INT8_MIN;
uint16_t x35 = 106U;
int16_t x39 = INT16_MIN;
int8_t x43 = -1;
uint32_t t9 = 1962866U;
int16_t x50 = 0;
volatile int32_t x52 = -1;
int32_t x55 = INT32_MIN;
volatile int64_t t13 = -1427726071LL;
int16_t x62 = -1;
volatile uint64_t t16 = 3825789LLU;
volatile int32_t t18 = 21399;
int64_t x96 = -1070342491680744LL;
uint16_t x97 = 3084U;
uint64_t x98 = UINT64_MAX;
int32_t x99 = -94312617;
int64_t t25 = 13LL;
volatile int32_t x118 = 121;
uint64_t x123 = UINT64_MAX;
static int8_t x128 = INT8_MIN;
volatile int8_t x131 = INT8_MIN;
volatile int16_t x135 = INT16_MIN;
volatile uint64_t t31 = 1930685244175369LLU;
volatile uint64_t t32 = 650053606122906LLU;
volatile int64_t x141 = -1LL;
volatile int8_t x164 = -49;
volatile uint16_t x169 = UINT16_MAX;
uint32_t x176 = UINT32_MAX;
uint16_t x177 = UINT16_MAX;
uint64_t x188 = 290442087LLU;
int32_t x191 = 6197537;
int8_t x192 = -1;
static int8_t x197 = -1;
volatile uint64_t x198 = UINT64_MAX;
int64_t x202 = -1LL;
volatile uint32_t x213 = 16527527U;
int16_t x221 = INT16_MIN;
int64_t x230 = -1LL;
static int64_t t50 = 109434404750264786LL;
static volatile int16_t x235 = 38;
static int16_t x237 = -18;
int8_t x249 = 2;
int64_t x250 = -1LL;
static volatile int64_t t54 = -60660427840633LL;
int8_t x260 = -1;
uint64_t t56 = 1123660227340485LLU;
int32_t x264 = -1;
uint32_t x274 = 12U;
uint64_t x277 = 87933872647950305LLU;
uint64_t t61 = 1126437940464722LLU;
uint32_t x286 = 1053U;
int64_t t62 = -13979112887468LL;
static int64_t x297 = -152838088540LL;
volatile int64_t t65 = 200366889817106LL;
uint64_t x308 = 1107841139633831LLU;
int16_t x318 = -27;
volatile int8_t x329 = INT8_MIN;
int64_t x337 = -1LL;
uint32_t x338 = 26848U;
int8_t x353 = -2;
static uint64_t x354 = UINT64_MAX;
int8_t x358 = INT8_MIN;
uint64_t x359 = 193068330188144579LLU;
int32_t t78 = 4;
int16_t x377 = -1;
static volatile int64_t t83 = -8LL;
int16_t x396 = INT16_MIN;
static volatile uint64_t x399 = 15391017072LLU;
static int16_t x402 = INT16_MAX;
int64_t x406 = INT64_MIN;
static volatile int8_t x410 = INT8_MAX;
uint8_t x413 = 31U;
uint8_t x414 = 0U;
static int16_t x418 = -485;
int32_t t91 = -339191800;
int64_t x428 = -1LL;
volatile int64_t t92 = 3329929905251LL;
uint64_t x431 = 374645526112948294LLU;
uint32_t x433 = 1282575U;
static int8_t x443 = INT8_MIN;
static int16_t x447 = INT16_MIN;


void f0(void) {
	uint32_t x1 = 4674U;
	static volatile uint64_t x3 = 88445463112852LLU;
	static int32_t x4 = -1;

	t0 = ((x1+(x2|x3))%x4);

	if (t0 != 88445463117526LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x6 = -1LL;
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = -1;

	t1 = ((x5+(x6|x7))%x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = -1;
	volatile int64_t x11 = 4124580017LL;
	static int8_t x12 = INT8_MIN;

	t2 = ((x9+(x10|x11))%x12);

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 3094;
	int16_t x15 = 1;
	uint16_t x16 = 1U;
	volatile int32_t t3 = -141;

	t3 = ((x13+(x14|x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = -1;
	volatile uint64_t x23 = 14040LLU;
	int8_t x24 = INT8_MIN;
	uint64_t t4 = 62590720662LLU;

	t4 = ((x21+(x22|x23))%x24);

	if (t4 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x27 = -53LL;
	uint8_t x28 = UINT8_MAX;
	int64_t t5 = -7144LL;

	t5 = ((x25+(x26|x27))%x28);

	if (t5 != -62LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -7973026082LL;
	static int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MIN;
	int64_t t6 = 25197087865098LL;

	t6 = ((x29+(x30|x31))%x32);

	if (t6 != -35LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MIN;
	static uint16_t x34 = 1191U;
	static int32_t x36 = -1;
	int32_t t7 = 291475;

	t7 = ((x33+(x34|x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 120444LLU;
	int16_t x38 = INT16_MAX;
	uint16_t x40 = UINT16_MAX;
	uint64_t t8 = 3702259LLU;

	t8 = ((x37+(x38|x39))%x40);

	if (t8 != 54908LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = -6967890;
	static int32_t x42 = INT32_MIN;
	uint32_t x44 = 1U;

	t9 = ((x41+(x42|x43))%x44);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	static int64_t x48 = 8132944351LL;
	volatile int64_t t10 = 3045644LL;

	t10 = ((x45+(x46|x47))%x48);

	if (t10 != 254LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 26U;
	int16_t x51 = -5;
	int32_t t11 = 401;

	t11 = ((x49+(x50|x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 3133;
	volatile int8_t x54 = INT8_MIN;
	uint16_t x56 = UINT16_MAX;
	static int32_t t12 = -19575022;

	t12 = ((x53+(x54|x55))%x56);

	if (t12 != 3005) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 4U;
	int8_t x58 = -5;
	volatile int64_t x59 = INT64_MAX;
	static int8_t x60 = -1;

	t13 = ((x57+(x58|x59))%x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 577267U;
	uint64_t x63 = 2LLU;
	static int32_t x64 = INT32_MIN;
	volatile uint64_t t14 = 982862310523420LLU;

	t14 = ((x61+(x62|x63))%x64);

	if (t14 != 577266LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 72319350133LLU;
	uint16_t x66 = UINT16_MAX;
	static int64_t x67 = -391698241LL;
	uint8_t x68 = UINT8_MAX;
	uint64_t t15 = 117LLU;

	t15 = ((x65+(x66|x67))%x68);

	if (t15 != 51LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 165184940544612856LLU;
	volatile int32_t x70 = 166844;
	int16_t x71 = -1;
	int16_t x72 = INT16_MIN;

	t16 = ((x69+(x70|x71))%x72);

	if (t16 != 165184940544612855LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	uint16_t x78 = 2485U;
	uint8_t x79 = 1U;
	int32_t x80 = 951514128;
	static int32_t t17 = 444683;

	t17 = ((x77+(x78|x79))%x80);

	if (t17 != -30283) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int8_t x82 = INT8_MIN;
	volatile int32_t x83 = -1;
	static int8_t x84 = INT8_MIN;

	t18 = ((x81+(x82|x83))%x84);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = 219034779392LLU;
	static int32_t x86 = 2413435;
	int8_t x87 = INT8_MIN;
	int64_t x88 = 1473LL;
	volatile uint64_t t19 = 4066733451956769835LLU;

	t19 = ((x85+(x86|x87))%x88);

	if (t19 != 501LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = 6598867U;
	static volatile uint64_t x91 = 7886237469108LLU;
	uint32_t x92 = 2977137U;
	static volatile uint64_t t20 = 2864LLU;

	t20 = ((x89+(x90|x91))%x92);

	if (t20 != 1364321LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	uint8_t x94 = 6U;
	static int8_t x95 = -1;
	static int64_t t21 = -406776533LL;

	t21 = ((x93+(x94|x95))%x96);

	if (t21 != 4294967294LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x100 = -263;
	uint64_t t22 = 221720LLU;

	t22 = ((x97+(x98|x99))%x100);

	if (t22 != 3083LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = -1;
	volatile int16_t x102 = 15073;
	static uint32_t x103 = UINT32_MAX;
	uint16_t x104 = UINT16_MAX;
	uint32_t t23 = 555788U;

	t23 = ((x101+(x102|x103))%x104);

	if (t23 != 65534U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x106 = 157515U;
	int64_t x107 = INT64_MIN;
	static int64_t x108 = 166402578LL;
	int64_t t24 = 907018393235LL;

	t24 = ((x105+(x106|x107))%x108);

	if (t24 != -84570031LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = -1;
	int32_t x110 = INT32_MIN;
	volatile uint16_t x111 = 31U;
	int64_t x112 = 456263726845048020LL;

	t25 = ((x109+(x110|x111))%x112);

	if (t25 != -2147483618LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x113 = 492;
	static volatile uint64_t x114 = UINT64_MAX;
	int16_t x115 = 10;
	int16_t x116 = INT16_MAX;
	uint64_t t26 = 387971445270879394LLU;

	t26 = ((x113+(x114|x115))%x116);

	if (t26 != 491LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 0U;
	uint32_t x119 = 2869U;
	int16_t x120 = INT16_MIN;
	static uint32_t t27 = 11127U;

	t27 = ((x117+(x118|x119))%x120);

	if (t27 != 2941U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	volatile int8_t x122 = -56;
	int8_t x124 = INT8_MIN;
	static uint64_t t28 = 11LLU;

	t28 = ((x121+(x122|x123))%x124);

	if (t28 != 2147483646LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 23855193723129063LLU;
	int64_t x126 = -71284479926082LL;
	uint64_t x127 = 23044264206033LLU;
	uint64_t t29 = 1596973976151772955LLU;

	t29 = ((x125+(x126|x127))%x128);

	if (t29 != 23784824608803814LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 1536812035LL;
	int16_t x130 = INT16_MIN;
	int32_t x132 = 67;
	static int64_t t30 = 1038918994LL;

	t30 = ((x129+(x130|x131))%x132);

	if (t30 != 10LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x133 = 1561750701LLU;
	uint32_t x134 = 32032U;
	int16_t x136 = 483;

	t31 = ((x133+(x134|x135))%x136);

	if (t31 != 297LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -1LL;
	volatile int8_t x138 = 1;
	uint16_t x139 = 20U;
	volatile uint64_t x140 = 2079386407491005847LLU;

	t32 = ((x137+(x138|x139))%x140);

	if (t32 != 20LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	static int16_t x144 = INT16_MAX;
	int64_t t33 = 180944374438730LL;

	t33 = ((x141+(x142|x143))%x144);

	if (t33 != -2LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	uint16_t x146 = 11335U;
	int64_t x147 = INT64_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int64_t t34 = 343563LL;

	t34 = ((x145+(x146|x147))%x148);

	if (t34 != 70LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MAX;
	volatile uint32_t x150 = 1536U;
	uint32_t x151 = 2110600473U;
	int32_t x152 = -1;
	static uint32_t t35 = 54U;

	t35 = ((x149+(x150|x151))%x152);

	if (t35 != 2110601112U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x161 = -4304270148662LL;
	int8_t x162 = INT8_MAX;
	static volatile uint16_t x163 = 1292U;
	volatile int64_t t36 = 201267507536985LL;

	t36 = ((x161+(x162|x163))%x164);

	if (t36 != -8LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x170 = 3459509341LLU;
	static uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = INT32_MIN;
	volatile uint64_t t37 = 6768385499417121LLU;

	t37 = ((x169+(x170|x171))%x172);

	if (t37 != 3459575038LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 7824U;
	int64_t x174 = INT64_MAX;
	int8_t x175 = INT8_MIN;
	int64_t t38 = 5608LL;

	t38 = ((x173+(x174|x175))%x176);

	if (t38 != 7823LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x178 = INT64_MIN;
	uint64_t x179 = 1LLU;
	static int16_t x180 = INT16_MIN;
	uint64_t t39 = 9645628191822LLU;

	t39 = ((x177+(x178|x179))%x180);

	if (t39 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = INT32_MAX;
	int32_t x187 = 338211512;
	uint64_t t40 = 2519LLU;

	t40 = ((x185+(x186|x187))%x188);

	if (t40 != 114389037LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x189 = UINT8_MAX;
	volatile uint16_t x190 = 12U;
	int32_t t41 = 32306186;

	t41 = ((x189+(x190|x191))%x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x193 = INT64_MAX;
	int16_t x194 = INT16_MIN;
	int64_t x195 = INT64_MIN;
	int32_t x196 = -1;
	int64_t t42 = -2LL;

	t42 = ((x193+(x194|x195))%x196);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x199 = UINT8_MAX;
	static uint16_t x200 = UINT16_MAX;
	uint64_t t43 = 441365976683407LLU;

	t43 = ((x197+(x198|x199))%x200);

	if (t43 != 65534LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x201 = 87449359018LL;
	uint64_t x203 = 5LLU;
	int32_t x204 = INT32_MIN;
	static uint64_t t44 = 157140982855LLU;

	t44 = ((x201+(x202|x203))%x204);

	if (t44 != 87449359017LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x205 = INT16_MAX;
	volatile int64_t x206 = -225869715606557363LL;
	int64_t x207 = INT64_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile int64_t t45 = 537767205296986965LL;

	t45 = ((x205+(x206|x207))%x208);

	if (t45 != -1197557251LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x209 = 688279LLU;
	int32_t x210 = -1;
	int16_t x211 = -6;
	int64_t x212 = INT64_MIN;
	static uint64_t t46 = 471LLU;

	t46 = ((x209+(x210|x211))%x212);

	if (t46 != 688278LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x214 = INT8_MAX;
	static volatile int16_t x215 = INT16_MIN;
	volatile uint64_t x216 = UINT64_MAX;
	uint64_t t47 = 42920332026LLU;

	t47 = ((x213+(x214|x215))%x216);

	if (t47 != 16494886LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -7146;
	int64_t x218 = INT64_MIN;
	int16_t x219 = -5214;
	int32_t x220 = 12;
	int64_t t48 = 12LL;

	t48 = ((x217+(x218|x219))%x220);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x222 = -1LL;
	uint8_t x223 = 8U;
	static int16_t x224 = -28;
	volatile int64_t t49 = -1023793522001LL;

	t49 = ((x221+(x222|x223))%x224);

	if (t49 != -9LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x229 = 0;
	static int8_t x231 = INT8_MAX;
	uint32_t x232 = 29995858U;

	t50 = ((x229+(x230|x231))%x232);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MAX;
	int32_t x234 = INT32_MIN;
	uint32_t x236 = 532U;
	uint32_t t51 = 102U;

	t51 = ((x233+(x234|x235))%x236);

	if (t51 != 377U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x238 = INT64_MIN;
	static uint32_t x239 = 62614328U;
	int16_t x240 = INT16_MIN;
	volatile int64_t t52 = -52499040LL;

	t52 = ((x237+(x238|x239))%x240);

	if (t52 != -5338LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x245 = 17U;
	static uint64_t x246 = 2826629332LLU;
	static int32_t x247 = INT32_MAX;
	static int32_t x248 = INT32_MAX;
	uint64_t t53 = 1275674252350632LLU;

	t53 = ((x245+(x246|x247))%x248);

	if (t53 != 18LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x251 = UINT16_MAX;
	int16_t x252 = 5244;

	t54 = ((x249+(x250|x251))%x252);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x253 = UINT16_MAX;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	volatile int8_t x256 = INT8_MAX;
	static uint32_t t55 = 262030602U;

	t55 = ((x253+(x254|x255))%x256);

	if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x257 = UINT64_MAX;
	int8_t x258 = -1;
	int16_t x259 = -1;

	t56 = ((x257+(x258|x259))%x260);

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x261 = 4U;
	static int64_t x262 = INT64_MIN;
	static volatile int32_t x263 = 18370869;
	static volatile int64_t t57 = 562566487LL;

	t57 = ((x261+(x262|x263))%x264);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = 1684;
	static uint8_t x266 = 1U;
	volatile uint8_t x267 = 28U;
	int64_t x268 = INT64_MAX;
	volatile int64_t t58 = -11255LL;

	t58 = ((x265+(x266|x267))%x268);

	if (t58 != 1713LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x269 = -20578646;
	uint64_t x270 = 4050350983LLU;
	int16_t x271 = -1;
	int64_t x272 = -7631013126162251LL;
	volatile uint64_t t59 = 88732153874023LLU;

	t59 = ((x269+(x270|x271))%x272);

	if (t59 != 7631013105583604LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x273 = 5570LLU;
	uint8_t x275 = UINT8_MAX;
	int8_t x276 = INT8_MAX;
	volatile uint64_t t60 = 704559205167LLU;

	t60 = ((x273+(x274|x275))%x276);

	if (t60 != 110LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x278 = INT16_MAX;
	uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 1668022985428857LLU;

	t61 = ((x277+(x278|x279))%x280);

	if (t61 != 1196677405715276LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = 7960506835265LL;
	int8_t x287 = INT8_MIN;
	volatile int8_t x288 = 3;

	t62 = ((x285+(x286|x287))%x288);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x289 = INT32_MIN;
	int64_t x290 = -2298948318LL;
	int8_t x291 = -1;
	int8_t x292 = 25;
	int64_t t63 = 3LL;

	t63 = ((x289+(x290|x291))%x292);

	if (t63 != -24LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x298 = INT64_MIN;
	static int32_t x299 = -58212;
	int16_t x300 = -246;
	int64_t t64 = -17869LL;

	t64 = ((x297+(x298|x299))%x300);

	if (t64 != -118LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x301 = INT64_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	volatile uint32_t x304 = UINT32_MAX;

	t65 = ((x301+(x302|x303))%x304);

	if (t65 != 32766LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 142964721421541139LLU;
	static volatile int16_t x306 = -1;
	int16_t x307 = 2;
	volatile uint64_t t66 = 23612589071946083LLU;

	t66 = ((x305+(x306|x307))%x308);

	if (t66 != 53214408776939LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x309 = INT16_MIN;
	uint64_t x310 = UINT64_MAX;
	volatile int16_t x311 = INT16_MIN;
	volatile uint8_t x312 = UINT8_MAX;
	uint64_t t67 = 71849105LLU;

	t67 = ((x309+(x310|x311))%x312);

	if (t67 != 127LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x313 = -1;
	static uint8_t x314 = 0U;
	uint64_t x315 = 25809580192LLU;
	int64_t x316 = -1LL;
	uint64_t t68 = 2278908167391447544LLU;

	t68 = ((x313+(x314|x315))%x316);

	if (t68 != 25809580191LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x317 = 23503U;
	int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MAX;
	volatile int64_t t69 = 27847940LL;

	t69 = ((x317+(x318|x319))%x320);

	if (t69 != 23502LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x330 = -3;
	int8_t x331 = -1;
	int64_t x332 = -1LL;
	static int64_t t70 = 89121330862349LL;

	t70 = ((x329+(x330|x331))%x332);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = 553654820803756LLU;
	uint64_t x334 = 68940487474938902LLU;
	int16_t x335 = 1;
	int16_t x336 = INT16_MAX;
	static uint64_t t71 = 3393526613480LLU;

	t71 = ((x333+(x334|x335))%x336);

	if (t71 != 30133LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x339 = 28U;
	int32_t x340 = -356388;
	volatile int64_t t72 = -16812305817401279LL;

	t72 = ((x337+(x338|x339))%x340);

	if (t72 != 26875LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = -1;
	static uint64_t x342 = 29LLU;
	int16_t x343 = INT16_MIN;
	uint8_t x344 = 2U;
	volatile uint64_t t73 = 31038422404900LLU;

	t73 = ((x341+(x342|x343))%x344);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = 10;
	static uint16_t x346 = UINT16_MAX;
	int8_t x347 = -3;
	int16_t x348 = -1;
	volatile int32_t t74 = 264044347;

	t74 = ((x345+(x346|x347))%x348);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x355 = -1LL;
	uint16_t x356 = 503U;
	uint64_t t75 = 10007064544LLU;

	t75 = ((x353+(x354|x355))%x356);

	if (t75 != 384LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x357 = -1;
	int32_t x360 = INT32_MIN;
	uint64_t t76 = 31631091476797080LLU;

	t76 = ((x357+(x358|x359))%x360);

	if (t76 != 2147483586LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x361 = INT8_MIN;
	static int64_t x362 = -1LL;
	int16_t x363 = INT16_MIN;
	int64_t x364 = -1LL;
	int64_t t77 = -4504LL;

	t77 = ((x361+(x362|x363))%x364);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x365 = INT32_MIN;
	int16_t x366 = 4070;
	int32_t x367 = 32319;
	int32_t x368 = -440;

	t78 = ((x365+(x366|x367))%x368);

	if (t78 != -81) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x369 = 5U;
	int64_t x370 = INT64_MAX;
	int64_t x371 = -117028854LL;
	int64_t x372 = 1LL;
	volatile int64_t t79 = 0LL;

	t79 = ((x369+(x370|x371))%x372);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x373 = -1;
	static volatile int8_t x374 = INT8_MIN;
	int32_t x375 = 20266;
	static int32_t x376 = -390902;
	int32_t t80 = 1583;

	t80 = ((x373+(x374|x375))%x376);

	if (t80 != -87) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x378 = UINT32_MAX;
	static int64_t x379 = INT64_MAX;
	int8_t x380 = -1;
	int64_t t81 = -271268430809LL;

	t81 = ((x377+(x378|x379))%x380);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x381 = INT16_MIN;
	int64_t x382 = -1141425LL;
	uint8_t x383 = UINT8_MAX;
	uint16_t x384 = 12U;
	volatile int64_t t82 = -7055771012LL;

	t82 = ((x381+(x382|x383))%x384);

	if (t82 != -9LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x385 = -1LL;
	int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MAX;
	uint8_t x388 = UINT8_MAX;

	t83 = ((x385+(x386|x387))%x388);

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x389 = -16572;
	static int64_t x390 = -34799LL;
	uint8_t x391 = 3U;
	int8_t x392 = INT8_MIN;
	int64_t t84 = 7LL;

	t84 = ((x389+(x390|x391))%x392);

	if (t84 != -41LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = 972;
	uint16_t x395 = 2U;
	volatile int32_t t85 = 1328218;

	t85 = ((x393+(x394|x395))%x396);

	if (t85 != -31794) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = -1;
	int8_t x398 = 39;
	int8_t x400 = -1;
	volatile uint64_t t86 = 13725766LLU;

	t86 = ((x397+(x398|x399))%x400);

	if (t86 != 15391017078LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x401 = 10LL;
	int8_t x403 = INT8_MIN;
	static int16_t x404 = INT16_MAX;
	int64_t t87 = 56LL;

	t87 = ((x401+(x402|x403))%x404);

	if (t87 != 9LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = INT32_MAX;
	int64_t x407 = 412112133387859LL;
	int16_t x408 = INT16_MAX;
	int64_t t88 = -4790486836570427LL;

	t88 = ((x405+(x406|x407))%x408);

	if (t88 != -964LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = INT32_MIN;
	static uint64_t x411 = 24882766LLU;
	static int64_t x412 = INT64_MIN;
	uint64_t t89 = 62924763LLU;

	t89 = ((x409+(x410|x411))%x412);

	if (t89 != 9223372034732174975LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MIN;
	int32_t t90 = 127689;

	t90 = ((x413+(x414|x415))%x416);

	if (t90 != -97) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x417 = INT8_MAX;
	volatile int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MAX;

	t91 = ((x417+(x418|x419))%x420);

	if (t91 != 26) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = -11;
	int64_t x426 = INT64_MAX;
	uint32_t x427 = 113016U;

	t92 = ((x425+(x426|x427))%x428);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x429 = UINT64_MAX;
	int16_t x430 = -1;
	static int32_t x432 = -512670990;
	static uint64_t t93 = 2142134844LLU;

	t93 = ((x429+(x430|x431))%x432);

	if (t93 != 512670988LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x434 = 0;
	int32_t x435 = -1;
	volatile uint32_t x436 = 61105U;
	uint32_t t94 = 2598U;

	t94 = ((x433+(x434|x435))%x436);

	if (t94 != 60474U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x437 = -1;
	int32_t x438 = INT32_MIN;
	uint64_t x439 = 269259778403LLU;
	int64_t x440 = INT64_MIN;
	volatile uint64_t t95 = 1LLU;

	t95 = ((x437+(x438|x439))%x440);

	if (t95 != 9223372035531614562LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x441 = 875;
	int64_t x442 = INT64_MIN;
	static uint64_t x444 = UINT64_MAX;
	static volatile uint64_t t96 = 414971312574552199LLU;

	t96 = ((x441+(x442|x443))%x444);

	if (t96 != 747LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x445 = -1;
	uint16_t x446 = 5006U;
	volatile int16_t x448 = INT16_MIN;
	static int32_t t97 = -113773912;

	t97 = ((x445+(x446|x447))%x448);

	if (t97 != -27763) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x449 = INT8_MIN;
	static int8_t x450 = -1;
	int8_t x451 = INT8_MIN;
	int16_t x452 = -1;
	int32_t t98 = -176479899;

	t98 = ((x449+(x450|x451))%x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x457 = -244;
	static volatile uint16_t x458 = 30U;
	uint8_t x459 = UINT8_MAX;
	volatile int32_t x460 = -1;
	int32_t t99 = 529564302;

	t99 = ((x457+(x458|x459))%x460);

	if (t99 != 0) { NG(); } else { ; }
	
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

