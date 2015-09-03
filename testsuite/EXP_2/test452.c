#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int16_t x3 = INT16_MIN;
int16_t x4 = 6109;
static int8_t x6 = INT8_MIN;
int64_t x11 = -1LL;
int32_t x20 = INT32_MIN;
static volatile int32_t x41 = -1;
int32_t t10 = 205579518;
uint8_t x59 = 74U;
int8_t x74 = 0;
int32_t x80 = INT32_MAX;
int32_t x82 = 1249;
int32_t t17 = 16464657;
int8_t x98 = 4;
static volatile int32_t t19 = -1531;
uint64_t x107 = 16841510275992LLU;
int32_t t21 = -198;
volatile int32_t x109 = -302;
int8_t x111 = 0;
int16_t x112 = INT16_MIN;
static int32_t x116 = INT32_MIN;
volatile int32_t t23 = 743942262;
volatile int64_t x123 = -23905407LL;
volatile int16_t x125 = -1;
static volatile int32_t t26 = 57636;
int64_t x138 = INT64_MIN;
static uint64_t x139 = 3LLU;
int32_t t27 = -185961;
int16_t x142 = -1613;
uint32_t x143 = UINT32_MAX;
int32_t t28 = -308172089;
int32_t x150 = -93842;
static volatile int32_t t29 = -34;
static int32_t x160 = -103;
int32_t t32 = -28;
uint64_t x174 = 393651221849107LLU;
uint32_t x182 = UINT32_MAX;
uint32_t x203 = 61U;
int64_t x204 = INT64_MAX;
static int32_t t39 = -1;
int32_t x210 = INT32_MIN;
volatile int32_t t40 = 177;
volatile int64_t x218 = -1LL;
int64_t x222 = -1LL;
uint16_t x229 = 41U;
uint16_t x234 = UINT16_MAX;
static volatile uint16_t x259 = 107U;
volatile int32_t t49 = 6;
volatile int8_t x269 = -55;
uint8_t x270 = UINT8_MAX;
static int32_t t52 = 0;
int16_t x277 = INT16_MIN;
uint32_t x288 = 195301032U;
int64_t x311 = INT64_MIN;
uint8_t x316 = 2U;
int16_t x320 = INT16_MIN;
volatile int32_t t61 = -37;
int32_t t62 = 7;
int16_t x355 = INT16_MIN;
static int64_t x378 = -1LL;
volatile int64_t x380 = 476LL;
uint32_t x385 = UINT32_MAX;
volatile int32_t t71 = 356;
int32_t x396 = INT32_MIN;
int8_t x399 = INT8_MAX;
uint16_t x410 = 1U;
uint32_t x412 = 3U;
int32_t t74 = -219447148;
uint32_t x415 = 5074978U;
static int32_t x424 = -54816295;
uint8_t x427 = 15U;
volatile int32_t t78 = 6;
int64_t x436 = 923LL;
static int32_t x446 = -1;
int32_t t83 = 0;
int32_t t85 = 200406;
static uint64_t x469 = 61594LLU;
volatile int32_t t86 = -327;
int16_t x487 = 0;
uint8_t x508 = 5U;
int8_t x509 = INT8_MIN;
int64_t x515 = -1LL;
static int16_t x517 = -1;
int8_t x519 = INT8_MAX;
static int8_t x521 = INT8_MAX;
uint8_t x525 = 1U;
static int8_t x540 = -13;


