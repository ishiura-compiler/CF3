#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 3U;
static int32_t t0 = -2;
int16_t x10 = INT16_MIN;
static volatile int32_t x16 = INT32_MIN;
uint32_t x23 = UINT32_MAX;
volatile uint32_t x25 = 800230065U;
static int16_t x33 = -1;
uint32_t x34 = 144U;
volatile int64_t x40 = 2LL;
int32_t t8 = -7182;
volatile uint64_t x52 = UINT64_MAX;
volatile int64_t x55 = INT64_MIN;
uint16_t x56 = 1249U;
volatile int16_t x64 = -1;
int16_t x70 = -7128;
int64_t x72 = INT64_MIN;
int32_t t15 = -53061;
volatile int32_t x76 = INT32_MIN;
int32_t t16 = -6919041;
int16_t x84 = INT16_MAX;
volatile uint64_t x89 = 0LLU;
uint8_t x93 = 59U;
uint16_t x95 = UINT16_MAX;
int64_t x99 = -1LL;
static uint8_t x104 = 12U;
volatile int32_t t24 = 84357;
static int32_t x117 = INT32_MIN;
uint8_t x118 = 81U;
int64_t x120 = 15474826056503LL;
volatile int32_t t27 = -71;
volatile int32_t x121 = INT32_MAX;
static int16_t x123 = -1;
int64_t x124 = INT64_MIN;
volatile int64_t x128 = -1LL;
int32_t t29 = -448377;
int32_t t30 = -113;
int16_t x133 = INT16_MIN;
volatile int32_t t31 = 311448;
int8_t x142 = -1;
int8_t x151 = INT8_MIN;
int32_t x161 = -1;
int8_t x162 = 1;
int8_t x169 = -4;
static int16_t x170 = 0;
int16_t x173 = -12770;
int8_t x180 = 0;
int32_t x182 = 154928;
uint8_t x184 = UINT8_MAX;
static int32_t x186 = 27963;
uint64_t x188 = 125LLU;
static uint64_t x191 = UINT64_MAX;
static int64_t x198 = -1LL;
int16_t x208 = INT16_MAX;
int8_t x210 = INT8_MIN;
int16_t x214 = INT16_MIN;
volatile int32_t t51 = -4438737;
uint64_t x233 = UINT64_MAX;
int8_t x236 = 1;
static int16_t x241 = -1;
uint8_t x245 = 2U;
volatile int32_t t55 = 25588872;
int16_t x249 = 0;
static volatile uint64_t x252 = 102LLU;
volatile int32_t t57 = -19;
int32_t x257 = INT32_MIN;
volatile int32_t t60 = -15416;
uint64_t x276 = 9740628664LLU;
int32_t t61 = -1569;
uint32_t x278 = 951601U;
volatile int8_t x279 = INT8_MIN;
int32_t x289 = INT32_MIN;
int8_t x292 = 2;
int32_t t64 = 314;
uint16_t x293 = 62U;
int8_t x296 = INT8_MAX;
static volatile int64_t x302 = 2846836LL;
static int32_t t67 = 2;
int32_t x310 = INT32_MIN;
uint8_t x313 = UINT8_MAX;
static uint32_t x316 = 389000U;
static uint16_t x326 = 15593U;
static volatile int8_t x327 = INT8_MIN;
volatile int32_t t72 = -19;
static volatile int32_t t73 = 0;
int16_t x334 = -8;
uint8_t x336 = UINT8_MAX;
uint16_t x337 = 1U;
volatile uint8_t x348 = UINT8_MAX;
int8_t x353 = INT8_MAX;
static uint64_t x358 = 26498911319739629LLU;
int16_t x362 = INT16_MAX;
int32_t t80 = -3134847;
volatile int32_t t81 = 3238;
int32_t x380 = -5;
volatile int32_t t84 = 3176;
int32_t t85 = 1601031;
uint32_t x416 = 3732U;
int8_t x420 = INT8_MIN;
volatile int8_t x424 = 0;
int64_t x428 = INT64_MIN;
int64_t x429 = INT64_MIN;
static volatile int16_t x431 = INT16_MAX;
int32_t t96 = 421;
int32_t t97 = 3;
uint16_t x444 = 137U;
int32_t x454 = INT32_MIN;
volatile int32_t x456 = -1;
int32_t t99 = 3142;


