#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = -28;
volatile int32_t t0 = 180;
int8_t x5 = -6;
static int64_t x7 = INT64_MIN;
static volatile int8_t x13 = 7;
uint64_t x14 = 269763364588LLU;
int64_t x15 = 389917131652LL;
uint32_t x16 = UINT32_MAX;
volatile int64_t x17 = INT64_MIN;
int64_t x18 = -150715091115248LL;
int64_t x19 = -1572368LL;
uint8_t x25 = 1U;
int64_t x27 = -1LL;
int16_t x28 = -1;
int32_t x29 = INT32_MAX;
int64_t x34 = INT64_MAX;
volatile int8_t x36 = 30;
int8_t x37 = 0;
int32_t x44 = 1;
int16_t x48 = INT16_MAX;
int8_t x51 = INT8_MIN;
int64_t x52 = INT64_MIN;
int16_t x53 = -253;
int16_t x54 = -29;
uint32_t x55 = 7816U;
static int16_t x62 = INT16_MIN;
uint8_t x65 = 99U;
int32_t x68 = -1;
uint64_t x71 = 251LLU;
uint8_t x77 = 40U;
static uint32_t x80 = 483402713U;
uint32_t t18 = 27305U;
uint16_t x91 = UINT16_MAX;
int16_t x92 = INT16_MAX;
int16_t x100 = 13;
volatile int32_t t23 = 677218250;
uint64_t x108 = 6648163877LLU;
static volatile int64_t x111 = -1501294161577798702LL;
int32_t x112 = 39;
int32_t t26 = 1465;
volatile int8_t x116 = 4;
uint16_t x119 = UINT16_MAX;
int32_t x122 = -1;
uint16_t x123 = 15U;
int64_t x125 = -1LL;
int32_t t30 = 1700006;
int32_t t31 = 693;
static int16_t x133 = INT16_MAX;
int8_t x134 = 7;
static volatile uint8_t x138 = 0U;
int32_t t33 = -21;
volatile uint64_t x144 = 4373013979070698206LLU;
int32_t t35 = -1844819;
int16_t x165 = -1596;
volatile int8_t x168 = INT8_MIN;
int8_t x188 = INT8_MIN;
volatile uint32_t t44 = 654639343U;
int32_t t45 = INT32_MAX;
int64_t x204 = INT64_MAX;
int8_t x209 = INT8_MIN;
static int32_t x212 = INT32_MIN;
int64_t x213 = -198157641647LL;
uint64_t x216 = 3101LLU;
static uint64_t t49 = 43578903092010LLU;
static volatile int8_t x223 = INT8_MIN;
static uint16_t x224 = UINT16_MAX;
uint64_t x226 = UINT64_MAX;
static volatile int32_t x232 = INT32_MIN;
uint16_t x236 = 4583U;
volatile int16_t x246 = -1;
int8_t x249 = INT8_MIN;
static int8_t x252 = 8;
int32_t x253 = -2442;
int32_t x254 = -288227;
volatile int64_t t59 = -7147LL;
volatile uint32_t t60 = 2U;
int16_t x262 = 1;
uint16_t x266 = UINT16_MAX;
uint16_t x268 = UINT16_MAX;
uint64_t x270 = UINT64_MAX;
volatile uint8_t x280 = UINT8_MAX;
int32_t x283 = 11621023;
int32_t t66 = 16673464;
volatile uint16_t x292 = 8U;
int32_t x294 = 1987;
volatile int64_t t68 = -21322901LL;
uint8_t x299 = UINT8_MAX;
int16_t x300 = INT16_MIN;
int32_t t70 = -25;
int8_t x308 = -1;
uint32_t x309 = UINT32_MAX;
uint64_t x310 = 251LLU;
static int64_t x311 = -13677LL;
uint32_t x314 = UINT32_MAX;
uint16_t x316 = 1645U;
int32_t t76 = 12617845;
volatile int32_t t78 = INT32_MAX;
int32_t x343 = -30;
int32_t t81 = 10216238;
volatile int16_t x357 = -1;
uint64_t x359 = 22270625LLU;
volatile int64_t t84 = INT64_MIN;
uint16_t x362 = 3U;
int16_t x365 = INT16_MAX;
int16_t x368 = INT16_MIN;
volatile uint16_t x370 = 1U;
uint64_t x379 = UINT64_MAX;
volatile int32_t x394 = 432916218;
static uint8_t x395 = 3U;
static int32_t t93 = -142521;
int64_t x411 = -2818910LL;
volatile int64_t x415 = INT64_MIN;
volatile uint8_t x417 = 76U;
static volatile int8_t x418 = 21;
volatile uint8_t x420 = 1U;
int16_t x421 = INT16_MAX;
uint16_t x423 = 469U;
int64_t t99 = INT64_MIN;


