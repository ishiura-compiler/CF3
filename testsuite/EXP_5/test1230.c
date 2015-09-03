#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -1;
int8_t x3 = 1;
static volatile int32_t t0 = 188428211;
volatile int32_t t1 = 1;
int8_t x17 = -16;
int32_t x20 = INT32_MAX;
int32_t t4 = 1707431;
int32_t t6 = 127050002;
int32_t x36 = INT32_MIN;
uint8_t x39 = UINT8_MAX;
static int32_t x40 = -30;
volatile int32_t t10 = 35281536;
uint16_t x46 = 8U;
int16_t x47 = -1;
volatile int32_t t14 = -549;
static int32_t t15 = -48611317;
int16_t x65 = -881;
int64_t x68 = INT64_MIN;
volatile int8_t x71 = INT8_MIN;
static int64_t x79 = INT64_MIN;
volatile int16_t x84 = -337;
static volatile uint32_t x87 = UINT32_MAX;
static uint32_t x88 = UINT32_MAX;
static int8_t x93 = -1;
uint16_t x94 = 0U;
int32_t x108 = -1;
uint16_t x110 = 203U;
int32_t x113 = INT32_MIN;
int64_t x114 = -431154827044843LL;
volatile uint64_t x115 = UINT64_MAX;
uint16_t x117 = 4U;
volatile int32_t t30 = -493;
int16_t x125 = -1;
int16_t x128 = INT16_MIN;
int32_t x129 = INT32_MIN;
static uint8_t x139 = 1U;
static int32_t x147 = -3598339;
int8_t x164 = -7;
int32_t x171 = INT32_MIN;
int32_t t41 = -47;
uint32_t x178 = 4278U;
int64_t x181 = INT64_MIN;
int16_t x183 = INT16_MIN;
volatile uint64_t x194 = UINT64_MAX;
volatile uint64_t x199 = UINT64_MAX;
uint16_t x202 = 42U;
int8_t x209 = INT8_MAX;
static volatile int32_t t51 = 445;
int32_t x220 = INT32_MIN;
int8_t x224 = INT8_MIN;
volatile int16_t x226 = INT16_MIN;
int8_t x229 = -1;
static volatile int16_t x234 = INT16_MAX;
volatile int32_t t59 = -9947104;
int64_t x249 = -1LL;
int32_t t60 = 517506;
int64_t x254 = INT64_MIN;
uint16_t x257 = UINT16_MAX;
uint64_t x259 = 28888320283830088LLU;
uint32_t x267 = 6090309U;
uint32_t x268 = UINT32_MAX;
static int8_t x275 = INT8_MIN;
uint8_t x278 = UINT8_MAX;
int64_t x287 = INT64_MIN;
static int8_t x289 = INT8_MIN;
uint64_t x290 = 1975941566191643LLU;
static int64_t x298 = INT64_MAX;
int32_t t73 = 15816186;
static int64_t x308 = -1LL;
int32_t x314 = -1;
volatile int8_t x318 = 0;
static uint32_t x322 = 78221111U;
static int32_t t78 = -38060246;
uint8_t x330 = 6U;
uint8_t x341 = UINT8_MAX;
volatile uint64_t x343 = UINT64_MAX;
static volatile int32_t t82 = -134;
uint8_t x346 = UINT8_MAX;
int8_t x349 = 1;
volatile int16_t x351 = INT16_MAX;
int32_t t85 = 0;
uint16_t x359 = 5335U;
int64_t x360 = -1LL;
uint32_t x361 = 294U;
int64_t x367 = -1LL;
int32_t x368 = 57;
static volatile int32_t x372 = INT32_MIN;
int32_t t89 = 7445478;
static volatile uint8_t x375 = 6U;
int32_t x376 = -19607;
int32_t t90 = 1;
uint8_t x381 = 1U;
uint32_t x389 = UINT32_MAX;
volatile int32_t t94 = -461492;
int32_t x393 = -64226463;
volatile uint64_t x394 = 235284251LLU;
volatile uint64_t x396 = UINT64_MAX;
int32_t t95 = 29402;
volatile uint8_t x397 = 55U;
int64_t x399 = INT64_MIN;
static volatile int32_t t96 = 246662;
volatile int32_t x401 = -1;
uint16_t x405 = 4819U;


