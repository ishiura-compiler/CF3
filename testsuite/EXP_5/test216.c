#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x6 = UINT8_MAX;
int16_t x8 = -1;
static uint64_t x11 = UINT64_MAX;
int32_t x26 = INT32_MIN;
volatile int32_t x35 = -719878;
uint8_t x38 = 3U;
volatile uint32_t x44 = 375U;
int8_t x46 = INT8_MAX;
uint8_t x53 = 65U;
static int32_t x54 = 20341;
int32_t x57 = INT32_MAX;
int32_t t12 = 278;
static volatile int16_t x64 = -1;
uint32_t x66 = 307555U;
uint16_t x68 = UINT16_MAX;
volatile int32_t t15 = 1;
volatile int32_t t16 = -1;
static uint32_t x83 = UINT32_MAX;
uint16_t x95 = 127U;
int8_t x101 = INT8_MIN;
int32_t x104 = -270493799;
volatile int32_t t21 = -1055657801;
uint32_t x106 = 668433042U;
volatile int32_t t22 = -385;
int8_t x110 = INT8_MIN;
int8_t x112 = -21;
static int64_t x116 = -46LL;
int32_t t24 = -859;
volatile uint64_t x123 = 352410074LLU;
int8_t x124 = INT8_MAX;
int32_t t25 = -7512329;
int32_t x129 = -1;
volatile int32_t t27 = 4714522;
static uint8_t x134 = 0U;
int8_t x141 = INT8_MIN;
volatile int8_t x143 = INT8_MAX;
static volatile int32_t t31 = 0;
uint64_t x151 = 928009LLU;
int32_t t33 = 9561327;
int64_t x158 = -1LL;
volatile int16_t x160 = INT16_MIN;
volatile int16_t x163 = 7605;
volatile int64_t x164 = -1LL;
volatile int32_t t35 = -12;
uint16_t x170 = UINT16_MAX;
uint32_t x171 = UINT32_MAX;
static uint8_t x179 = UINT8_MAX;
int32_t t41 = -85;
int16_t x200 = INT16_MAX;
int32_t x204 = INT32_MAX;
static volatile int32_t t44 = 11987;
int16_t x210 = -1;
uint64_t x213 = 28027559LLU;
int32_t x218 = INT32_MAX;
uint32_t x220 = 5560U;
volatile int64_t x228 = INT64_MIN;
int32_t t50 = -25500;
int16_t x230 = INT16_MAX;
int32_t x235 = INT32_MIN;
uint64_t x236 = 43LLU;
int64_t x244 = -1LL;
volatile int64_t x250 = 12LL;
volatile int8_t x270 = -1;
int32_t x271 = INT32_MAX;
static volatile int32_t t58 = 971528;
int16_t x279 = -1;
int8_t x289 = INT8_MIN;
int16_t x291 = -7235;
static volatile int32_t t64 = 2045154;
int64_t x297 = -1046406LL;
volatile int32_t t65 = 312310;
uint32_t x307 = 0U;
static int32_t t67 = 614819;
int64_t x318 = INT64_MIN;
int16_t x324 = INT16_MIN;
int64_t x339 = -1LL;
static uint32_t x342 = 23U;
uint64_t x345 = UINT64_MAX;
volatile int32_t t75 = -77248;
int16_t x365 = -1;
static int8_t x367 = -57;
int8_t x375 = -1;
static int64_t x379 = INT64_MIN;
volatile uint32_t x380 = UINT32_MAX;
volatile int64_t x386 = -33164040192780395LL;
int16_t x392 = INT16_MIN;
static int32_t x393 = 66285504;
uint64_t x396 = UINT64_MAX;
static int32_t t86 = 7;
int32_t t87 = 197;
uint32_t x422 = 2271917U;
static volatile uint64_t x424 = 34998909441123419LLU;
int8_t x435 = INT8_MAX;
int64_t x442 = -411227687226087LL;
static volatile uint32_t x447 = 10U;
int32_t t95 = -131071;
int64_t x451 = -1LL;
static int64_t x457 = -1LL;
uint16_t x460 = UINT16_MAX;
volatile int32_t t98 = -58824448;
int32_t x463 = INT32_MIN;
int8_t x464 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile int16_t x2 = -1;
	static int16_t x3 = -1;
	static volatile uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = 24868971;

	t0 = (x1==((x2-x3)/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -3132;
	int16_t x7 = INT16_MAX;
	volatile int32_t t1 = -41797542;

	t1 = (x5==((x6-x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	volatile int32_t x10 = INT32_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 318159131;

	t2 = (x9==((x10-x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = INT32_MAX;
	uint8_t x18 = 22U;
	uint8_t x19 = 1U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = 17459737;

	t3 = (x17==((x18-x19)/x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int16_t x22 = -645;
	volatile int16_t x23 = INT16_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile int32_t t4 = 1981972;

	t4 = (x21==((x22-x23)/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	static int8_t x27 = INT8_MIN;
	uint64_t x28 = UINT64_MAX;
	int32_t t5 = -5;

	t5 = (x25==((x26-x27)/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	uint16_t x34 = 3007U;
	uint64_t x36 = UINT64_MAX;
	static int32_t t6 = -201231;

	t6 = (x33==((x34-x35)/x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -1LL;
	int64_t x39 = INT64_MAX;
	int32_t x40 = -1;
	volatile int32_t t7 = 1;

	t7 = (x37==((x38-x39)/x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 7446LL;
	int32_t x42 = -538;
	int8_t x43 = -1;
	int32_t t8 = -11295;

	t8 = (x41==((x42-x43)/x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -25;
	static uint64_t x47 = 31754050965844112LLU;
	int32_t x48 = INT32_MIN;
	int32_t t9 = -1;

	t9 = (x45==((x46-x47)/x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MIN;
	volatile int8_t x50 = INT8_MAX;
	int16_t x51 = INT16_MAX;
	static int64_t x52 = INT64_MIN;
	int32_t t10 = -1624;

	t10 = (x49==((x50-x51)/x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x55 = -1;
	int32_t x56 = -120;
	static int32_t t11 = 44295;

	t11 = (x53==((x54-x55)/x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = -59973LL;
	uint16_t x59 = 1407U;
	int16_t x60 = INT16_MIN;

	t12 = (x57==((x58-x59)/x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -7;
	uint32_t x62 = 14U;
	volatile int8_t x63 = INT8_MIN;
	static int32_t t13 = -85;

	t13 = (x61==((x62-x63)/x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x65 = INT8_MAX;
	int8_t x67 = -1;
	volatile int32_t t14 = -1777;

	t14 = (x65==((x66-x67)/x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	int16_t x70 = -1504;
	int16_t x71 = INT16_MIN;
	uint16_t x72 = 5U;

	t15 = (x69==((x70-x71)/x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	uint8_t x74 = UINT8_MAX;
	static volatile int16_t x75 = INT16_MIN;
	volatile int64_t x76 = 17113597LL;

	t16 = (x73==((x74-x75)/x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static int8_t x78 = INT8_MIN;
	uint32_t x79 = UINT32_MAX;
	uint32_t x80 = 7870U;
	volatile int32_t t17 = -16029281;

	t17 = (x77==((x78-x79)/x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 1U;
	static int8_t x82 = INT8_MAX;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t18 = 78;

	t18 = (x81==((x82-x83)/x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	volatile int32_t x86 = -1;
	volatile uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t19 = 792235;

	t19 = (x85==((x86-x87)/x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 0U;
	uint32_t x94 = 39U;
	static uint8_t x96 = UINT8_MAX;
	int32_t t20 = -233852681;

	t20 = (x93==((x94-x95)/x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x102 = -30LL;
	volatile uint8_t x103 = UINT8_MAX;

	t21 = (x101==((x102-x103)/x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = 14001471412LL;
	int16_t x107 = 3;
	uint8_t x108 = UINT8_MAX;

	t22 = (x105==((x106-x107)/x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = -15198449;
	static volatile int64_t x111 = 253596865LL;
	volatile int32_t t23 = 0;

	t23 = (x109==((x110-x111)/x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x113 = 3153033U;
	static uint8_t x114 = 15U;
	int16_t x115 = -5770;

	t24 = (x113==((x114-x115)/x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;

	t25 = (x121==((x122-x123)/x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = INT32_MIN;
	int8_t x127 = -1;
	int16_t x128 = -1;
	int32_t t26 = 10282;

	t26 = (x125==((x126-x127)/x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x130 = INT8_MIN;
	int16_t x131 = -1;
	uint64_t x132 = 50545LLU;

	t27 = (x129==((x130-x131)/x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MIN;
	volatile int16_t x135 = INT16_MIN;
	int8_t x136 = 1;
	volatile int32_t t28 = 1246172;

	t28 = (x133==((x134-x135)/x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	int16_t x138 = -1;
	uint16_t x139 = 3558U;
	int16_t x140 = -1;
	int32_t t29 = -87833;

	t29 = (x137==((x138-x139)/x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x142 = -1;
	int32_t x144 = -1;
	volatile int32_t t30 = 54365;

	t30 = (x141==((x142-x143)/x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x145 = INT32_MIN;
	int64_t x146 = -956037154502LL;
	uint32_t x147 = UINT32_MAX;
	volatile uint8_t x148 = 18U;

	t31 = (x145==((x146-x147)/x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x149 = 15;
	uint8_t x150 = 10U;
	static volatile int16_t x152 = INT16_MIN;
	int32_t t32 = -2;

	t32 = (x149==((x150-x151)/x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x153 = INT8_MAX;
	int32_t x154 = 0;
	uint16_t x155 = 20011U;
	int16_t x156 = INT16_MAX;

	t33 = (x153==((x154-x155)/x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = -4454326225743346LL;
	int32_t x159 = 7483268;
	static volatile int32_t t34 = 9692268;

	t34 = (x157==((x158-x159)/x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 470747240567716250LLU;
	static volatile int8_t x162 = INT8_MAX;

	t35 = (x161==((x162-x163)/x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x165 = INT64_MAX;
	int32_t x166 = -11462;
	static int32_t x167 = INT32_MIN;
	volatile uint32_t x168 = 4U;
	static volatile int32_t t36 = -1765;

	t36 = (x165==((x166-x167)/x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = 15689484125LL;
	int64_t x172 = -30567LL;
	int32_t t37 = -330093;

	t37 = (x169==((x170-x171)/x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = 34;
	int8_t x174 = INT8_MIN;
	int64_t x175 = INT64_MIN;
	uint8_t x176 = 23U;
	static int32_t t38 = -7;

	t38 = (x173==((x174-x175)/x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x177 = UINT32_MAX;
	volatile int16_t x178 = INT16_MIN;
	int32_t x180 = 11164086;
	volatile int32_t t39 = 27602584;

	t39 = (x177==((x178-x179)/x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 6092;
	static int64_t x182 = INT64_MIN;
	int64_t x183 = -1LL;
	static int32_t x184 = -103062016;
	volatile int32_t t40 = -46823;

	t40 = (x181==((x182-x183)/x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = INT16_MIN;
	int8_t x186 = -1;
	int64_t x187 = INT64_MAX;
	volatile int32_t x188 = INT32_MIN;

	t41 = (x185==((x186-x187)/x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x189 = -11;
	int64_t x190 = -1LL;
	uint8_t x191 = 54U;
	int64_t x192 = -3910361LL;
	volatile int32_t t42 = 5484;

	t42 = (x189==((x190-x191)/x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x197 = -8537756;
	int8_t x198 = -1;
	uint64_t x199 = 93LLU;
	volatile int32_t t43 = -8;

	t43 = (x197==((x198-x199)/x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = 5;
	volatile uint64_t x202 = UINT64_MAX;
	int16_t x203 = -1;

	t44 = (x201==((x202-x203)/x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = UINT8_MAX;
	uint64_t x206 = 107263LLU;
	uint64_t x207 = 41LLU;
	volatile int16_t x208 = INT16_MIN;
	int32_t t45 = 15;

	t45 = (x205==((x206-x207)/x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x209 = -2573;
	static uint8_t x211 = 0U;
	static volatile int64_t x212 = INT64_MIN;
	volatile int32_t t46 = -49415159;

	t46 = (x209==((x210-x211)/x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x214 = 68U;
	static uint64_t x215 = UINT64_MAX;
	static uint32_t x216 = UINT32_MAX;
	int32_t t47 = 0;

	t47 = (x213==((x214-x215)/x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 286530U;
	uint64_t x219 = 2400708592366981LLU;
	volatile int32_t t48 = -263390665;

	t48 = (x217==((x218-x219)/x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x221 = 2576281511861LL;
	int32_t x222 = -7770;
	static int16_t x223 = -1;
	volatile int32_t x224 = INT32_MAX;
	volatile int32_t t49 = 10919;

	t49 = (x221==((x222-x223)/x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = -681;
	int8_t x226 = -28;
	int8_t x227 = 2;

	t50 = (x225==((x226-x227)/x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = 3981;
	uint32_t x231 = 4930U;
	uint8_t x232 = 1U;
	volatile int32_t t51 = 5349;

	t51 = (x229==((x230-x231)/x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x233 = 5;
	int8_t x234 = INT8_MIN;
	volatile int32_t t52 = 0;

	t52 = (x233==((x234-x235)/x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MIN;
	int8_t x238 = -1;
	uint8_t x239 = 0U;
	int8_t x240 = -1;
	int32_t t53 = 609;

	t53 = (x237==((x238-x239)/x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = INT8_MAX;
	int16_t x242 = 1;
	int8_t x243 = INT8_MIN;
	int32_t t54 = 213;

	t54 = (x241==((x242-x243)/x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x249 = 2836083;
	static int8_t x251 = INT8_MAX;
	static volatile int16_t x252 = 46;
	volatile int32_t t55 = -159861074;

	t55 = (x249==((x250-x251)/x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = UINT64_MAX;
	uint64_t x254 = UINT64_MAX;
	uint8_t x255 = 32U;
	static int16_t x256 = -960;
	int32_t t56 = 61632;

	t56 = (x253==((x254-x255)/x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = INT32_MAX;
	static int32_t x266 = INT32_MIN;
	volatile int32_t x267 = -140197152;
	volatile uint16_t x268 = UINT16_MAX;
	int32_t t57 = -47752;

	t57 = (x265==((x266-x267)/x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x269 = INT32_MIN;
	int8_t x272 = -6;

	t58 = (x269==((x270-x271)/x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x273 = 50U;
	int32_t x274 = 1;
	static int32_t x275 = INT32_MAX;
	volatile int64_t x276 = -1LL;
	volatile int32_t t59 = -68314;

	t59 = (x273==((x274-x275)/x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = 3U;
	static int64_t x278 = INT64_MIN;
	uint8_t x280 = 92U;
	volatile int32_t t60 = -1;

	t60 = (x277==((x278-x279)/x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x281 = -5543067;
	uint16_t x282 = UINT16_MAX;
	static uint16_t x283 = UINT16_MAX;
	uint32_t x284 = 46532641U;
	int32_t t61 = -31724239;

	t61 = (x281==((x282-x283)/x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = 9548109820209656LL;
	int64_t x287 = -1LL;
	uint8_t x288 = 36U;
	static volatile int32_t t62 = -34886;

	t62 = (x285==((x286-x287)/x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x290 = -1LL;
	volatile int16_t x292 = -13;
	volatile int32_t t63 = 6;

	t63 = (x289==((x290-x291)/x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = -73817493;
	int16_t x294 = INT16_MIN;
	uint32_t x295 = 7U;
	int8_t x296 = INT8_MAX;

	t64 = (x293==((x294-x295)/x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x298 = -76;
	volatile int8_t x299 = -1;
	int64_t x300 = INT64_MAX;

	t65 = (x297==((x298-x299)/x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	static int32_t x303 = INT32_MIN;
	static int16_t x304 = INT16_MAX;
	int32_t t66 = -20456;

	t66 = (x301==((x302-x303)/x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x305 = INT64_MIN;
	static uint8_t x306 = 1U;
	int32_t x308 = INT32_MIN;

	t67 = (x305==((x306-x307)/x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 45523555U;
	uint8_t x314 = UINT8_MAX;
	int64_t x315 = -5791689663LL;
	uint16_t x316 = 57U;
	volatile int32_t t68 = -843;

	t68 = (x313==((x314-x315)/x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x317 = -181281875229761LL;
	static int16_t x319 = INT16_MIN;
	int8_t x320 = 15;
	int32_t t69 = -3357158;

	t69 = (x317==((x318-x319)/x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = -3517LL;
	int8_t x322 = -49;
	uint64_t x323 = 50LLU;
	static int32_t t70 = 124;

	t70 = (x321==((x322-x323)/x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = -1;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = UINT16_MAX;
	int32_t t71 = 94911;

	t71 = (x325==((x326-x327)/x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = INT32_MIN;
	static int8_t x330 = -1;
	int32_t x331 = -233;
	volatile int8_t x332 = INT8_MAX;
	int32_t t72 = 112;

	t72 = (x329==((x330-x331)/x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x337 = 6835306924LLU;
	int16_t x338 = 1;
	uint16_t x340 = 104U;
	volatile int32_t t73 = 184342275;

	t73 = (x337==((x338-x339)/x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x341 = -88822052742LL;
	uint16_t x343 = 8027U;
	int32_t x344 = INT32_MIN;
	int32_t t74 = -6517;

	t74 = (x341==((x342-x343)/x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x346 = -1;
	static int32_t x347 = INT32_MAX;
	int16_t x348 = 11;

	t75 = (x345==((x346-x347)/x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = INT8_MAX;
	volatile uint64_t x350 = 1LLU;
	int16_t x351 = -91;
	int32_t x352 = -123;
	volatile int32_t t76 = -37;

	t76 = (x349==((x350-x351)/x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x357 = 1U;
	volatile int32_t x358 = -31;
	int32_t x359 = -1;
	volatile int16_t x360 = 2080;
	static volatile int32_t t77 = 64167401;

	t77 = (x357==((x358-x359)/x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	int64_t x363 = -1LL;
	int8_t x364 = INT8_MAX;
	int32_t t78 = -5790;

	t78 = (x361==((x362-x363)/x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x366 = INT64_MIN;
	uint16_t x368 = 723U;
	int32_t t79 = 3;

	t79 = (x365==((x366-x367)/x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MIN;
	uint64_t x370 = UINT64_MAX;
	int64_t x371 = INT64_MAX;
	uint64_t x372 = 3159684366557LLU;
	int32_t t80 = -5413;

	t80 = (x369==((x370-x371)/x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = 16U;
	static uint64_t x374 = UINT64_MAX;
	int64_t x376 = INT64_MIN;
	static volatile int32_t t81 = 24487330;

	t81 = (x373==((x374-x375)/x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = INT16_MAX;
	int32_t x378 = INT32_MIN;
	volatile int32_t t82 = -850483085;

	t82 = (x377==((x378-x379)/x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x381 = -1;
	int64_t x382 = -557308632056072LL;
	static uint16_t x383 = 30U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t83 = -48;

	t83 = (x381==((x382-x383)/x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x385 = UINT16_MAX;
	uint16_t x387 = 8909U;
	int16_t x388 = 13809;
	int32_t t84 = -430234268;

	t84 = (x385==((x386-x387)/x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MAX;
	static uint16_t x391 = UINT16_MAX;
	int32_t t85 = 50485287;

	t85 = (x389==((x390-x391)/x392));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x394 = 875251903U;
	int64_t x395 = 465976LL;

	t86 = (x393==((x394-x395)/x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = INT8_MIN;
	uint32_t x398 = 6810U;
	int8_t x399 = -1;
	int32_t x400 = -84;

	t87 = (x397==((x398-x399)/x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x405 = 3889138804754815841LL;
	static int8_t x406 = INT8_MAX;
	static uint32_t x407 = 65752U;
	int8_t x408 = -1;
	static int32_t t88 = -202006;

	t88 = (x405==((x406-x407)/x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x409 = UINT16_MAX;
	int64_t x410 = -1LL;
	uint64_t x411 = 104LLU;
	int8_t x412 = -1;
	int32_t t89 = -441262;

	t89 = (x409==((x410-x411)/x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MIN;
	static int32_t x418 = -6;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = 47U;
	static int32_t t90 = 470528;

	t90 = (x417==((x418-x419)/x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x421 = INT8_MAX;
	uint64_t x423 = UINT64_MAX;
	static volatile int32_t t91 = 8978;

	t91 = (x421==((x422-x423)/x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x429 = 1641U;
	uint8_t x430 = 1U;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MIN;
	int32_t t92 = -83317173;

	t92 = (x429==((x430-x431)/x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = -1;
	static int32_t x434 = 195114;
	volatile int8_t x436 = 6;
	volatile int32_t t93 = 259021;

	t93 = (x433==((x434-x435)/x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = INT32_MAX;
	static uint8_t x443 = UINT8_MAX;
	static int8_t x444 = -1;
	volatile int32_t t94 = 15;

	t94 = (x441==((x442-x443)/x444));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x445 = INT8_MIN;
	int32_t x446 = 1062355250;
	static int64_t x448 = INT64_MIN;

	t95 = (x445==((x446-x447)/x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = INT8_MAX;
	int8_t x450 = 45;
	int64_t x452 = -1628607434454LL;
	volatile int32_t t96 = 5101;

	t96 = (x449==((x450-x451)/x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = -5;
	volatile int16_t x454 = -1;
	uint8_t x455 = 4U;
	int8_t x456 = -7;
	volatile int32_t t97 = -1074351;

	t97 = (x453==((x454-x455)/x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x458 = 212250LL;
	int16_t x459 = -147;

	t98 = (x457==((x458-x459)/x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x461 = UINT16_MAX;
	int32_t x462 = INT32_MIN;
	volatile int32_t t99 = -701723369;

	t99 = (x461==((x462-x463)/x464));

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