void f0(void) {
	static uint32_t x5 = 513406U;
	int64_t x6 = -1LL;
	int8_t x8 = 25;

	t0 = ((x5==(x6+x7))<=x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	static int8_t x11 = 0;
	int8_t x12 = INT8_MAX;
	static volatile int32_t t1 = -69;

	t1 = ((x9==(x10+x11))<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 74911859590LLU;
	volatile int16_t x14 = INT16_MIN;
	int32_t x15 = -34312;
	volatile int32_t t2 = 11343;

	t2 = ((x13==(x14+x15))<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = -1;
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MAX;
	int32_t x20 = 1;
	int32_t t3 = -826102352;

	t3 = ((x17==(x18+x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -7;
	int16_t x22 = -31;
	volatile int8_t x24 = INT8_MIN;
	static volatile int32_t t4 = -125;

	t4 = ((x21==(x22+x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 6U;
	uint64_t x27 = UINT64_MAX;
	volatile int16_t x28 = 1009;
	volatile int32_t t5 = -6747515;

	t5 = ((x25==(x26+x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	int8_t x30 = 3;
	static uint64_t x31 = 18432093LLU;
	volatile int8_t x32 = -1;
	int32_t t6 = -31256;

	t6 = ((x29==(x30+x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x35 = -283743049615426575LL;
	int16_t x36 = -1;
	int32_t t7 = -4062533;

	t7 = ((x33==(x34+x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MAX;
	int16_t x38 = -367;
	static int16_t x39 = INT16_MAX;

	t8 = ((x37==(x38+x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x45 = UINT16_MAX;
	int64_t x46 = -122346184351059LL;
	volatile int64_t x47 = -1LL;
	int32_t x48 = 221;
	int32_t t9 = -326146727;

	t9 = ((x45==(x46+x47))<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = 7450130U;
	int8_t x50 = -57;
	int32_t x51 = 341474632;
	volatile int32_t t10 = -1774;

	t10 = ((x49==(x50+x51))<=x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 6474829089529831LL;
	uint32_t x54 = UINT32_MAX;
	int32_t t11 = -4651;

	t11 = ((x53==(x54+x55))<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	uint32_t x58 = 2624U;
	uint32_t x59 = 3U;
	uint16_t x60 = 61U;
	int32_t t12 = -40754;

	t12 = ((x57==(x58+x59))<=x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MAX;
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MIN;
	static int32_t t13 = -22510648;

	t13 = ((x61==(x62+x63))<=x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	int32_t x66 = INT32_MIN;
	uint32_t x67 = 827620U;
	static uint64_t x68 = 71475321108970LLU;
	volatile int32_t t14 = -19832;

	t14 = ((x65==(x66+x67))<=x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 6711484975924327957LLU;
	uint32_t x71 = 1777256072U;

	t15 = ((x69==(x70+x71))<=x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = -1;
	static int32_t x74 = -1;
	volatile uint8_t x75 = UINT8_MAX;

	t16 = ((x73==(x74+x75))<=x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MIN;
	volatile uint64_t x79 = 1623345715348529LLU;
	int64_t x80 = INT64_MAX;
	static int32_t t17 = 13;

	t17 = ((x77==(x78+x79))<=x80);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = INT32_MAX;
	int8_t x82 = 18;
	uint16_t x83 = 1U;
	static volatile int32_t t18 = -370524;

	t18 = ((x81==(x82+x83))<=x84);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -42;
	int16_t x86 = -643;
	volatile uint8_t x87 = UINT8_MAX;
	int8_t x88 = INT8_MIN;
	int32_t t19 = -36;

	t19 = ((x85==(x86+x87))<=x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x90 = 9U;
	uint32_t x91 = 0U;
	static int64_t x92 = -23352LL;
	static int32_t t20 = 5;

	t20 = ((x89==(x90+x91))<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x94 = 28U;
	uint16_t x96 = UINT16_MAX;
	int32_t t21 = 13448037;

	t21 = ((x93==(x94+x95))<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x97 = UINT64_MAX;
	uint8_t x98 = UINT8_MAX;
	volatile int64_t x100 = INT64_MAX;
	int32_t t22 = -56;

	t22 = ((x97==(x98+x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x101 = 2U;
	int64_t x102 = -1LL;
	static int32_t x103 = INT32_MAX;
	volatile int32_t t23 = 9848170;

	t23 = ((x101==(x102+x103))<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = INT8_MAX;
	int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;

	t24 = ((x105==(x106+x107))<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = INT64_MAX;
	int16_t x110 = -64;
	int32_t x111 = -1;
	uint16_t x112 = 3U;
	int32_t t25 = -22979948;

	t25 = ((x109==(x110+x111))<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = -32253324;
	int32_t x114 = INT32_MIN;
	uint8_t x115 = UINT8_MAX;
	static int8_t x116 = 1;
	int32_t t26 = -64;

	t26 = ((x113==(x114+x115))<=x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x119 = INT8_MAX;

	t27 = ((x117==(x118+x119))<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = INT32_MAX;
	static volatile int32_t t28 = -6721;

	t28 = ((x121==(x122+x123))<=x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -533667611;
	static uint32_t x126 = 25197U;
	static int16_t x127 = -1;

	t29 = ((x125==(x126+x127))<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = UINT16_MAX;
	uint8_t x130 = 32U;
	uint8_t x131 = 1U;
	int32_t x132 = INT32_MAX;

	t30 = ((x129==(x130+x131))<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	volatile int64_t x136 = -970311951571376LL;

	t31 = ((x133==(x134+x135))<=x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = 24076U;
	int64_t x143 = 22LL;
	uint32_t x144 = 0U;
	volatile int32_t t32 = -3375110;

	t32 = ((x141==(x142+x143))<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = -1;
	int16_t x146 = INT16_MIN;
	int8_t x147 = -1;
	volatile int64_t x148 = INT64_MAX;
	volatile int32_t t33 = -180;

	t33 = ((x145==(x146+x147))<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -61;
	volatile uint64_t x150 = 436LLU;
	volatile int64_t x152 = INT64_MAX;
	static int32_t t34 = -11897;

	t34 = ((x149==(x150+x151))<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = 2393723U;
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	int16_t x156 = INT16_MAX;
	int32_t t35 = -11;

	t35 = ((x153==(x154+x155))<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x157 = 0U;
	uint8_t x158 = 26U;
	int64_t x159 = INT64_MIN;
	uint64_t x160 = 383LLU;
	volatile int32_t t36 = 7909744;

	t36 = ((x157==(x158+x159))<=x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x163 = 36585812977LL;
	uint32_t x164 = UINT32_MAX;
	int32_t t37 = 0;

	t37 = ((x161==(x162+x163))<=x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x165 = UINT16_MAX;
	static volatile uint16_t x166 = 0U;
	volatile int16_t x167 = INT16_MIN;
	static int32_t x168 = 11160534;
	volatile int32_t t38 = 27901850;

	t38 = ((x165==(x166+x167))<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;
	static volatile int32_t t39 = -733;

	t39 = ((x169==(x170+x171))<=x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x174 = UINT8_MAX;
	int32_t x175 = INT32_MIN;
	int16_t x176 = 7;
	volatile int32_t t40 = -4379768;

	t40 = ((x173==(x174+x175))<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x177 = -27;
	static int32_t x178 = -1;
	volatile uint32_t x179 = 7101U;
	volatile int32_t t41 = -90193;

	t41 = ((x177==(x178+x179))<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 275919U;
	volatile int8_t x183 = -27;
	volatile int32_t t42 = 203;

	t42 = ((x181==(x182+x183))<=x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 3U;
	int32_t x187 = 0;
	static int32_t t43 = 184986037;

	t43 = ((x185==(x186+x187))<=x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = 44;
	int16_t x192 = INT16_MIN;
	volatile int32_t t44 = 70;

	t44 = ((x189==(x190+x191))<=x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -1;
	static int16_t x199 = -1;
	int16_t x200 = INT16_MIN;
	int32_t t45 = -106427454;

	t45 = ((x197==(x198+x199))<=x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = -3239089871054035814LL;
	uint64_t x206 = 111882LLU;
	uint8_t x207 = 5U;
	volatile int32_t t46 = 299351450;

	t46 = ((x205==(x206+x207))<=x208);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MIN;
	int64_t x211 = 16LL;
	int64_t x212 = INT64_MIN;
	volatile int32_t t47 = 3301;

	t47 = ((x209==(x210+x211))<=x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x213 = 23;
	int32_t x215 = -1324;
	int64_t x216 = 182096716374451LL;
	static volatile int32_t t48 = -9651;

	t48 = ((x213==(x214+x215))<=x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x217 = INT64_MAX;
	static int32_t x218 = INT32_MAX;
	int64_t x219 = INT64_MIN;
	volatile uint16_t x220 = 1689U;
	int32_t t49 = 10858733;

	t49 = ((x217==(x218+x219))<=x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 6U;
	uint32_t x222 = 1083069U;
	volatile int16_t x223 = INT16_MAX;
	int8_t x224 = -11;
	static volatile int32_t t50 = -3;

	t50 = ((x221==(x222+x223))<=x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MAX;
	int64_t x230 = -8358913257406LL;
	static int32_t x231 = -1;
	static volatile int16_t x232 = INT16_MAX;

	t51 = ((x229==(x230+x231))<=x232);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x234 = UINT8_MAX;
	uint64_t x235 = UINT64_MAX;
	volatile int32_t t52 = -34;

	t52 = ((x233==(x234+x235))<=x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MIN;
	static int16_t x238 = 9188;
	uint16_t x239 = UINT16_MAX;
	static int16_t x240 = -1;
	volatile int32_t t53 = 127014930;

	t53 = ((x237==(x238+x239))<=x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x242 = 37;
	uint16_t x243 = 5U;
	int64_t x244 = 95452127LL;
	static int32_t t54 = 282853;

	t54 = ((x241==(x242+x243))<=x244);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x246 = 23U;
	uint64_t x247 = 338996276LLU;
	static int8_t x248 = -60;

	t55 = ((x245==(x246+x247))<=x248);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x250 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	int32_t t56 = -56964;

	t56 = ((x249==(x250+x251))<=x252);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = -16511123;
	int8_t x254 = INT8_MIN;
	int8_t x255 = INT8_MIN;
	volatile uint64_t x256 = 9652LLU;

	t57 = ((x253==(x254+x255))<=x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x258 = INT8_MIN;
	int8_t x259 = -2;
	int8_t x260 = -1;
	static volatile int32_t t58 = -8;

	t58 = ((x257==(x258+x259))<=x260);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = INT32_MIN;
	static int32_t x262 = INT32_MIN;
	int64_t x263 = 10090LL;
	volatile int32_t x264 = -1416;
	int32_t t59 = -23681953;

	t59 = ((x261==(x262+x263))<=x264);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = 1;
	uint32_t x270 = 2887061U;
	volatile int64_t x271 = -1LL;
	int16_t x272 = INT16_MIN;

	t60 = ((x269==(x270+x271))<=x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MAX;
	static int32_t x274 = INT32_MIN;
	uint8_t x275 = 6U;

	t61 = ((x273==(x274+x275))<=x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = 32713793LL;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t62 = -3916;

	t62 = ((x277==(x278+x279))<=x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = 594LL;
	static uint8_t x282 = UINT8_MAX;
	uint64_t x283 = UINT64_MAX;
	uint64_t x284 = UINT64_MAX;
	int32_t t63 = -175038117;

	t63 = ((x281==(x282+x283))<=x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x290 = -1;
	volatile int16_t x291 = -1382;

	t64 = ((x289==(x290+x291))<=x292);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = -307783679;
	int32_t t65 = 2704594;

	t65 = ((x293==(x294+x295))<=x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x301 = -1157072;
	static int8_t x303 = -10;
	uint32_t x304 = 75186U;
	int32_t t66 = -132296;

	t66 = ((x301==(x302+x303))<=x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x305 = 1038U;
	int64_t x306 = 996LL;
	int16_t x307 = INT16_MIN;
	int64_t x308 = 9467LL;

	t67 = ((x305==(x306+x307))<=x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -28;
	uint64_t x311 = 15028779LLU;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t68 = 441509244;

	t68 = ((x309==(x310+x311))<=x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x314 = INT16_MIN;
	int16_t x315 = -73;
	volatile int32_t t69 = -1261;

	t69 = ((x313==(x314+x315))<=x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x317 = 6U;
	static int32_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = INT32_MIN;
	int32_t t70 = -917630;

	t70 = ((x317==(x318+x319))<=x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = 1;
	uint8_t x323 = 1U;
	int8_t x324 = -3;
	static int32_t t71 = -4;

	t71 = ((x321==(x322+x323))<=x324);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x325 = -18193;
	volatile int32_t x328 = -879066;

	t72 = ((x325==(x326+x327))<=x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = 456U;
	int16_t x330 = -12;
	uint64_t x331 = 39995856LLU;
	uint8_t x332 = UINT8_MAX;

	t73 = ((x329==(x330+x331))<=x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MIN;
	int64_t x335 = 41963583598LL;
	volatile int32_t t74 = 2943;

	t74 = ((x333==(x334+x335))<=x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x338 = UINT32_MAX;
	int32_t x339 = -1141;
	static uint32_t x340 = 684U;
	volatile int32_t t75 = -430683454;

	t75 = ((x337==(x338+x339))<=x340);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = -1LL;
	int8_t x346 = INT8_MAX;
	uint8_t x347 = 3U;
	int32_t t76 = -1663;

	t76 = ((x345==(x346+x347))<=x348);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = INT8_MIN;
	static uint64_t x350 = 281535182LLU;
	int64_t x351 = INT64_MAX;
	static int8_t x352 = 10;
	volatile int32_t t77 = -137774;

	t77 = ((x349==(x350+x351))<=x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x354 = 240U;
	static int32_t x355 = INT32_MIN;
	int32_t x356 = INT32_MAX;
	int32_t t78 = 1012;

	t78 = ((x353==(x354+x355))<=x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = 90;
	static int64_t x359 = INT64_MIN;
	uint16_t x360 = 833U;
	static int32_t t79 = 185;

	t79 = ((x357==(x358+x359))<=x360);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x361 = UINT32_MAX;
	uint8_t x363 = 110U;
	int8_t x364 = -15;

	t80 = ((x361==(x362+x363))<=x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x365 = 29U;
	int8_t x366 = -1;
	static uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 5730U;

	t81 = ((x365==(x366+x367))<=x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = 153354810474LL;
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = INT32_MAX;
	int32_t t82 = 16042;

	t82 = ((x369==(x370+x371))<=x372);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x373 = -1;
	int8_t x374 = -1;
	volatile int16_t x375 = -3;
	int32_t x376 = INT32_MAX;
	static int32_t t83 = -21985;

	t83 = ((x373==(x374+x375))<=x376);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MIN;
	static int8_t x378 = -31;
	int64_t x379 = -32LL;

	t84 = ((x377==(x378+x379))<=x380);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x381 = -1LL;
	volatile uint16_t x382 = 16040U;
	volatile int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;

	t85 = ((x381==(x382+x383))<=x384);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x385 = INT64_MAX;
	volatile int8_t x386 = -2;
	static int16_t x387 = -3509;
	int8_t x388 = -1;
	int32_t t86 = 990;

	t86 = ((x385==(x386+x387))<=x388);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MAX;
	static int32_t t87 = 18241893;

	t87 = ((x389==(x390+x391))<=x392);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 1005U;
	int64_t x394 = 3017343321421255304LL;
	volatile uint8_t x395 = UINT8_MAX;
	static int64_t x396 = -1LL;
	volatile int32_t t88 = -638;

	t88 = ((x393==(x394+x395))<=x396);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x397 = 18U;
	uint8_t x398 = 17U;
	uint8_t x399 = 5U;
	static volatile uint16_t x400 = 77U;
	static volatile int32_t t89 = -61;

	t89 = ((x397==(x398+x399))<=x400);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x401 = INT64_MIN;
	volatile int8_t x402 = -4;
	int32_t x403 = 25;
	int32_t x404 = INT32_MIN;
	volatile int32_t t90 = -13848;

	t90 = ((x401==(x402+x403))<=x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x405 = INT32_MIN;
	int64_t x406 = 62082692LL;
	int64_t x407 = -11414892839LL;
	volatile int64_t x408 = -1LL;
	int32_t t91 = 64983;

	t91 = ((x405==(x406+x407))<=x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x413 = UINT16_MAX;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = UINT32_MAX;
	static volatile int32_t t92 = 15772;

	t92 = ((x413==(x414+x415))<=x416);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = INT16_MAX;
	int32_t x418 = -14;
	uint32_t x419 = UINT32_MAX;
	int32_t t93 = -743;

	t93 = ((x417==(x418+x419))<=x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x421 = 12;
	volatile uint32_t x422 = 5818025U;
	int64_t x423 = 1998382442335777398LL;
	volatile int32_t t94 = 0;

	t94 = ((x421==(x422+x423))<=x424);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = INT8_MAX;
	int16_t x426 = INT16_MAX;
	uint16_t x427 = 5283U;
	volatile int32_t t95 = 13708;

	t95 = ((x425==(x426+x427))<=x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x430 = 64U;
	int32_t x432 = 0;

	t96 = ((x429==(x430+x431))<=x432);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x438 = 0LLU;
	static int32_t x439 = 796;
	uint64_t x440 = 2LLU;

	t97 = ((x437==(x438+x439))<=x440);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x441 = 304LLU;
	uint16_t x442 = 73U;
	uint8_t x443 = 0U;
	static int32_t t98 = 1365;

	t98 = ((x441==(x442+x443))<=x444);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x453 = -1;
	uint16_t x455 = UINT16_MAX;

	t99 = ((x453==(x454+x455))<=x456);

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