void f0(void) {
	static uint64_t x1 = 512378LLU;
	int16_t x4 = -1;

	t0 = (x1==((x2==x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	static int8_t x6 = 17;
	int32_t x7 = INT32_MIN;
	int8_t x8 = -1;

	t1 = (x5==((x6==x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int64_t x10 = INT64_MIN;
	volatile uint16_t x11 = 3U;
	int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = 1;

	t2 = (x9==((x10==x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = -1;
	int32_t x14 = 289500473;
	int32_t x15 = -86113253;
	int64_t x16 = -295409725LL;
	int32_t t3 = 3;

	t3 = (x13==((x14==x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MAX;
	volatile uint16_t x19 = 169U;

	t4 = (x17==((x18==x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x22 = INT64_MAX;
	static uint16_t x23 = 821U;
	uint64_t x24 = 319782LLU;
	volatile int32_t t5 = 241;

	t5 = (x21==((x22==x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	volatile int8_t x26 = INT8_MIN;
	uint32_t x27 = 288U;
	int64_t x28 = 437828473375LL;

	t6 = (x25==((x26==x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	static uint16_t x30 = 17U;
	static int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -65;

	t7 = (x29==((x30==x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	static int16_t x34 = 0;
	uint8_t x35 = 0U;
	volatile int32_t t8 = -9398777;

	t8 = (x33==((x34==x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 12994571LL;
	int64_t x38 = INT64_MAX;
	static volatile int32_t t9 = -22798;

	t9 = (x37==((x38==x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	static volatile int8_t x42 = -1;
	int16_t x43 = -3;
	int16_t x44 = -1;

	t10 = (x41==((x42==x43)/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	volatile uint64_t x48 = 63070987725LLU;
	volatile int32_t t11 = -376630;

	t11 = (x45==((x46==x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int16_t x50 = -1;
	static uint64_t x51 = 1LLU;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -39;

	t12 = (x49==((x50==x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 6U;
	uint64_t x54 = 503LLU;
	static int64_t x55 = INT64_MAX;
	uint16_t x56 = UINT16_MAX;
	static int32_t t13 = 1;

	t13 = (x53==((x54==x55)/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	static int8_t x58 = -9;
	volatile int16_t x59 = -26;
	int64_t x60 = INT64_MIN;

	t14 = (x57==((x58==x59)/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 590U;
	static uint8_t x62 = 31U;
	int64_t x63 = INT64_MIN;
	uint64_t x64 = 6409149047638LLU;

	t15 = (x61==((x62==x63)/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int8_t x67 = -1;
	static volatile int32_t t16 = -162;

	t16 = (x65==((x66==x67)/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 1LL;
	static uint16_t x70 = 3328U;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = 11353;

	t17 = (x69==((x70==x71)/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 690U;
	uint64_t x74 = 8597726872670LLU;
	uint32_t x75 = 4001097U;
	uint32_t x76 = 1100250U;
	static int32_t t18 = -1643312;

	t18 = (x73==((x74==x75)/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 520377409U;
	static int8_t x78 = INT8_MAX;
	static uint16_t x80 = UINT16_MAX;
	int32_t t19 = 51;

	t19 = (x77==((x78==x79)/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 5377334690LLU;
	uint16_t x82 = 79U;
	uint16_t x83 = 36U;
	volatile int32_t t20 = -336125;

	t20 = (x81==((x82==x83)/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x85 = INT8_MIN;
	uint64_t x86 = 6LLU;
	volatile int32_t t21 = 50;

	t21 = (x85==((x86==x87)/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	volatile int16_t x92 = INT16_MAX;
	volatile int32_t t22 = -10;

	t22 = (x89==((x90==x91)/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x95 = -1LL;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 57429344;

	t23 = (x93==((x94==x95)/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MIN;
	volatile uint32_t x98 = 7876U;
	int16_t x99 = -1;
	uint8_t x100 = 3U;
	int32_t t24 = 0;

	t24 = (x97==((x98==x99)/x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint16_t x102 = 1U;
	int32_t x103 = 0;
	int64_t x104 = INT64_MAX;
	int32_t t25 = 2742121;

	t25 = (x101==((x102==x103)/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	uint64_t x107 = 165LLU;
	volatile int32_t t26 = 170252692;

	t26 = (x105==((x106==x107)/x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int16_t x111 = INT16_MIN;
	static uint64_t x112 = UINT64_MAX;
	int32_t t27 = 66547753;

	t27 = (x109==((x110==x111)/x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x116 = 1;
	int32_t t28 = 9788459;

	t28 = (x113==((x114==x115)/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = 24;
	int16_t x119 = -1;
	volatile int32_t x120 = -1;
	volatile int32_t t29 = -63;

	t29 = (x117==((x118==x119)/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 45187704190997LLU;
	static int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MAX;
	uint64_t x124 = 34554498018495593LLU;

	t30 = (x121==((x122==x123)/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MAX;
	volatile uint64_t x127 = UINT64_MAX;
	volatile int32_t t31 = 3;

	t31 = (x125==((x126==x127)/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x130 = 80U;
	uint16_t x131 = 5144U;
	int16_t x132 = -1;
	int32_t t32 = 180;

	t32 = (x129==((x130==x131)/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 6;
	uint64_t x138 = 283657209837531385LLU;
	int8_t x140 = -7;
	static volatile int32_t t33 = -15154427;

	t33 = (x137==((x138==x139)/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x141 = 14U;
	int32_t x142 = 265333917;
	volatile int64_t x143 = -101322000LL;
	int32_t x144 = -1561;
	int32_t t34 = -6198;

	t34 = (x141==((x142==x143)/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	int32_t x146 = -1;
	static int16_t x148 = INT16_MAX;
	volatile int32_t t35 = 91;

	t35 = (x145==((x146==x147)/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = -1;
	volatile int32_t x150 = INT32_MIN;
	static int16_t x151 = 4;
	int32_t x152 = -1;
	int32_t t36 = -568;

	t36 = (x149==((x150==x151)/x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x153 = 453783940077LLU;
	volatile int32_t x154 = -1;
	int32_t x155 = -826673978;
	int16_t x156 = INT16_MIN;
	int32_t t37 = -296240318;

	t37 = (x153==((x154==x155)/x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -2;
	volatile uint64_t x158 = 6LLU;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t38 = -1;

	t38 = (x157==((x158==x159)/x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = 8U;
	volatile int64_t x162 = -1LL;
	int8_t x163 = -1;
	volatile int32_t t39 = -182748;

	t39 = (x161==((x162==x163)/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 1;
	volatile uint32_t x170 = 3782604U;
	int32_t x172 = INT32_MIN;
	volatile int32_t t40 = 1;

	t40 = (x169==((x170==x171)/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x173 = 2LLU;
	int16_t x174 = 134;
	volatile int32_t x175 = INT32_MIN;
	int16_t x176 = -1;

	t41 = (x173==((x174==x175)/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	int8_t x179 = INT8_MAX;
	uint64_t x180 = 1015868452943424474LLU;
	static int32_t t42 = 42479438;

	t42 = (x177==((x178==x179)/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = -25;
	int32_t x184 = INT32_MIN;
	volatile int32_t t43 = 52826805;

	t43 = (x181==((x182==x183)/x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 403417351U;
	int16_t x186 = INT16_MIN;
	int16_t x187 = -146;
	static volatile int8_t x188 = 1;
	volatile int32_t t44 = 1483;

	t44 = (x185==((x186==x187)/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = UINT8_MAX;
	volatile int8_t x190 = -63;
	uint8_t x191 = UINT8_MAX;
	uint16_t x192 = 187U;
	volatile int32_t t45 = 3;

	t45 = (x189==((x190==x191)/x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	int16_t x195 = -1;
	static int32_t x196 = -1;
	volatile int32_t t46 = 418;

	t46 = (x193==((x194==x195)/x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x197 = -1;
	static uint64_t x198 = UINT64_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t47 = 112419227;

	t47 = (x197==((x198==x199)/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	static int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t48 = -6980;

	t48 = (x201==((x202==x203)/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x205 = 1226LLU;
	int32_t x206 = 1930;
	volatile int64_t x207 = -376800492432809LL;
	volatile uint32_t x208 = 116368U;
	int32_t t49 = -1812;

	t49 = (x205==((x206==x207)/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x210 = INT16_MIN;
	int16_t x211 = -276;
	int16_t x212 = 440;
	volatile int32_t t50 = -3;

	t50 = (x209==((x210==x211)/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MIN;
	uint32_t x216 = 100U;

	t51 = (x213==((x214==x215)/x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	int32_t x218 = 70778;
	static uint64_t x219 = UINT64_MAX;
	volatile int32_t t52 = -39265;

	t52 = (x217==((x218==x219)/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x221 = 7U;
	uint32_t x222 = 134097850U;
	uint64_t x223 = UINT64_MAX;
	volatile int32_t t53 = -11;

	t53 = (x221==((x222==x223)/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x225 = INT64_MAX;
	uint32_t x227 = 7U;
	uint8_t x228 = UINT8_MAX;
	int32_t t54 = 5811;

	t54 = (x225==((x226==x227)/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MIN;
	static volatile uint16_t x231 = UINT16_MAX;
	int16_t x232 = 1;
	volatile int32_t t55 = 2;

	t55 = (x229==((x230==x231)/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = -1LL;
	static volatile int32_t x235 = INT32_MIN;
	uint8_t x236 = UINT8_MAX;
	int32_t t56 = -141;

	t56 = (x233==((x234==x235)/x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = -2;
	int8_t x238 = 7;
	int32_t x239 = INT32_MIN;
	uint64_t x240 = 4573LLU;
	int32_t t57 = 151621941;

	t57 = (x237==((x238==x239)/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int64_t x242 = INT64_MIN;
	static int16_t x243 = INT16_MIN;
	int16_t x244 = 914;
	static int32_t t58 = -3640300;

	t58 = (x241==((x242==x243)/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 13932U;
	uint32_t x246 = 3019U;
	int8_t x247 = 0;
	int16_t x248 = INT16_MAX;

	t59 = (x245==((x246==x247)/x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x250 = INT64_MIN;
	int32_t x251 = 1183764;
	volatile uint16_t x252 = 1U;

	t60 = (x249==((x250==x251)/x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MAX;
	volatile uint8_t x255 = UINT8_MAX;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t61 = 3;

	t61 = (x253==((x254==x255)/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x258 = INT8_MIN;
	int32_t x260 = INT32_MAX;
	volatile int32_t t62 = -703812;

	t62 = (x257==((x258==x259)/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 1361U;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t63 = 1;

	t63 = (x261==((x262==x263)/x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = -1;
	int32_t t64 = -3;

	t64 = (x265==((x266==x267)/x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile int64_t x270 = INT64_MIN;
	uint32_t x271 = 772U;
	int64_t x272 = -2LL;
	volatile int32_t t65 = -149;

	t65 = (x269==((x270==x271)/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = 256;
	int8_t x274 = -1;
	static int16_t x276 = INT16_MIN;
	int32_t t66 = -639;

	t66 = (x273==((x274==x275)/x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x277 = 2143326;
	static uint16_t x279 = 5U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t67 = -361027;

	t67 = (x277==((x278==x279)/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = -79929;
	int8_t x282 = -1;
	int32_t x283 = 6879;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t68 = 1072;

	t68 = (x281==((x282==x283)/x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	static int16_t x288 = -281;
	int32_t t69 = 646362385;

	t69 = (x285==((x286==x287)/x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x291 = -1LL;
	int8_t x292 = 2;
	volatile int32_t t70 = -5063849;

	t70 = (x289==((x290==x291)/x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = 2U;
	int64_t x294 = -56395088119859366LL;
	volatile uint16_t x295 = UINT16_MAX;
	uint32_t x296 = UINT32_MAX;
	int32_t t71 = 41;

	t71 = (x293==((x294==x295)/x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = INT64_MAX;
	volatile uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 2247965U;
	static int32_t t72 = -22458;

	t72 = (x297==((x298==x299)/x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 0LLU;
	int16_t x302 = INT16_MAX;
	int8_t x303 = 2;
	uint8_t x304 = 35U;

	t73 = (x301==((x302==x303)/x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x305 = -901;
	int64_t x306 = -1LL;
	uint8_t x307 = 88U;
	int32_t t74 = 9;

	t74 = (x305==((x306==x307)/x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MAX;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = 40LLU;
	volatile uint64_t x312 = 2702040LLU;
	int32_t t75 = -3592;

	t75 = (x309==((x310==x311)/x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	uint32_t x315 = UINT32_MAX;
	volatile int16_t x316 = -1;
	volatile int32_t t76 = 2502483;

	t76 = (x313==((x314==x315)/x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MIN;
	static int8_t x319 = INT8_MIN;
	int32_t x320 = -1;
	int32_t t77 = 8419;

	t77 = (x317==((x318==x319)/x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = -328001756890214LL;
	int32_t x323 = 12676234;
	int64_t x324 = INT64_MAX;

	t78 = (x321==((x322==x323)/x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 83U;
	int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MAX;
	int32_t t79 = 225;

	t79 = (x329==((x330==x331)/x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 32316174U;
	uint64_t x334 = 817670822LLU;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t80 = 1224898;

	t80 = (x333==((x334==x335)/x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x338 = INT32_MIN;
	volatile uint16_t x339 = UINT16_MAX;
	volatile uint8_t x340 = 40U;
	int32_t t81 = 10207916;

	t81 = (x337==((x338==x339)/x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x342 = INT64_MAX;
	static int32_t x344 = INT32_MIN;

	t82 = (x341==((x342==x343)/x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = -1;
	int64_t x347 = -1LL;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t83 = 13;

	t83 = (x345==((x346==x347)/x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x350 = INT32_MIN;
	static uint64_t x352 = 10509747808959420LLU;
	volatile int32_t t84 = 6;

	t84 = (x349==((x350==x351)/x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 2871U;
	int32_t x354 = -28;
	uint16_t x355 = 1634U;
	int8_t x356 = INT8_MAX;

	t85 = (x353==((x354==x355)/x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = 2;
	uint16_t x358 = 2692U;
	volatile int32_t t86 = 21418;

	t86 = (x357==((x358==x359)/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x362 = INT16_MAX;
	static int8_t x363 = -1;
	static int64_t x364 = -1LL;
	volatile int32_t t87 = -1933632;

	t87 = (x361==((x362==x363)/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x365 = 13045;
	volatile int8_t x366 = INT8_MAX;
	int32_t t88 = 2332088;

	t88 = (x365==((x366==x367)/x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x369 = 206864695469665LL;
	volatile uint16_t x370 = 1553U;
	uint16_t x371 = UINT16_MAX;

	t89 = (x369==((x370==x371)/x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x373 = -1;
	volatile uint16_t x374 = 9U;

	t90 = (x373==((x374==x375)/x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x377 = UINT64_MAX;
	uint16_t x378 = 29386U;
	volatile int16_t x379 = -131;
	static volatile uint16_t x380 = 65U;
	int32_t t91 = -63028098;

	t91 = (x377==((x378==x379)/x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x382 = 21;
	int64_t x383 = 17722926709766840LL;
	volatile int8_t x384 = -1;
	volatile int32_t t92 = -25956323;

	t92 = (x381==((x382==x383)/x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 9U;
	int16_t x386 = 886;
	int64_t x387 = INT64_MAX;
	uint64_t x388 = 15210940272149246LLU;
	int32_t t93 = -5413476;

	t93 = (x385==((x386==x387)/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x390 = INT64_MAX;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;

	t94 = (x389==((x390==x391)/x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x395 = INT16_MIN;

	t95 = (x393==((x394==x395)/x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x398 = INT32_MAX;
	static int8_t x400 = -1;

	t96 = (x397==((x398==x399)/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x402 = 6LLU;
	int8_t x403 = -1;
	static volatile uint8_t x404 = 6U;
	volatile int32_t t97 = -15691;

	t97 = (x401==((x402==x403)/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x406 = -2;
	static int32_t x407 = INT32_MAX;
	int32_t x408 = 8;
	volatile int32_t t98 = -112439;

	t98 = (x405==((x406==x407)/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x409 = 59U;
	int32_t x410 = INT32_MIN;
	int8_t x411 = INT8_MAX;
	static int16_t x412 = INT16_MIN;
	volatile int32_t t99 = 6253988;

	t99 = (x409==((x410==x411)/x412));

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

