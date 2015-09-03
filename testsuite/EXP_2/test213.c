#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -1782501862280942LL;
static uint64_t x8 = 489740107LLU;
int32_t x9 = -1;
volatile int16_t x16 = -120;
int64_t t3 = 486916157LL;
volatile int32_t x20 = 101741;
int32_t x24 = INT32_MIN;
int16_t x25 = INT16_MIN;
static int16_t x33 = INT16_MIN;
static uint32_t x34 = 7748111U;
volatile uint64_t t9 = 73012370960LLU;
uint32_t x51 = 276U;
uint64_t x52 = 47487193410541LLU;
int8_t x54 = INT8_MAX;
volatile int8_t x57 = 0;
static volatile int32_t t13 = -172513;
static volatile int64_t x75 = -52247873407LL;
int32_t x82 = 42073020;
volatile uint64_t t17 = 1855465540889609LLU;
int16_t x88 = INT16_MIN;
static volatile int64_t t18 = 0LL;
uint64_t t19 = 29106983696858309LLU;
uint64_t x98 = 47913LLU;
int32_t x104 = INT32_MIN;
int64_t t21 = -793521LL;
uint16_t x108 = 2U;
int64_t x116 = -1LL;
volatile uint32_t x132 = UINT32_MAX;
uint32_t t27 = 7U;
static volatile int32_t t28 = -54;
int16_t x143 = 7245;
int32_t x148 = INT32_MAX;
uint16_t x163 = UINT16_MAX;
int32_t t34 = -12597023;
int32_t t35 = 1;
static int32_t x173 = -1;
uint16_t x178 = UINT16_MAX;
int32_t x183 = -1;
static volatile uint64_t t39 = 903641430501201LLU;
volatile uint16_t x185 = 393U;
static int64_t x207 = INT64_MAX;
static uint8_t x218 = 2U;
int8_t x220 = -4;
int32_t x223 = INT32_MIN;
static int8_t x224 = INT8_MIN;
volatile uint64_t t47 = 637079713465111LLU;
uint64_t t48 = 11LLU;
int32_t x234 = -2039897;
int32_t x243 = -30;
int16_t x255 = -1;
static int16_t x260 = INT16_MAX;
int8_t x261 = -12;
static int8_t x268 = INT8_MAX;
volatile int8_t x277 = 1;
volatile uint64_t x295 = 32604622312081225LLU;
static int8_t x296 = INT8_MIN;
volatile uint64_t t61 = 61570336675665LLU;
volatile int32_t x297 = INT32_MAX;
uint8_t x299 = 23U;
volatile int32_t t62 = -7;
volatile int8_t x305 = -2;
static volatile int16_t x307 = INT16_MIN;
int64_t x308 = INT64_MIN;
volatile int16_t x309 = 58;
static volatile int64_t x310 = -1LL;
uint16_t x317 = UINT16_MAX;
volatile uint32_t x319 = UINT32_MAX;
int64_t t68 = -23583LL;
int16_t x333 = 43;
int64_t x346 = -439287049678LL;
static int64_t t71 = -108237149LL;
static volatile int32_t x351 = INT32_MIN;
volatile int32_t x353 = INT32_MIN;
int8_t x355 = -1;
static int8_t x367 = -1;
int64_t x368 = -1LL;
volatile int64_t t76 = 29774030938045923LL;
volatile int64_t t77 = -3463963351LL;
int16_t x402 = -1;
int32_t x403 = INT32_MIN;
static int32_t t82 = 2;
volatile uint64_t x405 = UINT64_MAX;
uint32_t x407 = 5185754U;
uint32_t x408 = UINT32_MAX;
static uint64_t t83 = 7980336LLU;
volatile int64_t x414 = -10028443189LL;
static int64_t x415 = 152801798132284397LL;
static volatile uint16_t x419 = UINT16_MAX;
static int16_t x420 = INT16_MAX;
volatile int16_t x421 = INT16_MIN;
volatile int64_t t88 = -1LL;
int8_t x434 = INT8_MIN;
uint64_t x436 = 93516252999977LLU;
uint32_t x442 = 69U;
int8_t x454 = 3;
static int32_t x455 = INT32_MAX;
uint8_t x456 = 15U;
int8_t x459 = INT8_MAX;
int16_t x462 = INT16_MIN;
uint32_t x464 = 25020740U;
uint64_t x470 = 7301858241LLU;


