#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int16_t x8 = INT16_MAX;
volatile int32_t t1 = 699;
static int64_t x19 = INT64_MIN;
uint32_t x20 = 934U;
volatile int32_t t3 = 1;
int32_t x23 = -1;
static int32_t x25 = 165;
volatile int32_t t5 = 138449714;
int64_t x30 = INT64_MIN;
int64_t x33 = INT64_MIN;
uint64_t x36 = 4478487512129870185LLU;
volatile int32_t t7 = -190213;
int64_t x44 = -16226617861331933LL;
volatile int32_t t9 = 9;
static int16_t x48 = -9712;
int16_t x59 = 1;
int16_t x61 = -1;
int16_t x63 = -6;
volatile int64_t x70 = -813137185569940LL;
uint32_t x73 = 0U;
volatile int8_t x74 = -8;
volatile int64_t x89 = INT64_MIN;
int64_t x98 = -1263358896902437LL;
uint16_t x105 = 5438U;
volatile int64_t x106 = INT64_MIN;
uint64_t x114 = UINT64_MAX;
int16_t x119 = INT16_MIN;
uint16_t x121 = UINT16_MAX;
int16_t x124 = INT16_MIN;
int8_t x131 = -10;
static volatile int32_t t29 = -11;
int32_t x134 = INT32_MIN;
int16_t x135 = INT16_MAX;
volatile int32_t t32 = 432;
static int32_t x146 = 95;
static int64_t x147 = INT64_MAX;
volatile int64_t x152 = -654437206285LL;
volatile int32_t t35 = 2609710;
int32_t x173 = INT32_MAX;
static volatile int32_t t38 = 11879961;
volatile int16_t x180 = -1;
uint32_t x183 = 48758U;
int32_t x184 = INT32_MIN;
int32_t x185 = INT32_MIN;
static int32_t x186 = INT32_MIN;
volatile uint8_t x194 = 25U;
int32_t x199 = INT32_MAX;
int64_t x204 = -2217141928312034LL;
static uint32_t x205 = UINT32_MAX;
int8_t x208 = 38;
uint8_t x210 = UINT8_MAX;
volatile int32_t x214 = 3;
int16_t x217 = -1;
int8_t x220 = INT8_MAX;
int32_t t49 = -2381447;
uint16_t x222 = UINT16_MAX;
int16_t x223 = -21;
static int64_t x229 = INT64_MIN;
static volatile uint64_t x234 = 1368936559086199726LLU;
volatile int32_t t55 = 61077982;
uint32_t x254 = 1271747371U;
static volatile int32_t x257 = 4010;
uint32_t x259 = 2138608234U;
int32_t x260 = -24;
int32_t x263 = 0;
volatile int32_t t59 = 187984;
int8_t x268 = INT8_MIN;
static volatile int32_t t60 = -511520;
int8_t x277 = 0;
uint32_t x279 = 30968242U;
int32_t t62 = 3210032;
volatile int64_t x282 = INT64_MIN;
uint64_t x284 = 15279052LLU;
volatile int32_t t63 = -3859269;
int64_t x291 = 9120268915LL;
uint32_t x296 = 196U;
static volatile int32_t t66 = -84;
int64_t x303 = -1LL;
uint32_t x308 = 132U;
int16_t x309 = INT16_MIN;
static uint8_t x318 = UINT8_MAX;
volatile int8_t x326 = -1;
uint64_t x327 = UINT64_MAX;
static uint64_t x329 = 136LLU;
uint32_t x338 = UINT32_MAX;
int16_t x340 = INT16_MIN;
int64_t x342 = INT64_MIN;
int16_t x343 = INT16_MIN;
volatile uint64_t x346 = UINT64_MAX;
uint8_t x349 = 2U;
int64_t x355 = 2490472209LL;
int16_t x362 = INT16_MAX;
static int16_t x372 = INT16_MIN;
volatile int32_t t84 = -1289;
int32_t x390 = INT32_MAX;
volatile int8_t x391 = INT8_MAX;
volatile int8_t x394 = -1;
uint16_t x395 = UINT16_MAX;
int64_t x403 = INT64_MIN;
int64_t x413 = INT64_MIN;
static volatile int8_t x416 = 1;
int64_t x417 = -2815980513813186464LL;
int16_t x418 = INT16_MIN;
int32_t x424 = -1;
int32_t t97 = 3523889;
volatile int32_t t99 = -19407;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int64_t x3 = INT64_MAX;
	int8_t x4 = -1;
	static int32_t t0 = -175102;

	t0 = ((x1%x2)<=(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int8_t x6 = INT8_MIN;
	uint64_t x7 = 27216436594609LLU;

	t1 = ((x5%x6)<=(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 0;
	int16_t x14 = INT16_MIN;
	int32_t x15 = 22411;
	int8_t x16 = INT8_MAX;
	static int32_t t2 = 8193879;

	t2 = ((x13%x14)<=(x15+x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;

	t3 = ((x17%x18)<=(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	int16_t x22 = INT16_MIN;
	int32_t x24 = -2511;
	int32_t t4 = 168;

	t4 = ((x21%x22)<=(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MAX;

	t5 = ((x25%x26)<=(x27+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x31 = -97;
	static volatile int64_t x32 = INT64_MAX;
	volatile int32_t t6 = 3;

	t6 = ((x29%x30)<=(x31+x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x34 = -1280LL;
	uint16_t x35 = UINT16_MAX;

	t7 = ((x33%x34)<=(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 17530U;
	static uint16_t x38 = 8574U;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = 51492LLU;
	static int32_t t8 = 75;

	t8 = ((x37%x38)<=(x39+x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint16_t x42 = 17U;
	volatile uint16_t x43 = 126U;

	t9 = ((x41%x42)<=(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 2928;
	static int64_t x46 = -1LL;
	uint8_t x47 = 1U;
	volatile int32_t t10 = -1007720689;

	t10 = ((x45%x46)<=(x47+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1897921884LL;
	int16_t x50 = INT16_MAX;
	int8_t x51 = -1;
	volatile int8_t x52 = INT8_MIN;
	static int32_t t11 = -1066;

	t11 = ((x49%x50)<=(x51+x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -23;
	int16_t x54 = 281;
	int8_t x55 = 1;
	int8_t x56 = INT8_MIN;
	volatile int32_t t12 = 989159;

	t12 = ((x53%x54)<=(x55+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MIN;
	uint64_t x58 = 262324LLU;
	int64_t x60 = 697960211348LL;
	static int32_t t13 = 0;

	t13 = ((x57%x58)<=(x59+x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = INT32_MIN;
	uint16_t x64 = 0U;
	static volatile int32_t t14 = 864;

	t14 = ((x61%x62)<=(x63+x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = UINT16_MAX;
	volatile int8_t x66 = INT8_MAX;
	int32_t x67 = 53411;
	uint32_t x68 = 0U;
	int32_t t15 = 32426;

	t15 = ((x65%x66)<=(x67+x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 824U;
	uint32_t x71 = 25569U;
	volatile int8_t x72 = INT8_MIN;
	int32_t t16 = 8;

	t16 = ((x69%x70)<=(x71+x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x75 = INT16_MIN;
	volatile uint8_t x76 = 87U;
	volatile int32_t t17 = -425615;

	t17 = ((x73%x74)<=(x75+x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 19;
	int16_t x78 = -1;
	static int8_t x79 = 5;
	int16_t x80 = -1;
	int32_t t18 = -10371695;

	t18 = ((x77%x78)<=(x79+x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	volatile uint64_t x86 = 188133311886436686LLU;
	int32_t x87 = INT32_MIN;
	int64_t x88 = 72413LL;
	volatile int32_t t19 = 796812;

	t19 = ((x85%x86)<=(x87+x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x90 = 90541U;
	int64_t x91 = 335563956004564LL;
	volatile int64_t x92 = -1LL;
	volatile int32_t t20 = 1;

	t20 = ((x89%x90)<=(x91+x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 1;
	volatile int8_t x99 = INT8_MIN;
	static int8_t x100 = INT8_MAX;
	int32_t t21 = -63;

	t21 = ((x97%x98)<=(x99+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = INT32_MIN;
	uint8_t x102 = 97U;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t22 = -20033216;

	t22 = ((x101%x102)<=(x103+x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x107 = 3489U;
	int32_t x108 = -1;
	volatile int32_t t23 = -4025042;

	t23 = ((x105%x106)<=(x107+x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = INT32_MAX;
	int32_t x110 = INT32_MIN;
	volatile int32_t x111 = -1;
	static uint16_t x112 = 2454U;
	int32_t t24 = -14471;

	t24 = ((x109%x110)<=(x111+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MAX;
	uint8_t x115 = UINT8_MAX;
	uint32_t x116 = 495311746U;
	int32_t t25 = -105;

	t25 = ((x113%x114)<=(x115+x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x117 = 158533167U;
	volatile int8_t x118 = 1;
	volatile uint32_t x120 = UINT32_MAX;
	volatile int32_t t26 = 210210541;

	t26 = ((x117%x118)<=(x119+x120));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x122 = INT32_MIN;
	volatile uint16_t x123 = 23726U;
	volatile int32_t t27 = 482;

	t27 = ((x121%x122)<=(x123+x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = -1LL;
	uint16_t x126 = 61U;
	uint16_t x127 = 33U;
	static int8_t x128 = -1;
	volatile int32_t t28 = 1093;

	t28 = ((x125%x126)<=(x127+x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -2972;
	uint64_t x130 = UINT64_MAX;
	static int16_t x132 = INT16_MIN;

	t29 = ((x129%x130)<=(x131+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x136 = 499U;
	int32_t t30 = -324736790;

	t30 = ((x133%x134)<=(x135+x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x137 = 1;
	int32_t x138 = -14032059;
	int16_t x139 = INT16_MIN;
	static uint32_t x140 = 74U;
	int32_t t31 = -24320;

	t31 = ((x137%x138)<=(x139+x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = INT64_MIN;
	static uint16_t x142 = UINT16_MAX;
	volatile uint8_t x143 = UINT8_MAX;
	int16_t x144 = -7;

	t32 = ((x141%x142)<=(x143+x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = 44U;
	int64_t x148 = INT64_MIN;
	int32_t t33 = -113668;

	t33 = ((x145%x146)<=(x147+x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	static uint64_t x151 = 8582873950093092174LLU;
	volatile int32_t t34 = -10324;

	t34 = ((x149%x150)<=(x151+x152));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MAX;
	volatile int8_t x158 = INT8_MAX;
	static uint16_t x159 = 1097U;
	volatile int16_t x160 = INT16_MIN;

	t35 = ((x157%x158)<=(x159+x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x161 = 1U;
	static uint64_t x162 = UINT64_MAX;
	static int32_t x163 = INT32_MIN;
	int8_t x164 = 2;
	volatile int32_t t36 = 92;

	t36 = ((x161%x162)<=(x163+x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x170 = -1LL;
	volatile int32_t x171 = INT32_MIN;
	uint64_t x172 = 119340813815LLU;
	volatile int32_t t37 = -12623;

	t37 = ((x169%x170)<=(x171+x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x174 = 12U;
	volatile uint16_t x175 = 359U;
	static volatile uint16_t x176 = UINT16_MAX;

	t38 = ((x173%x174)<=(x175+x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1LL;
	uint16_t x178 = 3097U;
	int16_t x179 = INT16_MIN;
	int32_t t39 = -41572;

	t39 = ((x177%x178)<=(x179+x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = 20U;
	int32_t x182 = INT32_MIN;
	int32_t t40 = 0;

	t40 = ((x181%x182)<=(x183+x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x187 = -244;
	uint8_t x188 = 8U;
	volatile int32_t t41 = -84;

	t41 = ((x185%x186)<=(x187+x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = -44;
	int16_t x190 = -2703;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = 94U;
	int32_t t42 = 3129;

	t42 = ((x189%x190)<=(x191+x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = INT8_MIN;
	static volatile int8_t x195 = INT8_MIN;
	uint64_t x196 = 2735212LLU;
	volatile int32_t t43 = -397;

	t43 = ((x193%x194)<=(x195+x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = 0;
	int16_t x198 = INT16_MAX;
	static uint32_t x200 = 34373U;
	static volatile int32_t t44 = 1;

	t44 = ((x197%x198)<=(x199+x200));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = -1;
	int16_t x202 = -1;
	uint32_t x203 = 162951469U;
	static int32_t t45 = 268172996;

	t45 = ((x201%x202)<=(x203+x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x206 = INT64_MAX;
	int8_t x207 = INT8_MIN;
	volatile int32_t t46 = 273875937;

	t46 = ((x205%x206)<=(x207+x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x209 = 740LLU;
	static int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t47 = 0;

	t47 = ((x209%x210)<=(x211+x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x213 = 1U;
	volatile int64_t x215 = -1LL;
	volatile uint16_t x216 = 0U;
	static volatile int32_t t48 = -510;

	t48 = ((x213%x214)<=(x215+x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = -1;
	uint32_t x219 = UINT32_MAX;

	t49 = ((x217%x218)<=(x219+x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t50 = -60;

	t50 = ((x221%x222)<=(x223+x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = -426993953087LL;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = 3472270041584660663LLU;
	volatile int16_t x228 = 6;
	int32_t t51 = -64;

	t51 = ((x225%x226)<=(x227+x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x230 = UINT16_MAX;
	static int8_t x231 = 63;
	volatile uint8_t x232 = 2U;
	volatile int32_t t52 = 10;

	t52 = ((x229%x230)<=(x231+x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x233 = INT64_MIN;
	static volatile int16_t x235 = -1;
	int16_t x236 = 8;
	int32_t t53 = -21657397;

	t53 = ((x233%x234)<=(x235+x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = INT16_MIN;
	static uint16_t x238 = 4975U;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -1;
	volatile int32_t t54 = 265;

	t54 = ((x237%x238)<=(x239+x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = -369;
	static int8_t x243 = INT8_MAX;
	volatile uint16_t x244 = 1U;

	t55 = ((x241%x242)<=(x243+x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x249 = INT16_MAX;
	int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MAX;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t56 = -1;

	t56 = ((x249%x250)<=(x251+x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	volatile int64_t x255 = 1161LL;
	uint8_t x256 = UINT8_MAX;
	static volatile int32_t t57 = 404131;

	t57 = ((x253%x254)<=(x255+x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x258 = -1;
	volatile int32_t t58 = -1254974;

	t58 = ((x257%x258)<=(x259+x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x261 = -1;
	int64_t x262 = INT64_MAX;
	static int32_t x264 = INT32_MIN;

	t59 = ((x261%x262)<=(x263+x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = -1;
	volatile uint16_t x266 = UINT16_MAX;
	int16_t x267 = INT16_MIN;

	t60 = ((x265%x266)<=(x267+x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = 126U;
	static volatile int32_t x274 = INT32_MIN;
	int64_t x275 = INT64_MAX;
	static int8_t x276 = -1;
	int32_t t61 = -48565520;

	t61 = ((x273%x274)<=(x275+x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x278 = INT32_MIN;
	int32_t x280 = INT32_MIN;

	t62 = ((x277%x278)<=(x279+x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MAX;
	uint64_t x283 = 137975404192641569LLU;

	t63 = ((x281%x282)<=(x283+x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x285 = -1;
	int8_t x286 = INT8_MAX;
	static int16_t x287 = INT16_MIN;
	uint8_t x288 = 99U;
	int32_t t64 = 1049;

	t64 = ((x285%x286)<=(x287+x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x289 = 0U;
	uint8_t x290 = 3U;
	int64_t x292 = -131867LL;
	volatile int32_t t65 = 95564882;

	t65 = ((x289%x290)<=(x291+x292));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x293 = 32682448U;
	uint64_t x294 = 785438990423LLU;
	int32_t x295 = INT32_MIN;

	t66 = ((x293%x294)<=(x295+x296));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x297 = 0U;
	static int64_t x298 = -98155LL;
	int32_t x299 = 22;
	uint16_t x300 = UINT16_MAX;
	static int32_t t67 = -5;

	t67 = ((x297%x298)<=(x299+x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x301 = 2;
	int32_t x302 = INT32_MIN;
	int64_t x304 = -1LL;
	int32_t t68 = -10063;

	t68 = ((x301%x302)<=(x303+x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = 0;
	int32_t x306 = -1018424585;
	int64_t x307 = INT64_MIN;
	int32_t t69 = 3814625;

	t69 = ((x305%x306)<=(x307+x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x310 = INT16_MIN;
	uint8_t x311 = 4U;
	int16_t x312 = 81;
	volatile int32_t t70 = -232;

	t70 = ((x309%x310)<=(x311+x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x313 = -1LL;
	volatile int16_t x314 = INT16_MAX;
	int32_t x315 = INT32_MIN;
	volatile uint8_t x316 = 52U;
	volatile int32_t t71 = 13874;

	t71 = ((x313%x314)<=(x315+x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x317 = INT8_MIN;
	static uint32_t x319 = 1U;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t72 = -1292;

	t72 = ((x317%x318)<=(x319+x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x321 = -1;
	int16_t x322 = -10522;
	static int16_t x323 = 6077;
	uint64_t x324 = UINT64_MAX;
	static int32_t t73 = -120;

	t73 = ((x321%x322)<=(x323+x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x325 = -1;
	volatile int64_t x328 = INT64_MAX;
	volatile int32_t t74 = -22357465;

	t74 = ((x325%x326)<=(x327+x328));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x330 = INT8_MIN;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t75 = 6;

	t75 = ((x329%x330)<=(x331+x332));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x333 = 2055654117LLU;
	static int64_t x334 = -125LL;
	int64_t x335 = 1774265355353LL;
	volatile uint64_t x336 = 1787LLU;
	static int32_t t76 = -22341;

	t76 = ((x333%x334)<=(x335+x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x337 = INT8_MAX;
	int8_t x339 = INT8_MIN;
	int32_t t77 = 1;

	t77 = ((x337%x338)<=(x339+x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = -15;
	uint64_t x344 = 605556858922428LLU;
	volatile int32_t t78 = -25;

	t78 = ((x341%x342)<=(x343+x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = 1631;
	static int32_t x347 = -1;
	static volatile int64_t x348 = INT64_MAX;
	int32_t t79 = 91054503;

	t79 = ((x345%x346)<=(x347+x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x350 = -1;
	uint16_t x351 = 3078U;
	int8_t x352 = 3;
	int32_t t80 = 156814104;

	t80 = ((x349%x350)<=(x351+x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = 1303;
	static int64_t x356 = -1LL;
	int32_t t81 = -634620;

	t81 = ((x353%x354)<=(x355+x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MAX;
	static int32_t x358 = INT32_MIN;
	int8_t x359 = -1;
	uint16_t x360 = 2U;
	volatile int32_t t82 = -957966818;

	t82 = ((x357%x358)<=(x359+x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = INT32_MAX;
	int32_t x363 = INT32_MAX;
	int16_t x364 = -79;
	static volatile int32_t t83 = -1;

	t83 = ((x361%x362)<=(x363+x364));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x369 = 9U;
	static int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MAX;

	t84 = ((x369%x370)<=(x371+x372));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = -6;
	int64_t x374 = -989203980041012LL;
	static int64_t x375 = -1LL;
	int32_t x376 = INT32_MIN;
	int32_t t85 = 4080;

	t85 = ((x373%x374)<=(x375+x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = 54LLU;
	volatile int16_t x379 = INT16_MAX;
	static int64_t x380 = 12880349381997986LL;
	volatile int32_t t86 = -97;

	t86 = ((x377%x378)<=(x379+x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x381 = INT8_MIN;
	static int32_t x382 = INT32_MIN;
	volatile int16_t x383 = 625;
	uint32_t x384 = UINT32_MAX;
	int32_t t87 = -3;

	t87 = ((x381%x382)<=(x383+x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x386 = INT8_MIN;
	uint32_t x387 = UINT32_MAX;
	static int16_t x388 = -174;
	volatile int32_t t88 = -935849;

	t88 = ((x385%x386)<=(x387+x388));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = INT8_MIN;
	int32_t x392 = -50226434;
	static int32_t t89 = 8;

	t89 = ((x389%x390)<=(x391+x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 7528266U;
	int16_t x396 = -1;
	volatile int32_t t90 = -342493856;

	t90 = ((x393%x394)<=(x395+x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x397 = 1047775U;
	uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MAX;
	volatile int64_t x400 = 0LL;
	static volatile int32_t t91 = 31459;

	t91 = ((x397%x398)<=(x399+x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	int32_t t92 = -1587194;

	t92 = ((x401%x402)<=(x403+x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -1;
	volatile int16_t x406 = INT16_MIN;
	volatile uint32_t x407 = 512U;
	volatile int8_t x408 = INT8_MAX;
	volatile int32_t t93 = -94;

	t93 = ((x405%x406)<=(x407+x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 22129U;
	uint8_t x411 = UINT8_MAX;
	static uint16_t x412 = UINT16_MAX;
	static int32_t t94 = -509899720;

	t94 = ((x409%x410)<=(x411+x412));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = UINT64_MAX;
	static int32_t t95 = 32408;

	t95 = ((x413%x414)<=(x415+x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x419 = UINT64_MAX;
	static uint16_t x420 = 525U;
	volatile int32_t t96 = 434;

	t96 = ((x417%x418)<=(x419+x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x421 = 60119358;
	int16_t x422 = -1;
	uint64_t x423 = 564268498875070890LLU;

	t97 = ((x421%x422)<=(x423+x424));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x425 = 49;
	uint16_t x426 = 4356U;
	volatile int16_t x427 = INT16_MIN;
	volatile uint32_t x428 = UINT32_MAX;
	volatile int32_t t98 = -2634804;

	t98 = ((x425%x426)<=(x427+x428));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = -879LL;
	int64_t x430 = -1LL;
	volatile int16_t x431 = INT16_MIN;
	uint16_t x432 = 613U;

	t99 = ((x429%x430)<=(x431+x432));

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