void f0(void) {
	static volatile int8_t x1 = -1;
	volatile int32_t t0 = -76633640;

	t0 = ((x1<(x2*x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint16_t x7 = 17371U;
	int64_t x8 = -39LL;
	int32_t t1 = 5186978;

	t1 = ((x5<(x6*x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	volatile uint32_t x10 = 27U;
	static uint16_t x12 = 683U;
	volatile int32_t t2 = 117;

	t2 = ((x9<(x10*x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 5421U;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 0U;
	int8_t x16 = -1;
	volatile int32_t t3 = 1988;

	t3 = ((x13<(x14*x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	int32_t x18 = -1;
	uint32_t x19 = 3351951U;
	int32_t t4 = -14342;

	t4 = ((x17<(x18*x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static volatile uint32_t x22 = UINT32_MAX;
	volatile int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	int32_t t5 = 87187;

	t5 = ((x21<(x22*x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 29;
	uint16_t x26 = 121U;
	volatile uint16_t x27 = 43U;
	static int64_t x28 = -7196846LL;
	volatile int32_t t6 = 6743;

	t6 = ((x25<(x26*x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 11U;
	volatile uint16_t x38 = 834U;
	volatile uint64_t x39 = 100717127LLU;
	volatile uint16_t x40 = 13U;
	int32_t t7 = 13;

	t7 = ((x37<(x38*x39))<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x42 = UINT16_MAX;
	volatile int16_t x43 = -1;
	static volatile int64_t x44 = 10507220499LL;
	volatile int32_t t8 = 2;

	t8 = ((x41<(x42*x43))<=x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x45 = 1769769741U;
	int16_t x46 = INT16_MAX;
	uint16_t x47 = 7838U;
	volatile int32_t x48 = INT32_MAX;
	int32_t t9 = 9102294;

	t9 = ((x45<(x46*x47))<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MAX;
	volatile int8_t x50 = 28;
	int64_t x51 = -48355LL;
	int64_t x52 = -42550226357556041LL;

	t10 = ((x49<(x50*x51))<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MIN;
	int32_t x54 = -1;
	int32_t x55 = -1;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t11 = 982;

	t11 = ((x53<(x54*x55))<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -28;
	volatile int64_t x58 = -34159164200LL;
	static volatile int16_t x60 = -1;
	volatile int32_t t12 = -44558;

	t12 = ((x57<(x58*x59))<=x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 161719284U;
	int16_t x62 = 62;
	static int16_t x63 = INT16_MIN;
	uint64_t x64 = 32LLU;
	static volatile int32_t t13 = 117991514;

	t13 = ((x61<(x62*x63))<=x64);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = INT32_MAX;
	uint32_t x70 = 671607U;
	volatile uint8_t x71 = 0U;
	int64_t x72 = INT64_MAX;
	int32_t t14 = 896741199;

	t14 = ((x69<(x70*x71))<=x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MIN;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = INT16_MIN;
	volatile int32_t t15 = -807491;

	t15 = ((x73<(x74*x75))<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x77 = 0U;
	int32_t x78 = -1;
	int16_t x79 = -3347;
	int32_t t16 = 39727343;

	t16 = ((x77<(x78*x79))<=x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	volatile int8_t x83 = INT8_MAX;
	uint32_t x84 = 61U;

	t17 = ((x81<(x82*x83))<=x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = -1;
	uint8_t x90 = UINT8_MAX;
	uint32_t x91 = 22U;
	int32_t x92 = INT32_MIN;
	int32_t t18 = -7;

	t18 = ((x89<(x90*x91))<=x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = -1LL;
	int32_t x99 = 3;
	static volatile int16_t x100 = INT16_MIN;

	t19 = ((x97<(x98*x99))<=x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x101 = -195196171658766004LL;
	static int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	int16_t x104 = INT16_MIN;
	static volatile int32_t t20 = -28562129;

	t20 = ((x101<(x102*x103))<=x104);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	int64_t x108 = INT64_MIN;

	t21 = ((x105<(x106*x107))<=x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x110 = INT8_MIN;
	int32_t t22 = -96090;

	t22 = ((x109<(x110*x111))<=x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = 1;
	int32_t x115 = INT32_MAX;

	t23 = ((x113<(x114*x115))<=x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x121 = 3690310798698LL;
	int32_t x122 = INT32_MIN;
	int32_t x124 = 4474481;
	volatile int32_t t24 = 11;

	t24 = ((x121<(x122*x123))<=x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x126 = -746;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t25 = -7040;

	t25 = ((x125<(x126*x127))<=x128);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x133 = INT64_MIN;
	volatile int8_t x134 = INT8_MAX;
	int8_t x135 = INT8_MAX;
	static int32_t x136 = INT32_MIN;

	t26 = ((x133<(x134*x135))<=x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x137 = 445279798036922LLU;
	uint16_t x140 = UINT16_MAX;

	t27 = ((x137<(x138*x139))<=x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x141 = 2597U;
	static uint8_t x144 = 1U;

	t28 = ((x141<(x142*x143))<=x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = 67207LL;
	static uint32_t x151 = 2105730U;
	int32_t x152 = INT32_MAX;

	t29 = ((x149<(x150*x151))<=x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = -3;
	int8_t x158 = INT8_MIN;
	static int16_t x159 = INT16_MIN;
	int32_t t30 = -64906778;

	t30 = ((x157<(x158*x159))<=x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x165 = INT16_MAX;
	static int16_t x166 = INT16_MAX;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = -1LL;
	int32_t t31 = 14;

	t31 = ((x165<(x166*x167))<=x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x169 = 633425LLU;
	uint64_t x170 = UINT64_MAX;
	static volatile uint64_t x171 = 108324269430LLU;
	int16_t x172 = 13;

	t32 = ((x169<(x170*x171))<=x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x173 = INT16_MIN;
	volatile int16_t x175 = INT16_MIN;
	static int64_t x176 = 501827367163658LL;
	volatile int32_t t33 = 188794343;

	t33 = ((x173<(x174*x175))<=x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x181 = UINT16_MAX;
	int64_t x183 = -1LL;
	volatile int8_t x184 = INT8_MAX;
	static volatile int32_t t34 = 14551300;

	t34 = ((x181<(x182*x183))<=x184);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = UINT32_MAX;
	int64_t x186 = -1LL;
	static int32_t x187 = INT32_MAX;
	int32_t x188 = 294501775;
	int32_t t35 = -13678;

	t35 = ((x185<(x186*x187))<=x188);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x189 = INT64_MIN;
	static int8_t x190 = INT8_MAX;
	int8_t x191 = 5;
	static int16_t x192 = INT16_MIN;
	int32_t t36 = 1574;

	t36 = ((x189<(x190*x191))<=x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x197 = 127241166189973LLU;
	static int8_t x198 = INT8_MIN;
	static uint16_t x199 = UINT16_MAX;
	uint32_t x200 = UINT32_MAX;
	int32_t t37 = 0;

	t37 = ((x197<(x198*x199))<=x200);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x201 = INT64_MAX;
	uint32_t x202 = 56320149U;
	int32_t t38 = -2533;

	t38 = ((x201<(x202*x203))<=x204);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x205 = -1;
	volatile int64_t x206 = 444426436LL;
	int64_t x207 = -1LL;
	int8_t x208 = INT8_MAX;

	t39 = ((x205<(x206*x207))<=x208);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x209 = INT8_MIN;
	int64_t x211 = -1LL;
	volatile int64_t x212 = -12366908840570LL;

	t40 = ((x209<(x210*x211))<=x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x217 = UINT32_MAX;
	int8_t x219 = -1;
	volatile uint16_t x220 = UINT16_MAX;
	static int32_t t41 = 72;

	t41 = ((x217<(x218*x219))<=x220);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x221 = INT32_MIN;
	int64_t x223 = -1LL;
	int16_t x224 = -1;
	int32_t t42 = -1;

	t42 = ((x221<(x222*x223))<=x224);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x230 = INT32_MAX;
	volatile uint64_t x231 = 3LLU;
	volatile uint32_t x232 = 8528U;
	int32_t t43 = 0;

	t43 = ((x229<(x230*x231))<=x232);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x233 = -13;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = 415LLU;
	int32_t t44 = 124;

	t44 = ((x233<(x234*x235))<=x236);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x237 = INT64_MAX;
	static int16_t x238 = INT16_MIN;
	int64_t x239 = 48LL;
	volatile uint32_t x240 = 86U;
	int32_t t45 = -109;

	t45 = ((x237<(x238*x239))<=x240);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x241 = INT8_MIN;
	volatile uint16_t x242 = 5U;
	static uint8_t x243 = 25U;
	int16_t x244 = -28;
	int32_t t46 = 397;

	t46 = ((x241<(x242*x243))<=x244);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x245 = INT64_MIN;
	static uint32_t x246 = 1444019U;
	int8_t x247 = INT8_MIN;
	int8_t x248 = 1;
	int32_t t47 = 1566;

	t47 = ((x245<(x246*x247))<=x248);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x249 = INT64_MIN;
	int64_t x250 = -1LL;
	static uint8_t x251 = 0U;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t48 = -20;

	t48 = ((x249<(x250*x251))<=x252);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = -337;
	int16_t x258 = -1;
	volatile int32_t x260 = INT32_MAX;

	t49 = ((x257<(x258*x259))<=x260);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x261 = 5293770629769139LLU;
	static int64_t x262 = -1LL;
	int16_t x263 = 84;
	volatile int64_t x264 = INT64_MIN;
	int32_t t50 = 385510;

	t50 = ((x261<(x262*x263))<=x264);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x271 = -1;
	uint8_t x272 = 25U;
	static volatile int32_t t51 = -15;

	t51 = ((x269<(x270*x271))<=x272);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = -1;
	int32_t x275 = 1061;
	int64_t x276 = INT64_MIN;

	t52 = ((x273<(x274*x275))<=x276);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x278 = -5256;
	static int8_t x279 = 0;
	int8_t x280 = INT8_MIN;
	int32_t t53 = 440748;

	t53 = ((x277<(x278*x279))<=x280);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x281 = UINT64_MAX;
	static int64_t x282 = -1LL;
	int32_t x283 = INT32_MIN;
	int8_t x284 = -52;
	static int32_t t54 = -3760885;

	t54 = ((x281<(x282*x283))<=x284);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x285 = INT64_MAX;
	volatile uint32_t x286 = UINT32_MAX;
	static int32_t x287 = INT32_MIN;
	int32_t t55 = -86;

	t55 = ((x285<(x286*x287))<=x288);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x289 = -29;
	uint16_t x290 = 95U;
	static int16_t x291 = INT16_MIN;
	uint64_t x292 = UINT64_MAX;
	static int32_t t56 = 590156;

	t56 = ((x289<(x290*x291))<=x292);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = INT8_MIN;
	uint16_t x294 = 90U;
	volatile int8_t x295 = -13;
	volatile int8_t x296 = INT8_MAX;
	static volatile int32_t t57 = 463362168;

	t57 = ((x293<(x294*x295))<=x296);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x309 = 170U;
	uint8_t x310 = 0U;
	static int32_t x312 = INT32_MIN;
	static int32_t t58 = 1;

	t58 = ((x309<(x310*x311))<=x312);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x313 = -29028722794069696LL;
	int8_t x314 = 1;
	static volatile int32_t x315 = 31798906;
	int32_t t59 = -2279343;

	t59 = ((x313<(x314*x315))<=x316);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = 6;
	int8_t x318 = 9;
	static int16_t x319 = -1;
	volatile int32_t t60 = -3;

	t60 = ((x317<(x318*x319))<=x320);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x333 = INT32_MIN;
	int32_t x334 = -8349;
	int16_t x335 = 1;
	volatile int64_t x336 = INT64_MIN;

	t61 = ((x333<(x334*x335))<=x336);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x337 = 0;
	volatile uint32_t x338 = UINT32_MAX;
	int16_t x339 = 2;
	volatile uint16_t x340 = 1138U;

	t62 = ((x337<(x338*x339))<=x340);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x341 = 538U;
	volatile int32_t x342 = 0;
	volatile uint16_t x343 = 1U;
	static int64_t x344 = -1LL;
	volatile int32_t t63 = -519133;

	t63 = ((x341<(x342*x343))<=x344);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = -1;
	int16_t x350 = -942;
	static uint16_t x351 = 226U;
	uint64_t x352 = 175042LLU;
	int32_t t64 = -18517582;

	t64 = ((x349<(x350*x351))<=x352);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x353 = 395U;
	int8_t x354 = 1;
	volatile int16_t x356 = INT16_MAX;
	int32_t t65 = 665;

	t65 = ((x353<(x354*x355))<=x356);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x357 = INT32_MAX;
	volatile int32_t x358 = -1;
	uint16_t x359 = 2422U;
	int8_t x360 = INT8_MIN;
	volatile int32_t t66 = -321504287;

	t66 = ((x357<(x358*x359))<=x360);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x361 = 708U;
	int8_t x362 = -1;
	static int16_t x363 = -11809;
	int64_t x364 = INT64_MAX;
	volatile int32_t t67 = -1887339;

	t67 = ((x361<(x362*x363))<=x364);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x369 = 7;
	int64_t x370 = -1LL;
	int64_t x371 = -1LL;
	volatile int16_t x372 = INT16_MAX;
	int32_t t68 = -147117;

	t68 = ((x369<(x370*x371))<=x372);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x377 = -1LL;
	volatile int8_t x379 = INT8_MAX;
	volatile int32_t t69 = 58575;

	t69 = ((x377<(x378*x379))<=x380);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x381 = UINT32_MAX;
	volatile uint32_t x382 = 11100029U;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = -1;
	int32_t t70 = -29611;

	t70 = ((x381<(x382*x383))<=x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x386 = 27067U;
	volatile uint64_t x387 = UINT64_MAX;
	uint8_t x388 = 2U;

	t71 = ((x385<(x386*x387))<=x388);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x393 = UINT32_MAX;
	uint64_t x394 = 799183814LLU;
	uint32_t x395 = 18U;
	volatile int32_t t72 = 8;

	t72 = ((x393<(x394*x395))<=x396);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = -8;
	int16_t x398 = -1;
	static int64_t x400 = INT64_MIN;
	int32_t t73 = 1604;

	t73 = ((x397<(x398*x399))<=x400);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x409 = UINT16_MAX;
	int64_t x411 = -87200016684037LL;

	t74 = ((x409<(x410*x411))<=x412);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x413 = -3LL;
	uint16_t x414 = 24U;
	uint32_t x416 = 7U;
	static int32_t t75 = 166761;

	t75 = ((x413<(x414*x415))<=x416);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x417 = INT32_MIN;
	static int8_t x418 = 1;
	int8_t x419 = INT8_MAX;
	int32_t x420 = 21100;
	volatile int32_t t76 = -71;

	t76 = ((x417<(x418*x419))<=x420);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x421 = -1;
	uint8_t x422 = 6U;
	int16_t x423 = INT16_MIN;
	static volatile int32_t t77 = -24;

	t77 = ((x421<(x422*x423))<=x424);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MAX;
	uint64_t x428 = 1023711647109LLU;

	t78 = ((x425<(x426*x427))<=x428);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x433 = 6897U;
	static int16_t x434 = -1;
	static int8_t x435 = -1;
	volatile int32_t t79 = 2147;

	t79 = ((x433<(x434*x435))<=x436);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x437 = -1;
	int32_t x438 = -1;
	uint64_t x439 = 1360078611001718654LLU;
	static uint64_t x440 = 55821617347753096LLU;
	int32_t t80 = 0;

	t80 = ((x437<(x438*x439))<=x440);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x445 = 206091U;
	int64_t x447 = INT64_MAX;
	int8_t x448 = -1;
	volatile int32_t t81 = 55623380;

	t81 = ((x445<(x446*x447))<=x448);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x449 = INT16_MIN;
	int16_t x450 = INT16_MIN;
	uint16_t x451 = 2003U;
	uint16_t x452 = 882U;
	volatile int32_t t82 = 3;

	t82 = ((x449<(x450*x451))<=x452);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x453 = INT16_MAX;
	uint32_t x454 = 3U;
	int16_t x455 = 671;
	volatile uint8_t x456 = UINT8_MAX;

	t83 = ((x453<(x454*x455))<=x456);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x457 = 2U;
	static int16_t x458 = -1;
	int32_t x459 = 53439;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t84 = -3429891;

	t84 = ((x457<(x458*x459))<=x460);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x461 = 120U;
	uint16_t x462 = 0U;
	uint32_t x463 = 58951928U;
	volatile int16_t x464 = -12646;

	t85 = ((x461<(x462*x463))<=x464);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x470 = -15;
	uint64_t x471 = 12752973594071700LLU;
	volatile int32_t x472 = -81121;

	t86 = ((x469<(x470*x471))<=x472);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x477 = 1;
	int16_t x478 = INT16_MAX;
	static uint32_t x479 = 2320474U;
	int32_t x480 = -7;
	int32_t t87 = 1;

	t87 = ((x477<(x478*x479))<=x480);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x481 = INT64_MIN;
	uint64_t x482 = UINT64_MAX;
	uint64_t x483 = 88578290696717621LLU;
	int8_t x484 = -1;
	volatile int32_t t88 = 963474835;

	t88 = ((x481<(x482*x483))<=x484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x485 = UINT16_MAX;
	static int16_t x486 = 10711;
	int8_t x488 = -37;
	int32_t t89 = -4;

	t89 = ((x485<(x486*x487))<=x488);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x493 = UINT16_MAX;
	uint32_t x494 = UINT32_MAX;
	int8_t x495 = -1;
	volatile int16_t x496 = -650;
	int32_t t90 = -1;

	t90 = ((x493<(x494*x495))<=x496);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x501 = INT8_MIN;
	uint8_t x502 = 27U;
	int16_t x503 = INT16_MIN;
	int16_t x504 = -8344;
	volatile int32_t t91 = 8723;

	t91 = ((x501<(x502*x503))<=x504);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x505 = 13U;
	int64_t x506 = -4475675814470239722LL;
	static volatile int32_t x507 = -1;
	volatile int32_t t92 = 9889;

	t92 = ((x505<(x506*x507))<=x508);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x510 = -5;
	uint8_t x511 = UINT8_MAX;
	int8_t x512 = 32;
	int32_t t93 = -476352;

	t93 = ((x509<(x510*x511))<=x512);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x513 = -1;
	int8_t x514 = 9;
	int16_t x516 = INT16_MAX;
	volatile int32_t t94 = -13;

	t94 = ((x513<(x514*x515))<=x516);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x518 = 1U;
	int16_t x520 = INT16_MIN;
	static volatile int32_t t95 = 130950;

	t95 = ((x517<(x518*x519))<=x520);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x522 = 8655LL;
	int8_t x523 = INT8_MIN;
	int64_t x524 = -1LL;
	static volatile int32_t t96 = 13924;

	t96 = ((x521<(x522*x523))<=x524);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x526 = 94460836U;
	uint32_t x527 = 6534U;
	static int16_t x528 = INT16_MIN;
	volatile int32_t t97 = -490852;

	t97 = ((x525<(x526*x527))<=x528);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x533 = INT32_MIN;
	static int16_t x534 = 6807;
	int16_t x535 = -1;
	static uint32_t x536 = 208858707U;
	volatile int32_t t98 = -1578;

	t98 = ((x533<(x534*x535))<=x536);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x537 = INT64_MAX;
	int16_t x538 = 4998;
	uint16_t x539 = 20U;
	static volatile int32_t t99 = 145617;

	t99 = ((x537<(x538*x539))<=x540);

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