void f0(void) {
	uint32_t x1 = 706U;
	volatile uint16_t x2 = 755U;
	volatile int64_t x3 = -51362LL;
	static volatile int8_t x4 = INT8_MIN;

	t0 = ((x1/(x2-x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int16_t x6 = INT16_MIN;
	static int32_t x7 = INT32_MIN;
	uint64_t t1 = 718786083477171LLU;

	t1 = ((x5/(x6-x7))%x8);

	if (t1 != 485600008LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1768;
	static uint8_t x11 = 63U;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -2;

	t2 = ((x9/(x10-x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1802404781250LL;
	static uint8_t x14 = UINT8_MAX;
	int64_t x15 = INT64_MAX;

	t3 = ((x13/(x14-x15))%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 7U;
	volatile int16_t x18 = INT16_MIN;
	volatile int32_t x19 = INT32_MIN;
	volatile int32_t t4 = -27893;

	t4 = ((x17/(x18-x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	static uint64_t x23 = 47LLU;
	uint64_t t5 = 3681LLU;

	t5 = ((x21/(x22-x23))%x24);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	volatile uint64_t x27 = 9174402LLU;
	uint16_t x28 = UINT16_MAX;
	volatile uint64_t t6 = 3LLU;

	t6 = ((x25/(x26-x27))%x28);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -6;
	volatile int64_t x30 = INT64_MAX;
	int32_t x31 = 1185542;
	uint32_t x32 = UINT32_MAX;
	static volatile int64_t t7 = -452727955829LL;

	t7 = ((x29/(x30-x31))%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x35 = 109U;
	uint16_t x36 = 6777U;
	static volatile uint32_t t8 = 2117921292U;

	t8 = ((x33/(x34-x35))%x36);

	if (t8 != 554U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x41 = 185528523408976988LLU;
	int16_t x42 = INT16_MIN;
	static int64_t x43 = INT64_MIN;
	uint32_t x44 = 1839788553U;

	t9 = ((x41/(x42-x43))%x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -137693288LL;
	int16_t x46 = INT16_MAX;
	int64_t x47 = -58070966069341LL;
	int8_t x48 = INT8_MIN;
	int64_t t10 = -648176580242LL;

	t10 = ((x45/(x46-x47))%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 8U;
	uint16_t x50 = 30169U;
	uint64_t t11 = 1LLU;

	t11 = ((x49/(x50-x51))%x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MIN;
	static int32_t t12 = 10228;

	t12 = ((x53/(x54-x55))%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x58 = -1;
	static uint8_t x59 = 1U;
	int32_t x60 = -3635;

	t13 = ((x57/(x58-x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = -5514633432758923LL;
	uint8_t x70 = UINT8_MAX;
	int16_t x71 = 5910;
	uint16_t x72 = UINT16_MAX;
	int64_t t14 = -236717402240LL;

	t14 = ((x69/(x70-x71))%x72);

	if (t14 != 28018LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	int8_t x74 = -1;
	uint64_t x76 = 52LLU;
	uint64_t t15 = 5145393754668396867LLU;

	t15 = ((x73/(x74-x75))%x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x77 = INT64_MIN;
	uint64_t x78 = 1933837843LLU;
	int32_t x79 = INT32_MIN;
	static volatile int64_t x80 = -1LL;
	volatile uint64_t t16 = 508527248007144389LLU;

	t16 = ((x77/(x78-x79))%x80);

	if (t16 != 2259898431LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	uint64_t x83 = UINT64_MAX;
	static volatile int64_t x84 = 512630LL;

	t17 = ((x81/(x82-x83))%x84);

	if (t17 != 137445LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x85 = INT64_MAX;
	static int32_t x86 = INT32_MIN;
	static int16_t x87 = -9;

	t18 = ((x85/(x86-x87))%x88);

	if (t18 != -18LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	volatile uint64_t x90 = 91602758617LLU;
	int32_t x91 = -1;
	volatile int16_t x92 = -1;

	t19 = ((x89/(x90-x91))%x92);

	if (t19 != 201377604LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int8_t x99 = 0;
	int32_t x100 = -1751320;
	uint64_t t20 = 59256590668162420LLU;

	t20 = ((x97/(x98-x99))%x100);

	if (t20 != 385004989746196LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = -1LL;
	static uint32_t x102 = UINT32_MAX;
	int8_t x103 = 62;

	t21 = ((x101/(x102-x103))%x104);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MAX;
	uint8_t x106 = UINT8_MAX;
	static int16_t x107 = INT16_MIN;
	int64_t t22 = -230345849284221533LL;

	t22 = ((x105/(x106-x107))%x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = UINT32_MAX;
	uint64_t x110 = 468370398237879LLU;
	uint16_t x111 = UINT16_MAX;
	uint32_t x112 = UINT32_MAX;
	static volatile uint64_t t23 = 665870931812941LLU;

	t23 = ((x109/(x110-x111))%x112);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = -1;
	int64_t x114 = -1LL;
	volatile int16_t x115 = INT16_MAX;
	volatile int64_t t24 = -3536787LL;

	t24 = ((x113/(x114-x115))%x116);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MAX;
	static volatile uint8_t x118 = 61U;
	volatile int32_t x119 = INT32_MAX;
	static volatile int8_t x120 = -1;
	int32_t t25 = 1267;

	t25 = ((x117/(x118-x119))%x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	static int16_t x126 = 0;
	uint16_t x127 = 9187U;
	uint64_t x128 = 4486121447LLU;
	uint64_t t26 = 873LLU;

	t26 = ((x125/(x126-x127))%x128);

	if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = INT32_MIN;
	int8_t x130 = 1;
	int8_t x131 = INT8_MIN;

	t27 = ((x129/(x130-x131))%x132);

	if (t27 != 4278320136U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = -1;
	static int16_t x134 = INT16_MIN;
	int16_t x135 = -213;
	int8_t x136 = INT8_MAX;

	t28 = ((x133/(x134-x135))%x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	static uint32_t x138 = UINT32_MAX;
	uint64_t x139 = 206345284775093461LLU;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t29 = 16825LLU;

	t29 = ((x137/(x138-x139))%x140);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x141 = -1123169542LL;
	static int32_t x142 = 25410172;
	static uint64_t x144 = 1213986630839LLU;
	volatile uint64_t t30 = 1180411LLU;

	t30 = ((x141/(x142-x143))%x144);

	if (t30 != 1128490657230LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = 0;
	uint64_t x146 = 66977143LLU;
	int16_t x147 = INT16_MIN;
	volatile uint64_t t31 = 3659728LLU;

	t31 = ((x145/(x146-x147))%x148);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = -1;
	volatile uint64_t x154 = 34416515783LLU;
	volatile uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 70U;
	static volatile uint64_t t32 = 1294LLU;

	t32 = ((x153/(x154-x155))%x156);

	if (t32 != 29LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x157 = INT16_MAX;
	static int16_t x158 = INT16_MAX;
	int8_t x159 = INT8_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t33 = -12434LL;

	t33 = ((x157/(x158-x159))%x160);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = INT32_MAX;
	uint16_t x164 = UINT16_MAX;

	t34 = ((x161/(x162-x163))%x164);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 2U;
	volatile uint16_t x166 = 0U;
	volatile int32_t x167 = -1;
	uint8_t x168 = 51U;

	t35 = ((x165/(x166-x167))%x168);

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MAX;
	volatile uint32_t x170 = 1U;
	int32_t x171 = 8;
	static int64_t x172 = INT64_MAX;
	int64_t t36 = -1181609931948115165LL;

	t36 = ((x169/(x170-x171))%x172);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = 26854;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t37 = 287LLU;

	t37 = ((x173/(x174-x175))%x176);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = 10466U;
	uint64_t x179 = 3040LLU;
	int32_t x180 = INT32_MIN;
	uint64_t t38 = 53027380LLU;

	t38 = ((x177/(x178-x179))%x180);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = 13867070665215219LLU;
	int64_t x182 = -8220752670984LL;
	volatile uint8_t x184 = 28U;

	t39 = ((x181/(x182-x183))%x184);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x186 = 3;
	static int64_t x187 = -190LL;
	uint64_t x188 = UINT64_MAX;
	uint64_t t40 = 251LLU;

	t40 = ((x185/(x186-x187))%x188);

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MIN;
	volatile int32_t x190 = 67;
	int16_t x191 = 245;
	uint16_t x192 = 23443U;
	volatile int32_t t41 = 4398073;

	t41 = ((x189/(x190-x191))%x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x193 = -1;
	uint8_t x194 = 12U;
	int8_t x195 = INT8_MAX;
	volatile int16_t x196 = 5015;
	int32_t t42 = -3;

	t42 = ((x193/(x194-x195))%x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = 7U;
	static int16_t x206 = INT16_MAX;
	int64_t x208 = INT64_MIN;
	int64_t t43 = 2110593LL;

	t43 = ((x205/(x206-x207))%x208);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = 8631;
	uint8_t x215 = UINT8_MAX;
	int8_t x216 = 5;
	static int32_t t44 = -111;

	t44 = ((x213/(x214-x215))%x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = INT64_MAX;
	static volatile int32_t x219 = 52;
	static int64_t t45 = 0LL;

	t45 = ((x217/(x218-x219))%x220);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MAX;
	static volatile int16_t x222 = -1;
	volatile int32_t t46 = -1363;

	t46 = ((x221/(x222-x223))%x224);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = 1018359;
	uint32_t x226 = 18381989U;
	uint64_t x227 = 22LLU;
	static int64_t x228 = INT64_MIN;

	t47 = ((x225/(x226-x227))%x228);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = INT32_MAX;
	uint64_t x231 = 13085969197136LLU;
	uint8_t x232 = UINT8_MAX;

	t48 = ((x229/(x230-x231))%x232);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = -50;
	volatile uint8_t x235 = 11U;
	int16_t x236 = -37;
	volatile int32_t t49 = -55120;

	t49 = ((x233/(x234-x235))%x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x237 = 10LLU;
	int16_t x238 = -2;
	int8_t x239 = INT8_MAX;
	uint32_t x240 = 12019323U;
	uint64_t t50 = 1256301LLU;

	t50 = ((x237/(x238-x239))%x240);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x241 = INT32_MAX;
	static int64_t x242 = INT64_MIN;
	uint64_t x244 = 8310273625936872LLU;
	uint64_t t51 = 231089157056104LLU;

	t51 = ((x241/(x242-x243))%x244);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = -1;
	volatile uint32_t x246 = 344U;
	volatile uint16_t x247 = UINT16_MAX;
	int8_t x248 = -48;
	uint32_t t52 = 208U;

	t52 = ((x245/(x246-x247))%x248);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = INT8_MAX;
	uint32_t x250 = 28325U;
	int16_t x251 = -59;
	uint32_t x252 = 20254781U;
	uint32_t t53 = 178936122U;

	t53 = ((x249/(x250-x251))%x252);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MAX;
	uint32_t x256 = 1939242U;
	volatile uint32_t t54 = 17624040U;

	t54 = ((x253/(x254-x255))%x256);

	if (t54 != 1485252U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = 1;
	static int64_t x259 = 387079LL;
	int64_t t55 = -3LL;

	t55 = ((x257/(x258-x259))%x260);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x262 = 1;
	uint16_t x263 = 512U;
	int32_t x264 = 105164609;
	static volatile int32_t t56 = 300544142;

	t56 = ((x261/(x262-x263))%x264);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x265 = 1U;
	uint64_t x266 = 7666LLU;
	int32_t x267 = INT32_MIN;
	static volatile uint64_t t57 = 13330685109038092LLU;

	t57 = ((x265/(x266-x267))%x268);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x269 = 182750073U;
	uint16_t x270 = 1912U;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -320LL;
	int64_t t58 = 103332954089640LL;

	t58 = ((x269/(x270-x271))%x272);

	if (t58 != 303LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x278 = 435LL;
	volatile int64_t x279 = -2LL;
	int64_t x280 = -2LL;
	int64_t t59 = 16819151813349914LL;

	t59 = ((x277/(x278-x279))%x280);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x289 = 5U;
	int16_t x290 = 1456;
	static uint8_t x291 = 37U;
	int16_t x292 = INT16_MAX;
	volatile int32_t t60 = -6485163;

	t60 = ((x289/(x290-x291))%x292);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x293 = 10U;
	uint8_t x294 = 1U;

	t61 = ((x293/(x294-x295))%x296);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x298 = -1;
	int8_t x300 = -1;

	t62 = ((x297/(x298-x299))%x300);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = UINT32_MAX;
	uint64_t x302 = UINT64_MAX;
	uint32_t x303 = 126607U;
	volatile uint64_t x304 = 356411321853480LLU;
	volatile uint64_t t63 = 280358925096343165LLU;

	t63 = ((x301/(x302-x303))%x304);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x306 = 510782158LLU;
	static volatile uint64_t t64 = 1219573729319291LLU;

	t64 = ((x305/(x306-x307))%x308);

	if (t64 != 36112382655LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	static volatile int64_t t65 = -3868800070247LL;

	t65 = ((x309/(x310-x311))%x312);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x318 = -4979738703901929LL;
	int8_t x320 = INT8_MAX;
	volatile int64_t t66 = -761664163161LL;

	t66 = ((x317/(x318-x319))%x320);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x325 = 3;
	int32_t x326 = -1;
	int64_t x327 = -296575662206616LL;
	volatile int32_t x328 = -1;
	int64_t t67 = -3474679257161929754LL;

	t67 = ((x325/(x326-x327))%x328);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = INT8_MAX;
	static int64_t x330 = -1LL;
	int64_t x331 = INT64_MAX;
	volatile uint8_t x332 = UINT8_MAX;

	t68 = ((x329/(x330-x331))%x332);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x334 = 1U;
	uint16_t x335 = UINT16_MAX;
	int16_t x336 = -981;
	int32_t t69 = 6;

	t69 = ((x333/(x334-x335))%x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x337 = 10U;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = -45556158;
	uint8_t x340 = 1U;
	volatile int32_t t70 = -1;

	t70 = ((x337/(x338-x339))%x340);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x345 = INT8_MAX;
	volatile int16_t x347 = 6654;
	uint8_t x348 = 41U;

	t71 = ((x345/(x346-x347))%x348);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x349 = 8020435534LLU;
	uint64_t x350 = UINT64_MAX;
	uint64_t x352 = 1122LLU;
	uint64_t t72 = 540651213131LLU;

	t72 = ((x349/(x350-x351))%x352);

	if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x354 = UINT16_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t73 = 34193669937816LLU;

	t73 = ((x353/(x354-x355))%x356);

	if (t73 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x357 = 16728459812975LLU;
	static volatile int32_t x358 = INT32_MAX;
	uint8_t x359 = 3U;
	uint64_t x360 = 37733473LLU;
	static uint64_t t74 = 3220509231LLU;

	t74 = ((x357/(x358-x359))%x360);

	if (t74 != 7789LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x361 = UINT8_MAX;
	uint32_t x362 = 66875203U;
	int32_t x363 = INT32_MIN;
	static uint16_t x364 = UINT16_MAX;
	uint32_t t75 = 29U;

	t75 = ((x361/(x362-x363))%x364);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x365 = INT32_MIN;
	volatile int16_t x366 = INT16_MIN;

	t76 = ((x365/(x366-x367))%x368);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = INT64_MIN;
	int64_t x370 = -33811026512LL;
	int16_t x371 = INT16_MIN;
	volatile int64_t x372 = -1LL;

	t77 = ((x369/(x370-x371))%x372);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x373 = 8U;
	static int64_t x374 = INT64_MIN;
	int8_t x375 = -1;
	uint16_t x376 = 3U;
	static volatile int64_t t78 = 0LL;

	t78 = ((x373/(x374-x375))%x376);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	volatile int16_t x387 = -3;
	int64_t x388 = -1LL;
	int64_t t79 = 9LL;

	t79 = ((x385/(x386-x387))%x388);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x389 = -13;
	int64_t x390 = -1LL;
	int16_t x391 = 276;
	int8_t x392 = INT8_MAX;
	volatile int64_t t80 = -4781287LL;

	t80 = ((x389/(x390-x391))%x392);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = 12435U;
	int8_t x398 = INT8_MIN;
	uint64_t x399 = 0LLU;
	int16_t x400 = -1;
	volatile uint64_t t81 = 234708943589627LLU;

	t81 = ((x397/(x398-x399))%x400);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x401 = INT16_MIN;
	int16_t x404 = -57;

	t82 = ((x401/(x402-x403))%x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x406 = 728828818;

	t83 = ((x405/(x406-x407))%x408);

	if (t83 != 4016659251LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = -1;
	volatile int8_t x410 = -7;
	int16_t x411 = INT16_MAX;
	int16_t x412 = INT16_MAX;
	static int32_t t84 = -1298;

	t84 = ((x409/(x410-x411))%x412);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x413 = -1LL;
	uint16_t x416 = UINT16_MAX;
	int64_t t85 = 811261555LL;

	t85 = ((x413/(x414-x415))%x416);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x417 = -1LL;
	int8_t x418 = -1;
	int64_t t86 = 52468504381LL;

	t86 = ((x417/(x418-x419))%x420);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x422 = INT8_MIN;
	uint16_t x423 = UINT16_MAX;
	int16_t x424 = INT16_MIN;
	volatile int32_t t87 = 23904364;

	t87 = ((x421/(x422-x423))%x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x425 = INT16_MIN;
	uint8_t x426 = 1U;
	int64_t x427 = INT64_MAX;
	int32_t x428 = INT32_MIN;

	t88 = ((x425/(x426-x427))%x428);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x433 = INT16_MIN;
	uint16_t x435 = 1885U;
	static uint64_t t89 = 26068722021093660LLU;

	t89 = ((x433/(x434-x435))%x436);

	if (t89 != 16LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x437 = 7U;
	static uint16_t x438 = 10483U;
	int64_t x439 = -1LL;
	int32_t x440 = -1;
	static int64_t t90 = 190924074885LL;

	t90 = ((x437/(x438-x439))%x440);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x441 = UINT16_MAX;
	static int32_t x443 = -1084;
	volatile uint16_t x444 = UINT16_MAX;
	static volatile uint32_t t91 = 260671U;

	t91 = ((x441/(x442-x443))%x444);

	if (t91 != 56U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x445 = 10425;
	int8_t x446 = INT8_MAX;
	uint8_t x447 = 3U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t92 = 6738602;

	t92 = ((x445/(x446-x447))%x448);

	if (t92 != 84) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x449 = UINT8_MAX;
	int16_t x450 = 6449;
	volatile int64_t x451 = INT64_MAX;
	uint16_t x452 = 3321U;
	int64_t t93 = 127481537477LL;

	t93 = ((x449/(x450-x451))%x452);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x453 = 7;
	int32_t t94 = 606;

	t94 = ((x453/(x454-x455))%x456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x457 = UINT64_MAX;
	int16_t x458 = INT16_MIN;
	volatile uint32_t x460 = UINT32_MAX;
	uint64_t t95 = 21120535451800LLU;

	t95 = ((x457/(x458-x459))%x460);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x461 = INT64_MIN;
	static int16_t x463 = INT16_MAX;
	static volatile int64_t t96 = 1LL;

	t96 = ((x461/(x462-x463))%x464);

	if (t96 != 51684LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x469 = -1LL;
	static int64_t x471 = INT64_MAX;
	int32_t x472 = INT32_MIN;
	volatile uint64_t t97 = 19446LLU;

	t97 = ((x469/(x470-x471))%x472);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = INT64_MIN;
	static int8_t x474 = 11;
	uint32_t x475 = UINT32_MAX;
	int16_t x476 = 469;
	int64_t t98 = -562626457LL;

	t98 = ((x473/(x474-x475))%x476);

	if (t98 != -14LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = 25668LL;
	static uint64_t x478 = 244289491LLU;
	static int16_t x479 = INT16_MIN;
	uint64_t x480 = 886396482407LLU;
	uint64_t t99 = 6564477621001LLU;

	t99 = ((x477/(x478-x479))%x480);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

