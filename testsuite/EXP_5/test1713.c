#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 687124;
static int16_t x8 = INT16_MIN;
volatile int32_t t1 = -29;
int64_t x10 = -1LL;
volatile int32_t x13 = INT32_MIN;
volatile int32_t t3 = 60627978;
static volatile int32_t t7 = 251707;
volatile int16_t x34 = INT16_MIN;
static volatile int32_t x52 = INT32_MAX;
int32_t x55 = INT32_MIN;
static uint8_t x56 = UINT8_MAX;
volatile int32_t t14 = 131929;
uint32_t x69 = 13477U;
int32_t t17 = -3285;
int16_t x78 = INT16_MAX;
int64_t x86 = INT64_MIN;
volatile int64_t x91 = INT64_MIN;
uint64_t x97 = UINT64_MAX;
int32_t x105 = -1;
static int32_t x107 = INT32_MIN;
static volatile int64_t x108 = -1LL;
volatile int32_t t25 = -166;
int16_t x125 = INT16_MIN;
static uint16_t x127 = UINT16_MAX;
int32_t t28 = 1;
uint64_t x135 = 23572024161LLU;
volatile int32_t t29 = -7;
uint32_t x141 = UINT32_MAX;
volatile int32_t t33 = -58344776;
uint64_t x153 = 1370LLU;
uint64_t x155 = 35384074075384384LLU;
volatile int8_t x162 = INT8_MAX;
uint32_t x163 = 0U;
volatile int32_t t36 = 20;
static int8_t x175 = -1;
int32_t t39 = 36;
volatile int32_t t42 = -1;
uint64_t x193 = 561443589023309LLU;
static int8_t x196 = -27;
int16_t x197 = -1;
static volatile int8_t x199 = INT8_MIN;
uint16_t x203 = 21U;
static int32_t x205 = -223;
static int32_t x210 = INT32_MIN;
int64_t x212 = INT64_MIN;
int16_t x214 = -1;
static int8_t x216 = 5;
int8_t x219 = -1;
int16_t x227 = 4543;
int32_t x228 = 47215439;
int8_t x231 = 1;
static int32_t t53 = -240559;
volatile int32_t t54 = 845;
uint8_t x243 = 5U;
uint64_t x246 = 26778832397380949LLU;
uint8_t x256 = UINT8_MAX;
static uint32_t x257 = 1080U;
int32_t x259 = -1289;
static volatile int32_t t59 = 26;
static int64_t x261 = 849696217567922LL;
int8_t x264 = -1;
int8_t x268 = INT8_MIN;
uint32_t x272 = UINT32_MAX;
static int32_t t62 = -118336221;
static volatile int32_t t63 = 8216803;
static int16_t x286 = INT16_MIN;
int16_t x291 = -1;
int64_t x298 = 59808835859228LL;
int8_t x306 = -1;
static volatile int32_t t71 = -357175243;
volatile int32_t t72 = 267376024;
volatile uint16_t x315 = UINT16_MAX;
int64_t x316 = -15503020260041LL;
static int32_t t74 = 503386838;
volatile int8_t x322 = INT8_MAX;
int16_t x325 = INT16_MAX;
int16_t x328 = INT16_MIN;
int32_t t77 = 8965472;
uint16_t x336 = UINT16_MAX;
uint8_t x345 = UINT8_MAX;
int32_t x346 = -1;
int16_t x349 = -63;
uint32_t x351 = 1U;
int32_t x356 = INT32_MIN;
int64_t x357 = 14705LL;
static int16_t x358 = 15519;
static uint32_t x360 = UINT32_MAX;
int16_t x367 = -2642;
int8_t x368 = INT8_MIN;
int32_t t86 = -15528;
int8_t x376 = 0;
static int8_t x379 = INT8_MIN;
static int16_t x380 = INT16_MAX;
volatile int32_t t90 = 6;
volatile uint8_t x386 = 2U;
volatile int32_t x387 = INT32_MIN;
static uint8_t x390 = 20U;
int16_t x392 = INT16_MIN;
volatile int32_t t94 = -12;
int32_t t95 = -83306323;
int64_t x407 = INT64_MAX;
static int32_t t96 = 199489998;
int8_t x418 = INT8_MIN;
static volatile int32_t t98 = -148;
int32_t x424 = -1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int8_t x2 = 45;
	int8_t x3 = -20;
	int32_t x4 = -194802;

	t0 = (x1<=((x2&x3)-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int32_t x6 = 12185;
	static uint64_t x7 = 938637847LLU;

	t1 = (x5<=((x6&x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 0;
	uint8_t x11 = 13U;
	static volatile uint64_t x12 = 19039LLU;
	int32_t t2 = 200543;

	t2 = (x9<=((x10&x11)-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = 0LL;
	static int32_t x15 = 0;
	volatile int8_t x16 = INT8_MAX;

	t3 = (x13<=((x14&x15)-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 36U;
	int8_t x19 = INT8_MIN;
	int16_t x20 = -1;
	static volatile int32_t t4 = 7;

	t4 = (x17<=((x18&x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = 29;
	volatile int32_t x23 = 16924;
	volatile int64_t x24 = -6254LL;
	int32_t t5 = -3;

	t5 = (x21<=((x22&x23)-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int64_t x26 = -270018LL;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 1U;
	static int32_t t6 = 8494;

	t6 = (x25<=((x26&x27)-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x29 = 41U;
	uint8_t x30 = UINT8_MAX;
	uint32_t x31 = 93267290U;
	uint32_t x32 = 19U;

	t7 = (x29<=((x30&x31)-x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int16_t x35 = -1;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -74;

	t8 = (x33<=((x34&x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	int16_t x40 = -618;
	int32_t t9 = 362986;

	t9 = (x37<=((x38&x39)-x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MAX;
	int16_t x42 = -174;
	static uint8_t x43 = 3U;
	uint32_t x44 = UINT32_MAX;
	static volatile int32_t t10 = 78;

	t10 = (x41<=((x42&x43)-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	int64_t x46 = INT64_MIN;
	int64_t x47 = -9619983191253LL;
	int32_t x48 = -1231;
	int32_t t11 = 9;

	t11 = (x45<=((x46&x47)-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MAX;
	static int8_t x50 = 13;
	int64_t x51 = INT64_MIN;
	volatile int32_t t12 = -931295763;

	t12 = (x49<=((x50&x51)-x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	uint16_t x54 = 2U;
	int32_t t13 = -95881610;

	t13 = (x53<=((x54&x55)-x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	volatile uint32_t x58 = UINT32_MAX;
	static volatile int16_t x59 = INT16_MIN;
	int8_t x60 = INT8_MIN;

	t14 = (x57<=((x58&x59)-x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -7;
	uint8_t x62 = 3U;
	int32_t x63 = INT32_MIN;
	int64_t x64 = -23533LL;
	volatile int32_t t15 = -3441;

	t15 = (x61<=((x62&x63)-x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 44816732895LL;
	int32_t x66 = INT32_MAX;
	volatile int16_t x67 = INT16_MAX;
	static uint32_t x68 = 0U;
	int32_t t16 = -2504;

	t16 = (x65<=((x66&x67)-x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	volatile uint64_t x72 = UINT64_MAX;

	t17 = (x69<=((x70&x71)-x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = 14U;
	static int16_t x79 = INT16_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t18 = 1;

	t18 = (x77<=((x78&x79)-x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	static uint16_t x82 = UINT16_MAX;
	static int16_t x83 = -11839;
	uint32_t x84 = UINT32_MAX;
	int32_t t19 = -18;

	t19 = (x81<=((x82&x83)-x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 236U;
	static uint64_t x87 = UINT64_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t20 = -6;

	t20 = (x85<=((x86&x87)-x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = UINT64_MAX;
	int64_t x90 = 4184294151030797LL;
	uint32_t x92 = 1U;
	volatile int32_t t21 = 16;

	t21 = (x89<=((x90&x91)-x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = INT64_MIN;
	volatile int32_t x94 = INT32_MIN;
	uint8_t x95 = 1U;
	uint16_t x96 = 85U;
	volatile int32_t t22 = 7261233;

	t22 = (x93<=((x94&x95)-x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x98 = -52007680714LL;
	uint16_t x99 = 28U;
	static int16_t x100 = INT16_MIN;
	static int32_t t23 = -5;

	t23 = (x97<=((x98&x99)-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x101 = UINT64_MAX;
	int64_t x102 = -3782108538735LL;
	volatile uint16_t x103 = 1U;
	int8_t x104 = INT8_MAX;
	volatile int32_t t24 = -4051;

	t24 = (x101<=((x102&x103)-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = 3824LL;

	t25 = (x105<=((x106&x107)-x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 637563044939854LL;
	volatile int16_t x110 = INT16_MAX;
	static volatile int32_t x111 = -1;
	volatile uint32_t x112 = 4121278U;
	volatile int32_t t26 = -386679928;

	t26 = (x109<=((x110&x111)-x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	uint16_t x123 = 2641U;
	int32_t x124 = -3814;
	static int32_t t27 = 297415;

	t27 = (x121<=((x122&x123)-x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x126 = INT64_MAX;
	int64_t x128 = -1LL;

	t28 = (x125<=((x126&x127)-x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = 12805;
	int32_t x136 = -710674;

	t29 = (x133<=((x134&x135)-x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = 0;
	volatile uint32_t x139 = 203103946U;
	static uint8_t x140 = UINT8_MAX;
	int32_t t30 = 0;

	t30 = (x137<=((x138&x139)-x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x142 = INT64_MAX;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t31 = -3748212;

	t31 = (x141<=((x142&x143)-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = INT32_MAX;
	int16_t x146 = -450;
	int32_t x147 = INT32_MAX;
	static int64_t x148 = 62LL;
	volatile int32_t t32 = 11983959;

	t32 = (x145<=((x146&x147)-x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 1U;
	volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = 58;
	volatile uint8_t x152 = 17U;

	t33 = (x149<=((x150&x151)-x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = -2;
	uint16_t x156 = UINT16_MAX;
	int32_t t34 = -56440819;

	t34 = (x153<=((x154&x155)-x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = -3;
	int8_t x158 = 1;
	int64_t x159 = 17LL;
	uint8_t x160 = 1U;
	static int32_t t35 = 430050395;

	t35 = (x157<=((x158&x159)-x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	int64_t x164 = INT64_MAX;

	t36 = (x161<=((x162&x163)-x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x165 = 174U;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MAX;
	uint64_t x168 = 3LLU;
	volatile int32_t t37 = 3;

	t37 = (x165<=((x166&x167)-x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = 0;
	uint32_t x170 = 7U;
	uint8_t x171 = 10U;
	static int16_t x172 = -1;
	volatile int32_t t38 = 117018;

	t38 = (x169<=((x170&x171)-x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = -1LL;
	volatile uint64_t x174 = 193LLU;
	int8_t x176 = -7;

	t39 = (x173<=((x174&x175)-x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 206982;
	int32_t x182 = -19;
	int64_t x183 = 151156836647LL;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t40 = -11187512;

	t40 = (x181<=((x182&x183)-x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = -285491048583886306LL;
	int16_t x186 = -1;
	int32_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	int32_t t41 = 7741;

	t41 = (x185<=((x186&x187)-x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = INT64_MAX;
	int8_t x190 = INT8_MAX;
	uint64_t x191 = UINT64_MAX;
	int32_t x192 = 83;

	t42 = (x189<=((x190&x191)-x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x194 = 6870U;
	int32_t x195 = -1;
	static volatile int32_t t43 = 249;

	t43 = (x193<=((x194&x195)-x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x198 = -1;
	uint32_t x200 = 74669U;
	static volatile int32_t t44 = -1477;

	t44 = (x197<=((x198&x199)-x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x201 = 3668887U;
	volatile uint8_t x202 = 20U;
	int64_t x204 = -1LL;
	int32_t t45 = 101079722;

	t45 = (x201<=((x202&x203)-x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x206 = 29207271U;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 1188U;
	static volatile int32_t t46 = 49360;

	t46 = (x205<=((x206&x207)-x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x209 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	static volatile int32_t t47 = -1;

	t47 = (x209<=((x210&x211)-x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x213 = INT8_MIN;
	volatile int8_t x215 = INT8_MAX;
	static volatile int32_t t48 = -3;

	t48 = (x213<=((x214&x215)-x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 853LLU;
	int8_t x218 = -1;
	uint32_t x220 = 3126010U;
	int32_t t49 = 0;

	t49 = (x217<=((x218&x219)-x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -1;
	int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MIN;
	static int16_t x224 = -3364;
	static int32_t t50 = -20533631;

	t50 = (x221<=((x222&x223)-x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = INT64_MIN;
	int8_t x226 = 1;
	static volatile int32_t t51 = -24622;

	t51 = (x225<=((x226&x227)-x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x229 = -15571;
	int64_t x230 = -520559404659119410LL;
	int32_t x232 = -159617;
	int32_t t52 = -1804;

	t52 = (x229<=((x230&x231)-x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x233 = -1;
	int8_t x234 = -1;
	static uint16_t x235 = UINT16_MAX;
	int16_t x236 = INT16_MIN;

	t53 = (x233<=((x234&x235)-x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = 79;
	uint32_t x238 = UINT32_MAX;
	int64_t x239 = -8075489LL;
	uint64_t x240 = UINT64_MAX;

	t54 = (x237<=((x238&x239)-x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MAX;
	volatile int32_t x242 = 7009007;
	static uint32_t x244 = UINT32_MAX;
	volatile int32_t t55 = -12012881;

	t55 = (x241<=((x242&x243)-x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = -10;
	int16_t x247 = 46;
	uint8_t x248 = 1U;
	volatile int32_t t56 = 543717808;

	t56 = (x245<=((x246&x247)-x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	volatile uint16_t x250 = 0U;
	static int32_t x251 = -2;
	int32_t x252 = INT32_MAX;
	volatile int32_t t57 = 8;

	t57 = (x249<=((x250&x251)-x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = 1;
	static int64_t x254 = -16491927994465889LL;
	static uint64_t x255 = 494LLU;
	volatile int32_t t58 = 16486101;

	t58 = (x253<=((x254&x255)-x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x258 = 146923;
	volatile int32_t x260 = 1495813;

	t59 = (x257<=((x258&x259)-x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x262 = 68U;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t t60 = -2;

	t60 = (x261<=((x262&x263)-x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x265 = 6;
	uint64_t x266 = 15927LLU;
	int16_t x267 = -5;
	volatile int32_t t61 = -15950;

	t61 = (x265<=((x266&x267)-x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = UINT32_MAX;
	int32_t x271 = INT32_MAX;

	t62 = (x269<=((x270&x271)-x272));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 57U;
	int8_t x274 = 0;
	uint64_t x275 = 22959LLU;
	static int32_t x276 = INT32_MIN;

	t63 = (x273<=((x274&x275)-x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -8;
	static int8_t x278 = -1;
	int64_t x279 = -1LL;
	int64_t x280 = 410LL;
	int32_t t64 = -3628;

	t64 = (x277<=((x278&x279)-x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x281 = 793192054944LLU;
	volatile int16_t x282 = -1;
	volatile int8_t x283 = INT8_MAX;
	int8_t x284 = -1;
	int32_t t65 = -1;

	t65 = (x281<=((x282&x283)-x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	int8_t x287 = -4;
	static uint64_t x288 = 1542418443LLU;
	static volatile int32_t t66 = 6;

	t66 = (x285<=((x286&x287)-x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x289 = 4590042228877102678LLU;
	static int32_t x290 = INT32_MIN;
	int8_t x292 = INT8_MIN;
	int32_t t67 = 1;

	t67 = (x289<=((x290&x291)-x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	uint8_t x295 = 2U;
	int8_t x296 = 2;
	int32_t t68 = 12198;

	t68 = (x293<=((x294&x295)-x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 53U;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MAX;
	volatile int32_t t69 = 1045085;

	t69 = (x297<=((x298&x299)-x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = 25949;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = -6LL;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t70 = -441208907;

	t70 = (x301<=((x302&x303)-x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = 359356U;
	int8_t x307 = INT8_MAX;
	volatile int8_t x308 = INT8_MAX;

	t71 = (x305<=((x306&x307)-x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	uint8_t x310 = 2U;
	volatile int8_t x311 = -52;
	int8_t x312 = 0;

	t72 = (x309<=((x310&x311)-x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MAX;
	volatile int16_t x314 = -1;
	static volatile int32_t t73 = 411707;

	t73 = (x313<=((x314&x315)-x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x317 = UINT16_MAX;
	uint8_t x318 = UINT8_MAX;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MIN;

	t74 = (x317<=((x318&x319)-x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MAX;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t75 = -1;

	t75 = (x321<=((x322&x323)-x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x326 = 100U;
	int8_t x327 = 0;
	static volatile int32_t t76 = -1;

	t76 = (x325<=((x326&x327)-x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x329 = UINT64_MAX;
	uint8_t x330 = 0U;
	uint16_t x331 = 23269U;
	static uint32_t x332 = 498951503U;

	t77 = (x329<=((x330&x331)-x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = -8;
	volatile int32_t x334 = INT32_MIN;
	uint8_t x335 = UINT8_MAX;
	static volatile int32_t t78 = 710811838;

	t78 = (x333<=((x334&x335)-x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x337 = UINT8_MAX;
	volatile uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = 3418U;
	volatile int32_t t79 = 2033;

	t79 = (x337<=((x338&x339)-x340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 509U;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -310;
	int64_t x344 = 6191197153611LL;
	volatile int32_t t80 = 1;

	t80 = (x341<=((x342&x343)-x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = 32;
	int32_t t81 = 55121;

	t81 = (x345<=((x346&x347)-x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x350 = INT16_MAX;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t82 = -14116100;

	t82 = (x349<=((x350&x351)-x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int16_t x354 = -1;
	int64_t x355 = INT64_MIN;
	int32_t t83 = 13140711;

	t83 = (x353<=((x354&x355)-x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x359 = UINT64_MAX;
	volatile int32_t t84 = -215794039;

	t84 = (x357<=((x358&x359)-x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x361 = 2188663016066848511LLU;
	int32_t x362 = -1;
	int32_t x363 = 8;
	volatile uint16_t x364 = 88U;
	int32_t t85 = -6208;

	t85 = (x361<=((x362&x363)-x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = 1;
	int32_t x366 = INT32_MIN;

	t86 = (x365<=((x366&x367)-x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 118638U;
	int64_t x370 = -80757165227LL;
	uint16_t x371 = UINT16_MAX;
	static volatile int8_t x372 = -1;
	int32_t t87 = -4;

	t87 = (x369<=((x370&x371)-x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = -1LL;
	volatile uint8_t x374 = 4U;
	int8_t x375 = 11;
	int32_t t88 = -1;

	t88 = (x373<=((x374&x375)-x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x377 = INT64_MIN;
	int16_t x378 = 48;
	static volatile int32_t t89 = 31;

	t89 = (x377<=((x378&x379)-x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x381 = -1;
	int16_t x382 = INT16_MIN;
	int8_t x383 = -1;
	uint8_t x384 = UINT8_MAX;

	t90 = (x381<=((x382&x383)-x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = 0;
	int8_t x388 = -1;
	volatile int32_t t91 = 241071;

	t91 = (x385<=((x386&x387)-x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x391 = INT16_MIN;
	int32_t t92 = 243956;

	t92 = (x389<=((x390&x391)-x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x393 = INT64_MIN;
	uint16_t x394 = 4586U;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	int32_t t93 = -33322665;

	t93 = (x393<=((x394&x395)-x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = 47U;
	static int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;

	t94 = (x397<=((x398&x399)-x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x401 = 133LLU;
	uint32_t x402 = 152827763U;
	int16_t x403 = -451;
	int64_t x404 = 52175770630380LL;

	t95 = (x401<=((x402&x403)-x404));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 3U;
	static int16_t x406 = -1;
	volatile int32_t x408 = INT32_MAX;

	t96 = (x405<=((x406&x407)-x408));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = -1LL;
	int8_t x410 = -6;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = 1U;
	volatile int32_t t97 = -254601021;

	t97 = (x409<=((x410&x411)-x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = 1LL;
	volatile uint16_t x419 = 30U;
	int32_t x420 = INT32_MAX;

	t98 = (x417<=((x418&x419)-x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MIN;
	volatile int64_t x422 = 103003935758197064LL;
	int8_t x423 = -29;
	volatile int32_t t99 = -64669;

	t99 = (x421<=((x422&x423)-x424));

	if (t99 != 1) { NG(); } else { ; }
	
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

