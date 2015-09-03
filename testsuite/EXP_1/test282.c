#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x1 = -1;
int32_t t2 = 13997347;
int8_t x13 = INT8_MAX;
volatile int32_t t3 = 6453;
uint64_t x18 = UINT64_MAX;
static int16_t x25 = -6;
uint32_t x28 = UINT32_MAX;
int8_t x33 = 18;
static uint16_t x34 = 9U;
volatile int32_t x36 = 23;
volatile int32_t t8 = -1;
uint16_t x38 = 2891U;
static int32_t x46 = INT32_MIN;
static uint8_t x57 = UINT8_MAX;
int64_t x58 = INT64_MAX;
int32_t t13 = 155111;
uint8_t x74 = UINT8_MAX;
static int32_t x81 = -1048;
static uint64_t x86 = 6896LLU;
static int32_t x93 = 45481;
int64_t x95 = INT64_MIN;
uint32_t x105 = UINT32_MAX;
int8_t x109 = INT8_MIN;
static int32_t t25 = -7842797;
int32_t x121 = -2;
int8_t x122 = INT8_MIN;
int8_t x128 = INT8_MIN;
int16_t x130 = INT16_MIN;
static volatile int32_t x138 = -3;
int32_t x139 = -3618055;
static volatile int8_t x145 = -1;
int8_t x146 = INT8_MIN;
volatile int64_t x150 = 15LL;
int8_t x152 = INT8_MIN;
static int8_t x157 = -1;
volatile int8_t x163 = INT8_MIN;
volatile uint32_t x164 = 329418U;
int16_t x168 = INT16_MIN;
uint32_t x169 = UINT32_MAX;
int8_t x172 = INT8_MAX;
volatile int32_t t40 = 98471;
volatile uint16_t x173 = 1091U;
int8_t x179 = 0;
static int16_t x180 = INT16_MIN;
uint64_t x189 = 13499796454LLU;
int16_t x190 = INT16_MIN;
int64_t x198 = 2097146275259LL;
volatile int32_t t46 = -2;
static int32_t x201 = INT32_MAX;
static volatile int32_t t47 = 31807;
uint8_t x210 = 15U;
static uint32_t x211 = 2U;
int32_t t49 = 43878;
int8_t x213 = INT8_MIN;
int8_t x215 = INT8_MIN;
int32_t t51 = 7747;
volatile int16_t x229 = -1;
int16_t x230 = INT16_MAX;
int16_t x248 = 12;
int8_t x256 = -1;
volatile int32_t t60 = -20;
int16_t x260 = 413;
volatile int32_t t61 = 15;
int64_t x262 = INT64_MIN;
int16_t x265 = 389;
int64_t x267 = INT64_MAX;
static int32_t t63 = 596476;
static int64_t x282 = -1329967082886810LL;
int32_t x295 = 4015576;
static int16_t x296 = INT16_MIN;
static int64_t x297 = 3683225025516915LL;
int64_t x299 = INT64_MIN;
static int32_t t69 = 2657539;
int32_t t70 = -445;
volatile int32_t t72 = 24304735;
int16_t x328 = INT16_MIN;
volatile int32_t t77 = 1609;
int32_t x338 = INT32_MIN;
int8_t x342 = INT8_MIN;
int32_t x352 = INT32_MIN;
static int16_t x358 = 2606;
uint8_t x360 = 3U;
int32_t x361 = -81429;
int16_t x370 = INT16_MAX;
int16_t x371 = INT16_MAX;
volatile int8_t x385 = INT8_MIN;
int16_t x387 = INT16_MIN;
int16_t x389 = INT16_MIN;
uint32_t x390 = UINT32_MAX;
volatile int64_t x396 = -3739LL;
volatile int32_t t93 = 1572858;
uint32_t x398 = UINT32_MAX;
int16_t x400 = INT16_MIN;
int32_t t94 = -253961;
uint64_t x402 = 1552LLU;
int8_t x404 = 1;
static int8_t x410 = -1;
uint32_t x411 = 9462U;
volatile int32_t t96 = -918;
int32_t x422 = -2138;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int16_t x3 = INT16_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -53;

	t0 = (((x1-x2)<x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	uint32_t x6 = 1U;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -48;

	t1 = (((x5-x6)<x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 204U;
	int64_t x10 = -1439877LL;
	int32_t x11 = -1;
	int32_t x12 = INT32_MIN;

	t2 = (((x9-x10)<x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MIN;
	uint8_t x15 = 7U;
	static uint16_t x16 = 21U;

	t3 = (((x13-x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = 1;
	int16_t x19 = INT16_MAX;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = -97709;

	t4 = (((x17-x18)<x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	volatile int16_t x22 = -47;
	int8_t x23 = -2;
	uint64_t x24 = UINT64_MAX;
	int32_t t5 = 28871;

	t5 = (((x21-x22)<x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 6U;
	static int32_t x27 = -17;
	static int32_t t6 = 269311563;

	t6 = (((x25-x26)<x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 61U;
	volatile int16_t x30 = -1;
	int64_t x31 = INT64_MIN;
	uint8_t x32 = 0U;
	volatile int32_t t7 = 12;

	t7 = (((x29-x30)<x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = INT64_MIN;

	t8 = (((x33-x34)<x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 10;
	uint16_t x39 = 63U;
	volatile int64_t x40 = -1LL;
	volatile int32_t t9 = 1042671;

	t9 = (((x37-x38)<x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x45 = INT16_MIN;
	static volatile int64_t x47 = 3611962353772LL;
	static int64_t x48 = 1824694780718900435LL;
	int32_t t10 = 30;

	t10 = (((x45-x46)<x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	volatile int64_t x50 = -1LL;
	int8_t x51 = 60;
	int8_t x52 = -1;
	int32_t t11 = -770596467;

	t11 = (((x49-x50)<x51)<x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x53 = -1888;
	volatile int8_t x54 = 10;
	uint8_t x55 = 8U;
	uint8_t x56 = 121U;
	int32_t t12 = -1588;

	t12 = (((x53-x54)<x55)<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x59 = -1;
	static uint64_t x60 = 3545178813LLU;

	t13 = (((x57-x58)<x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 5U;
	static int8_t x62 = 0;
	int32_t x63 = INT32_MIN;
	volatile uint16_t x64 = UINT16_MAX;
	volatile int32_t t14 = 326;

	t14 = (((x61-x62)<x63)<x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	uint8_t x66 = UINT8_MAX;
	static uint32_t x67 = UINT32_MAX;
	int8_t x68 = -1;
	volatile int32_t t15 = 478;

	t15 = (((x65-x66)<x67)<x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 102U;
	int32_t x71 = -5754;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t16 = 27468;

	t16 = (((x69-x70)<x71)<x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -1;
	static int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	volatile int32_t t17 = 1853;

	t17 = (((x73-x74)<x75)<x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = UINT32_MAX;
	static volatile int8_t x83 = INT8_MAX;
	static uint8_t x84 = 0U;
	volatile int32_t t18 = -1;

	t18 = (((x81-x82)<x83)<x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -1LL;
	int32_t x87 = INT32_MIN;
	int16_t x88 = -13;
	int32_t t19 = 212;

	t19 = (((x85-x86)<x87)<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	uint8_t x90 = 7U;
	int16_t x91 = INT16_MIN;
	static uint32_t x92 = UINT32_MAX;
	volatile int32_t t20 = 90314;

	t20 = (((x89-x90)<x91)<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x94 = 161U;
	volatile uint64_t x96 = UINT64_MAX;
	int32_t t21 = -1;

	t21 = (((x93-x94)<x95)<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = -1;
	volatile uint8_t x98 = UINT8_MAX;
	static uint32_t x99 = 64944059U;
	static uint64_t x100 = 340611LLU;
	int32_t t22 = 17813;

	t22 = (((x97-x98)<x99)<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x101 = INT16_MAX;
	static uint8_t x102 = 14U;
	volatile uint16_t x103 = 1324U;
	int8_t x104 = INT8_MIN;
	int32_t t23 = -1059509025;

	t23 = (((x101-x102)<x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = 9925834914773LLU;
	int8_t x108 = 0;
	int32_t t24 = 96623;

	t24 = (((x105-x106)<x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = INT16_MIN;
	static int16_t x111 = INT16_MIN;
	uint16_t x112 = UINT16_MAX;

	t25 = (((x109-x110)<x111)<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 10561342U;
	volatile int16_t x114 = -1;
	static int64_t x115 = INT64_MAX;
	int16_t x116 = -1;
	volatile int32_t t26 = -10456;

	t26 = (((x113-x114)<x115)<x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	uint8_t x118 = UINT8_MAX;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t27 = 0;

	t27 = (((x117-x118)<x119)<x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x123 = 0U;
	static int64_t x124 = INT64_MIN;
	volatile int32_t t28 = -123792055;

	t28 = (((x121-x122)<x123)<x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 21;
	int8_t x126 = INT8_MIN;
	volatile uint64_t x127 = 65940639337LLU;
	volatile int32_t t29 = 20865448;

	t29 = (((x125-x126)<x127)<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = INT8_MIN;
	static int64_t x131 = INT64_MAX;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t30 = -664;

	t30 = (((x129-x130)<x131)<x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = 2;
	int8_t x134 = -1;
	volatile int8_t x135 = INT8_MIN;
	uint8_t x136 = 0U;
	volatile int32_t t31 = -1093466;

	t31 = (((x133-x134)<x135)<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x137 = -1;
	int16_t x140 = INT16_MIN;
	int32_t t32 = -22081707;

	t32 = (((x137-x138)<x139)<x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -5;
	int16_t x142 = INT16_MAX;
	int32_t x143 = INT32_MAX;
	static int8_t x144 = INT8_MAX;
	volatile int32_t t33 = 516156;

	t33 = (((x141-x142)<x143)<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x147 = -1;
	static int8_t x148 = -1;
	static int32_t t34 = -675222559;

	t34 = (((x145-x146)<x147)<x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x149 = 1609402298U;
	int16_t x151 = 9289;
	int32_t t35 = 0;

	t35 = (((x149-x150)<x151)<x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = 177233U;
	int16_t x154 = 12877;
	volatile uint8_t x155 = 24U;
	int16_t x156 = INT16_MIN;
	volatile int32_t t36 = 578942;

	t36 = (((x153-x154)<x155)<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = -436;
	uint64_t x159 = UINT64_MAX;
	static int16_t x160 = -838;
	static volatile int32_t t37 = 791232;

	t37 = (((x157-x158)<x159)<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = -1;
	int64_t x162 = INT64_MIN;
	int32_t t38 = 2;

	t38 = (((x161-x162)<x163)<x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = 16;
	volatile int8_t x166 = INT8_MIN;
	static uint16_t x167 = UINT16_MAX;
	int32_t t39 = 1;

	t39 = (((x165-x166)<x167)<x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x170 = 1U;
	uint8_t x171 = 1U;

	t40 = (((x169-x170)<x171)<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x174 = UINT8_MAX;
	static int16_t x175 = -40;
	int16_t x176 = INT16_MIN;
	int32_t t41 = -1;

	t41 = (((x173-x174)<x175)<x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -2001;
	uint16_t x178 = UINT16_MAX;
	volatile int32_t t42 = 1;

	t42 = (((x177-x178)<x179)<x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = UINT8_MAX;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t43 = -156152;

	t43 = (((x185-x186)<x187)<x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x191 = INT64_MAX;
	static volatile int16_t x192 = INT16_MIN;
	int32_t t44 = -6045;

	t44 = (((x189-x190)<x191)<x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x193 = 1956U;
	int32_t x194 = -1;
	int32_t x195 = 2491986;
	volatile uint16_t x196 = 2554U;
	volatile int32_t t45 = -70;

	t45 = (((x193-x194)<x195)<x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 0U;
	volatile int64_t x199 = INT64_MAX;
	int8_t x200 = INT8_MAX;

	t46 = (((x197-x198)<x199)<x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x202 = UINT16_MAX;
	uint64_t x203 = 5048280683355LLU;
	int64_t x204 = -3949437LL;

	t47 = (((x201-x202)<x203)<x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = -1LL;
	int8_t x206 = -14;
	uint16_t x207 = 5U;
	static int16_t x208 = INT16_MIN;
	static int32_t t48 = 572;

	t48 = (((x205-x206)<x207)<x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = INT64_MAX;
	int16_t x212 = INT16_MAX;

	t49 = (((x209-x210)<x211)<x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = 1;
	int8_t x216 = -1;
	volatile int32_t t50 = 1;

	t50 = (((x213-x214)<x215)<x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = 2U;
	int8_t x218 = INT8_MAX;
	int64_t x219 = 33366LL;
	uint32_t x220 = 123856300U;

	t51 = (((x217-x218)<x219)<x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x221 = INT16_MIN;
	static int8_t x222 = INT8_MAX;
	uint16_t x223 = 0U;
	volatile int64_t x224 = -1LL;
	volatile int32_t t52 = 4823;

	t52 = (((x221-x222)<x223)<x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -5;
	int8_t x226 = INT8_MIN;
	int64_t x227 = -1047LL;
	static int32_t x228 = 1306078;
	volatile int32_t t53 = -627567405;

	t53 = (((x225-x226)<x227)<x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x231 = -1LL;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t54 = -188588256;

	t54 = (((x229-x230)<x231)<x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -74LL;
	int8_t x234 = INT8_MIN;
	uint64_t x235 = 657364847LLU;
	uint64_t x236 = 5637577454LLU;
	volatile int32_t t55 = -2085;

	t55 = (((x233-x234)<x235)<x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = UINT16_MAX;
	uint64_t x238 = 0LLU;
	int64_t x239 = 13032125780464452LL;
	static int64_t x240 = INT64_MIN;
	volatile int32_t t56 = 24540549;

	t56 = (((x237-x238)<x239)<x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x241 = UINT64_MAX;
	static volatile uint8_t x242 = 5U;
	int16_t x243 = -1;
	int32_t x244 = INT32_MAX;
	volatile int32_t t57 = 14140353;

	t57 = (((x241-x242)<x243)<x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x245 = 22539LLU;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 99755U;
	int32_t t58 = 214543;

	t58 = (((x245-x246)<x247)<x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = UINT32_MAX;
	int64_t x250 = -1LL;
	volatile uint32_t x251 = 4591430U;
	uint32_t x252 = 385U;
	int32_t t59 = -28;

	t59 = (((x249-x250)<x251)<x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = 1;
	int16_t x254 = INT16_MAX;
	uint32_t x255 = 2043453501U;

	t60 = (((x253-x254)<x255)<x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = INT32_MAX;
	volatile int64_t x258 = -1LL;
	static uint64_t x259 = 9002683072013509LLU;

	t61 = (((x257-x258)<x259)<x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x261 = INT64_MIN;
	uint16_t x263 = 242U;
	int8_t x264 = -1;
	volatile int32_t t62 = 2166;

	t62 = (((x261-x262)<x263)<x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x266 = -1;
	int32_t x268 = 410242;

	t63 = (((x265-x266)<x267)<x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MAX;
	uint16_t x270 = UINT16_MAX;
	uint8_t x271 = 2U;
	int64_t x272 = 1LL;
	static int32_t t64 = 4;

	t64 = (((x269-x270)<x271)<x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = 1639U;
	uint8_t x278 = 17U;
	static volatile int32_t x279 = INT32_MAX;
	int8_t x280 = INT8_MIN;
	static volatile int32_t t65 = 1;

	t65 = (((x277-x278)<x279)<x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x281 = 5139754;
	static int64_t x283 = INT64_MIN;
	static int8_t x284 = -1;
	static int32_t t66 = 961396919;

	t66 = (((x281-x282)<x283)<x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x285 = -5;
	static int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	uint8_t x288 = 53U;
	int32_t t67 = 414;

	t67 = (((x285-x286)<x287)<x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x293 = UINT32_MAX;
	int8_t x294 = -2;
	static volatile int32_t t68 = 1;

	t68 = (((x293-x294)<x295)<x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x298 = 10U;
	uint32_t x300 = 2279U;

	t69 = (((x297-x298)<x299)<x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = 0;
	volatile uint32_t x302 = UINT32_MAX;
	int16_t x303 = 1;
	volatile int64_t x304 = INT64_MAX;

	t70 = (((x301-x302)<x303)<x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x305 = 9105726941LLU;
	int32_t x306 = INT32_MIN;
	static int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t71 = 1;

	t71 = (((x305-x306)<x307)<x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x309 = 1;
	int16_t x310 = -108;
	int32_t x311 = -365;
	int16_t x312 = 0;

	t72 = (((x309-x310)<x311)<x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x313 = 31U;
	int8_t x314 = INT8_MAX;
	volatile int32_t x315 = -1;
	int64_t x316 = INT64_MIN;
	volatile int32_t t73 = -4;

	t73 = (((x313-x314)<x315)<x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = 90782;
	volatile int8_t x318 = 14;
	static int8_t x319 = -1;
	uint32_t x320 = 283204U;
	volatile int32_t t74 = -1806;

	t74 = (((x317-x318)<x319)<x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x321 = 2699422434357951299LLU;
	static uint16_t x322 = 74U;
	uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t75 = 2693573;

	t75 = (((x321-x322)<x323)<x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x325 = UINT16_MAX;
	uint64_t x326 = UINT64_MAX;
	volatile int32_t x327 = INT32_MIN;
	static int32_t t76 = -12104822;

	t76 = (((x325-x326)<x327)<x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x329 = -33308255;
	uint8_t x330 = 10U;
	volatile uint8_t x331 = UINT8_MAX;
	int32_t x332 = -91827;

	t77 = (((x329-x330)<x331)<x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MIN;
	static int16_t x336 = INT16_MIN;
	int32_t t78 = 4123799;

	t78 = (((x333-x334)<x335)<x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x337 = 3144U;
	int64_t x339 = -506LL;
	uint32_t x340 = 0U;
	volatile int32_t t79 = -125696;

	t79 = (((x337-x338)<x339)<x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = INT32_MIN;
	int32_t x343 = 1622747;
	static int8_t x344 = INT8_MAX;
	int32_t t80 = -224263909;

	t80 = (((x341-x342)<x343)<x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 3U;
	int16_t x346 = -1;
	uint64_t x347 = 12LLU;
	static int16_t x348 = 1739;
	volatile int32_t t81 = 6515849;

	t81 = (((x345-x346)<x347)<x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = 12;
	uint8_t x350 = 14U;
	int64_t x351 = INT64_MIN;
	volatile int32_t t82 = -222;

	t82 = (((x349-x350)<x351)<x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = INT64_MIN;
	uint64_t x354 = 1613895LLU;
	static volatile uint8_t x355 = 10U;
	int32_t x356 = 4;
	int32_t t83 = -1045;

	t83 = (((x353-x354)<x355)<x356);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = 58;
	int16_t x359 = 5;
	static int32_t t84 = 242100015;

	t84 = (((x357-x358)<x359)<x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x362 = 2239849682LL;
	uint8_t x363 = UINT8_MAX;
	int8_t x364 = INT8_MIN;
	volatile int32_t t85 = -31421467;

	t85 = (((x361-x362)<x363)<x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x366 = INT8_MIN;
	volatile uint64_t x367 = 635312227308194LLU;
	int8_t x368 = INT8_MAX;
	volatile int32_t t86 = -60;

	t86 = (((x365-x366)<x367)<x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 45U;
	uint32_t x372 = UINT32_MAX;
	int32_t t87 = 599;

	t87 = (((x369-x370)<x371)<x372);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MIN;
	int32_t x374 = -866700;
	int32_t x375 = 19159;
	uint32_t x376 = UINT32_MAX;
	int32_t t88 = 48678;

	t88 = (((x373-x374)<x375)<x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = UINT16_MAX;
	static volatile int64_t x378 = INT64_MAX;
	int64_t x379 = -1966LL;
	static uint8_t x380 = UINT8_MAX;
	int32_t t89 = 59;

	t89 = (((x377-x378)<x379)<x380);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x381 = 257928LLU;
	int16_t x382 = -1;
	int16_t x383 = -1;
	uint8_t x384 = 10U;
	int32_t t90 = -7;

	t90 = (((x381-x382)<x383)<x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x386 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t91 = -155305;

	t91 = (((x385-x386)<x387)<x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x391 = -1;
	int8_t x392 = INT8_MIN;
	int32_t t92 = -1;

	t92 = (((x389-x390)<x391)<x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = 9;
	static uint32_t x394 = UINT32_MAX;
	uint8_t x395 = 3U;

	t93 = (((x393-x394)<x395)<x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = UINT8_MAX;
	static int64_t x399 = 0LL;

	t94 = (((x397-x398)<x399)<x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x401 = 77U;
	static int32_t x403 = INT32_MIN;
	int32_t t95 = -1396;

	t95 = (((x401-x402)<x403)<x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = -1;
	int16_t x412 = INT16_MAX;

	t96 = (((x409-x410)<x411)<x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = 2;
	int32_t x414 = -5;
	static int64_t x415 = INT64_MIN;
	volatile int64_t x416 = 234046557330LL;
	volatile int32_t t97 = 1;

	t97 = (((x413-x414)<x415)<x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x421 = 9222U;
	static int8_t x423 = -1;
	int64_t x424 = -1LL;
	volatile int32_t t98 = -16886;

	t98 = (((x421-x422)<x423)<x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = UINT8_MAX;
	int32_t x430 = INT32_MAX;
	uint8_t x431 = 1U;
	volatile int64_t x432 = INT64_MIN;
	volatile int32_t t99 = 488;

	t99 = (((x429-x430)<x431)<x432);

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