void f0(void) {
	static int32_t x1 = -1;
	volatile int16_t x2 = -11;
	volatile int16_t x4 = -1;

	t0 = ((x1<=(x2+x3))^x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 1767U;
	int64_t x8 = INT64_MIN;
	int64_t t1 = INT64_MIN;

	t1 = ((x5<=(x6+x7))^x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 1;

	t2 = ((x9<=(x10+x11))^x12);

	if (t2 != 2147483646) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t t3 = 54U;

	t3 = ((x13<=(x14+x15))^x16);

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x20 = INT32_MIN;
	int32_t t4 = -43764;

	t4 = ((x17<=(x18+x19))^x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = 223872495LL;
	volatile int32_t t5 = 65343283;

	t5 = ((x25<=(x26+x27))^x28);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x30 = 58U;
	int16_t x31 = -1;
	uint8_t x32 = 62U;
	int32_t t6 = -8091252;

	t6 = ((x29<=(x30+x31))^x32);

	if (t6 != 62) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int32_t x35 = -111;
	int32_t t7 = -1;

	t7 = ((x33<=(x34+x35))^x36);

	if (t7 != 30) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	int8_t x40 = 1;
	int32_t t8 = 1;

	t8 = ((x37<=(x38+x39))^x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = 512749826530557789LL;
	static int64_t x42 = -62670491426608055LL;
	volatile uint16_t x43 = UINT16_MAX;
	volatile int32_t t9 = 219;

	t9 = ((x41<=(x42+x43))^x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 5U;
	uint64_t x46 = 233LLU;
	uint64_t x47 = UINT64_MAX;
	int32_t t10 = -8741935;

	t10 = ((x45<=(x46+x47))^x48);

	if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	static int16_t x50 = 1;
	int64_t t11 = -39189LL;

	t11 = ((x49<=(x50+x51))^x52);

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x56 = INT64_MIN;
	int64_t t12 = INT64_MIN;

	t12 = ((x53<=(x54+x55))^x56);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	uint16_t x58 = 15U;
	static int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t13 = 101211812;

	t13 = ((x57<=(x58+x59))^x60);

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	uint8_t x63 = 5U;
	int32_t x64 = -1;
	int32_t t14 = -56432396;

	t14 = ((x61<=(x62+x63))^x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = -1;
	int32_t x67 = -1;
	int32_t t15 = 11;

	t15 = ((x65<=(x66+x67))^x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = -1;
	int8_t x72 = -1;
	int32_t t16 = -43692512;

	t16 = ((x69<=(x70+x71))^x72);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x73 = INT8_MIN;
	volatile int16_t x74 = INT16_MAX;
	int64_t x75 = INT64_MIN;
	int16_t x76 = 7;
	int32_t t17 = -12825005;

	t17 = ((x73<=(x74+x75))^x76);

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x78 = -1;
	static int32_t x79 = INT32_MAX;

	t18 = ((x77<=(x78+x79))^x80);

	if (t18 != 483402712U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	static int8_t x82 = INT8_MAX;
	static int64_t x83 = -168LL;
	int64_t x84 = -1LL;
	volatile int64_t t19 = -3LL;

	t19 = ((x81<=(x82+x83))^x84);

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = UINT8_MAX;
	static int32_t x86 = -1;
	uint64_t x87 = 15834894937661369LLU;
	uint8_t x88 = UINT8_MAX;
	int32_t t20 = -64880;

	t20 = ((x85<=(x86+x87))^x88);

	if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	int32_t x90 = -110;
	int32_t t21 = -605459977;

	t21 = ((x89<=(x90+x91))^x92);

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = 0;
	uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = ((x93<=(x94+x95))^x96);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 5371U;
	int16_t x98 = INT16_MIN;
	uint32_t x99 = 3184U;

	t23 = ((x97<=(x98+x99))^x100);

	if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x102 = 29U;
	static int16_t x103 = -1;
	int8_t x104 = -11;
	int32_t t24 = -32363;

	t24 = ((x101<=(x102+x103))^x104);

	if (t24 != -12) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	uint32_t x106 = 12U;
	int32_t x107 = INT32_MIN;
	static volatile uint64_t t25 = 258569186990306LLU;

	t25 = ((x105<=(x106+x107))^x108);

	if (t25 != 6648163877LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x109 = 6007U;
	volatile int16_t x110 = -266;

	t26 = ((x109<=(x110+x111))^x112);

	if (t26 != 39) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -8;
	uint32_t x114 = UINT32_MAX;
	uint16_t x115 = UINT16_MAX;
	volatile int32_t t27 = -166;

	t27 = ((x113<=(x114+x115))^x116);

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	uint16_t x118 = 15324U;
	volatile int64_t x120 = INT64_MAX;
	static int64_t t28 = 34384927818LL;

	t28 = ((x117<=(x118+x119))^x120);

	if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 7U;
	int32_t x124 = INT32_MIN;
	static int32_t t29 = 306;

	t29 = ((x121<=(x122+x123))^x124);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x126 = 166572U;
	uint64_t x127 = 6227407314702029LLU;
	uint16_t x128 = 7U;

	t30 = ((x125<=(x126+x127))^x128);

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = -1;
	int32_t x130 = -13243248;
	uint16_t x131 = 1U;
	int16_t x132 = -400;

	t31 = ((x129<=(x130+x131))^x132);

	if (t31 != -400) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x135 = 1;
	int32_t x136 = 1133787;
	volatile int32_t t32 = 880;

	t32 = ((x133<=(x134+x135))^x136);

	if (t32 != 1133787) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 0;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MAX;

	t33 = ((x137<=(x138+x139))^x140);

	if (t33 != 2147483646) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = 7;
	uint32_t x142 = 448955U;
	static int16_t x143 = INT16_MAX;
	static uint64_t t34 = 471332918LLU;

	t34 = ((x141<=(x142+x143))^x144);

	if (t34 != 4373013979070698207LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 4U;
	volatile int8_t x150 = 1;
	static int8_t x151 = INT8_MIN;
	static int16_t x152 = INT16_MAX;

	t35 = ((x149<=(x150+x151))^x152);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = -40;
	int8_t x155 = INT8_MIN;
	volatile int8_t x156 = -1;
	static volatile int32_t t36 = 0;

	t36 = ((x153<=(x154+x155))^x156);

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = 1991572244LL;
	volatile int32_t x158 = 53714311;
	int64_t x159 = INT64_MIN;
	int8_t x160 = -32;
	int32_t t37 = -2235702;

	t37 = ((x157<=(x158+x159))^x160);

	if (t37 != -32) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x166 = -1;
	int32_t x167 = -1;
	int32_t t38 = -364;

	t38 = ((x165<=(x166+x167))^x168);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x169 = 37U;
	int64_t x170 = INT64_MIN;
	int8_t x171 = 6;
	int32_t x172 = INT32_MAX;
	int32_t t39 = INT32_MAX;

	t39 = ((x169<=(x170+x171))^x172);

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = 27U;
	int32_t x174 = 485;
	int16_t x175 = INT16_MIN;
	int16_t x176 = -1;
	volatile int32_t t40 = -1;

	t40 = ((x173<=(x174+x175))^x176);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x177 = INT16_MIN;
	int64_t x178 = -24LL;
	volatile uint16_t x179 = 2367U;
	int8_t x180 = INT8_MIN;
	int32_t t41 = 24835030;

	t41 = ((x177<=(x178+x179))^x180);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x185 = 0U;
	uint16_t x186 = 718U;
	volatile uint16_t x187 = UINT16_MAX;
	volatile int32_t t42 = 8846;

	t42 = ((x185<=(x186+x187))^x188);

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = INT64_MIN;
	volatile int64_t x190 = INT64_MIN;
	uint32_t x191 = 2U;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t43 = -65039260;

	t43 = ((x189<=(x190+x191))^x192);

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x193 = INT16_MIN;
	static int16_t x194 = INT16_MIN;
	uint32_t x195 = 7957U;
	static uint32_t x196 = 1620448495U;

	t44 = ((x193<=(x194+x195))^x196);

	if (t44 != 1620448494U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MAX;
	int64_t x198 = INT64_MIN;
	static uint32_t x199 = 360567U;
	int32_t x200 = INT32_MAX;

	t45 = ((x197<=(x198+x199))^x200);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = UINT64_MAX;
	uint8_t x202 = UINT8_MAX;
	static uint16_t x203 = UINT16_MAX;
	volatile int64_t t46 = INT64_MAX;

	t46 = ((x201<=(x202+x203))^x204);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = -1LL;
	static int64_t x206 = INT64_MIN;
	int8_t x207 = INT8_MAX;
	static volatile int32_t x208 = -123413468;
	int32_t t47 = 1;

	t47 = ((x205<=(x206+x207))^x208);

	if (t47 != -123413468) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x210 = 4;
	uint64_t x211 = 6544028LLU;
	volatile int32_t t48 = INT32_MIN;

	t48 = ((x209<=(x210+x211))^x212);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x214 = -25;
	static uint16_t x215 = 1U;

	t49 = ((x213<=(x214+x215))^x216);

	if (t49 != 3100LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -1;
	uint8_t x218 = UINT8_MAX;
	int64_t x219 = INT64_MIN;
	uint8_t x220 = 63U;
	volatile int32_t t50 = -22489783;

	t50 = ((x217<=(x218+x219))^x220);

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x221 = 966177;
	uint16_t x222 = 1U;
	int32_t t51 = -8578;

	t51 = ((x221<=(x222+x223))^x224);

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x225 = INT8_MIN;
	static int16_t x227 = 2;
	uint64_t x228 = 1801592214394553189LLU;
	uint64_t t52 = 211666384LLU;

	t52 = ((x225<=(x226+x227))^x228);

	if (t52 != 1801592214394553189LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = -1LL;
	int32_t x230 = -1;
	int16_t x231 = INT16_MAX;
	int32_t t53 = -4693175;

	t53 = ((x229<=(x230+x231))^x232);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 2785U;
	volatile uint8_t x235 = UINT8_MAX;
	volatile int32_t t54 = -816203246;

	t54 = ((x233<=(x234+x235))^x236);

	if (t54 != 4583) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = INT32_MIN;
	static int64_t x238 = -7245138LL;
	uint64_t x239 = 278110151157483LLU;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t55 = 267855;

	t55 = ((x237<=(x238+x239))^x240);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -14;
	int32_t x242 = -1;
	uint64_t x243 = 1141242244LLU;
	static uint64_t x244 = UINT64_MAX;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = ((x241<=(x242+x243))^x244);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 29U;
	uint64_t x247 = 1135854558753877LLU;
	uint32_t x248 = UINT32_MAX;
	static uint32_t t57 = 1U;

	t57 = ((x245<=(x246+x247))^x248);

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x250 = INT64_MIN;
	int8_t x251 = INT8_MAX;
	int32_t t58 = 886;

	t58 = ((x249<=(x250+x251))^x252);

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x255 = INT16_MAX;
	int64_t x256 = -89661160LL;

	t59 = ((x253<=(x254+x255))^x256);

	if (t59 != -89661160LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = 114U;
	int16_t x258 = -4443;
	volatile uint16_t x259 = 13116U;
	static uint32_t x260 = UINT32_MAX;

	t60 = ((x257<=(x258+x259))^x260);

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = INT8_MAX;
	int64_t x263 = 16720510973715611LL;
	volatile int64_t x264 = 84LL;
	static int64_t t61 = -2181927LL;

	t61 = ((x261<=(x262+x263))^x264);

	if (t61 != 85LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x267 = INT32_MIN;
	static volatile int32_t t62 = 971;

	t62 = ((x265<=(x266+x267))^x268);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = 660369490787627160LL;
	volatile uint16_t x271 = UINT16_MAX;
	volatile uint64_t x272 = 630683050LLU;
	static uint64_t t63 = 498560594LLU;

	t63 = ((x269<=(x270+x271))^x272);

	if (t63 != 630683050LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x277 = INT8_MAX;
	volatile int8_t x278 = -1;
	int64_t x279 = -1LL;
	volatile int32_t t64 = -11191;

	t64 = ((x277<=(x278+x279))^x280);

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 1U;
	int8_t x282 = 0;
	volatile uint16_t x284 = 3U;
	int32_t t65 = -842941;

	t65 = ((x281<=(x282+x283))^x284);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = 1;
	int16_t x287 = INT16_MIN;
	uint16_t x288 = 68U;

	t66 = ((x285<=(x286+x287))^x288);

	if (t66 != 69) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MAX;
	volatile int64_t x290 = -1LL;
	int32_t x291 = INT32_MIN;
	int32_t t67 = 204929;

	t67 = ((x289<=(x290+x291))^x292);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -1LL;
	int16_t x295 = -1;
	volatile int64_t x296 = -1029513LL;

	t68 = ((x293<=(x294+x295))^x296);

	if (t68 != -1029514LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x297 = UINT64_MAX;
	volatile int8_t x298 = -1;
	int32_t t69 = -2572753;

	t69 = ((x297<=(x298+x299))^x300);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = INT16_MAX;
	int64_t x302 = INT64_MIN;
	volatile uint8_t x303 = 1U;
	uint8_t x304 = 2U;

	t70 = ((x301<=(x302+x303))^x304);

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -1LL;
	uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	int32_t t71 = 10;

	t71 = ((x305<=(x306+x307))^x308);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x312 = INT8_MIN;
	volatile int32_t t72 = -178776633;

	t72 = ((x309<=(x310+x311))^x312);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x313 = UINT8_MAX;
	volatile uint64_t x315 = 15149411LLU;
	int32_t t73 = 620356;

	t73 = ((x313<=(x314+x315))^x316);

	if (t73 != 1644) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -1347;
	int8_t x318 = -1;
	uint8_t x319 = 1U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t74 = 43024664;

	t74 = ((x317<=(x318+x319))^x320);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x321 = INT8_MIN;
	volatile uint8_t x322 = 1U;
	uint8_t x323 = 6U;
	int64_t x324 = INT64_MIN;
	static volatile int64_t t75 = 3559LL;

	t75 = ((x321<=(x322+x323))^x324);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = INT32_MIN;
	static int64_t x326 = -1LL;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -54;

	t76 = ((x325<=(x326+x327))^x328);

	if (t76 != -53) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x329 = 46777LLU;
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t77 = 13;

	t77 = ((x329<=(x330+x331))^x332);

	if (t77 != -127) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x333 = 368U;
	uint8_t x334 = 2U;
	int32_t x335 = INT32_MIN;
	static int32_t x336 = INT32_MAX;

	t78 = ((x333<=(x334+x335))^x336);

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x337 = -1;
	static volatile int32_t x338 = 6674;
	volatile int16_t x339 = 21;
	int16_t x340 = 1;
	volatile int32_t t79 = -2464350;

	t79 = ((x337<=(x338+x339))^x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x341 = INT8_MAX;
	int8_t x342 = -5;
	static volatile int16_t x344 = INT16_MIN;
	static int32_t t80 = 599696;

	t80 = ((x341<=(x342+x343))^x344);

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x345 = -1;
	uint32_t x346 = UINT32_MAX;
	uint32_t x347 = 168U;
	int8_t x348 = INT8_MIN;

	t81 = ((x345<=(x346+x347))^x348);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x349 = 107188U;
	int8_t x350 = INT8_MAX;
	int32_t x351 = -4666013;
	static uint16_t x352 = 2148U;
	int32_t t82 = -104448;

	t82 = ((x349<=(x350+x351))^x352);

	if (t82 != 2149) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1;
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 4U;
	int32_t x356 = -1;
	volatile int32_t t83 = 666;

	t83 = ((x353<=(x354+x355))^x356);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x358 = -2;
	int64_t x360 = INT64_MIN;

	t84 = ((x357<=(x358+x359))^x360);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x361 = -206;
	int32_t x363 = 7894;
	int64_t x364 = INT64_MIN;
	int64_t t85 = -4192226829534LL;

	t85 = ((x361<=(x362+x363))^x364);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 4032LLU;
	static int32_t t86 = 2;

	t86 = ((x365<=(x366+x367))^x368);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	int64_t x372 = 98231834018903121LL;
	int64_t t87 = -3LL;

	t87 = ((x369<=(x370+x371))^x372);

	if (t87 != 98231834018903120LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x373 = INT8_MAX;
	static uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MIN;
	volatile int8_t x376 = INT8_MIN;
	static volatile int32_t t88 = 2992;

	t88 = ((x373<=(x374+x375))^x376);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t89 = 3;

	t89 = ((x377<=(x378+x379))^x380);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = 447;
	uint16_t x386 = 12U;
	int16_t x387 = -1;
	uint8_t x388 = 2U;
	volatile int32_t t90 = -8190;

	t90 = ((x385<=(x386+x387))^x388);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x389 = INT8_MIN;
	uint8_t x390 = 31U;
	int32_t x391 = INT32_MIN;
	int32_t x392 = -1;
	volatile int32_t t91 = -24;

	t91 = ((x389<=(x390+x391))^x392);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x393 = UINT16_MAX;
	static int16_t x396 = INT16_MIN;
	volatile int32_t t92 = -22176;

	t92 = ((x393<=(x394+x395))^x396);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x397 = 55226773834059329LLU;
	int8_t x398 = INT8_MAX;
	volatile int32_t x399 = INT32_MIN;
	static uint16_t x400 = 176U;

	t93 = ((x397<=(x398+x399))^x400);

	if (t93 != 177) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = 6U;
	static uint8_t x402 = UINT8_MAX;
	volatile int8_t x403 = INT8_MIN;
	volatile int16_t x404 = INT16_MIN;
	volatile int32_t t94 = 2617988;

	t94 = ((x401<=(x402+x403))^x404);

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x405 = UINT8_MAX;
	int32_t x406 = -479;
	int8_t x407 = 9;
	static int32_t x408 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

	t95 = ((x405<=(x406+x407))^x408);

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = 10U;
	static int16_t x410 = 2;
	uint8_t x412 = 78U;
	volatile int32_t t96 = -639;

	t96 = ((x409<=(x410+x411))^x412);

	if (t96 != 78) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = 53LLU;
	static volatile uint32_t x414 = 918486U;
	int64_t x416 = INT64_MIN;
	int64_t t97 = 3LL;

	t97 = ((x413<=(x414+x415))^x416);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x419 = INT32_MIN;
	volatile int32_t t98 = -230;

	t98 = ((x417<=(x418+x419))^x420);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x422 = INT64_MIN;
	int64_t x424 = INT64_MIN;

	t99 = ((x421<=(x422+x423))^x424);

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

