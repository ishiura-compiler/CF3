#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -1;
uint8_t x9 = 1U;
static int8_t x14 = INT8_MIN;
int32_t t3 = 30;
static uint32_t x19 = UINT32_MAX;
volatile int32_t t4 = 123074;
int16_t x29 = -1;
int16_t x30 = INT16_MIN;
uint8_t x32 = 0U;
volatile int32_t t7 = -147429320;
volatile int32_t t8 = -10843527;
volatile uint8_t x38 = UINT8_MAX;
volatile int32_t t9 = -11;
uint8_t x41 = UINT8_MAX;
static int32_t t10 = 978677;
uint8_t x55 = UINT8_MAX;
static int32_t t14 = 896;
int8_t x67 = 2;
uint32_t x68 = UINT32_MAX;
static int32_t t16 = 128154375;
int8_t x70 = -1;
volatile int32_t t17 = -65313;
static uint8_t x73 = UINT8_MAX;
int8_t x75 = -1;
volatile int32_t t18 = -221;
static volatile uint32_t x82 = 94432482U;
int8_t x92 = INT8_MIN;
int32_t t22 = 3012929;
volatile int32_t t24 = -145743;
volatile uint64_t x108 = UINT64_MAX;
volatile int32_t t26 = -1;
volatile int64_t x120 = -14409610LL;
uint8_t x123 = 23U;
volatile uint64_t x126 = 61299LLU;
int16_t x127 = INT16_MIN;
uint16_t x134 = 5543U;
int8_t x139 = -1;
static volatile int32_t t34 = 28510;
int32_t x144 = INT32_MIN;
int8_t x145 = INT8_MIN;
int32_t t36 = 506267;
static volatile int64_t x150 = -1LL;
uint16_t x156 = UINT16_MAX;
volatile uint8_t x157 = 3U;
int64_t x158 = -1LL;
uint8_t x172 = 0U;
int16_t x193 = 0;
int8_t x197 = -1;
int64_t x205 = INT64_MIN;
static uint64_t x214 = UINT64_MAX;
int64_t x217 = 3023788815LL;
static volatile int64_t x218 = INT64_MIN;
int8_t x219 = INT8_MIN;
int32_t x230 = INT32_MIN;
int32_t t56 = -36883;
static uint64_t x241 = UINT64_MAX;
volatile uint64_t x244 = UINT64_MAX;
uint64_t x248 = 1829036610705LLU;
int32_t x253 = INT32_MAX;
uint16_t x264 = UINT16_MAX;
int32_t x265 = 1827856;
volatile int8_t x267 = INT8_MAX;
volatile uint64_t x274 = 226620193165924235LLU;
static uint8_t x278 = 0U;
int8_t x279 = INT8_MIN;
uint64_t x285 = 16LLU;
int32_t t69 = -958194336;
volatile uint16_t x298 = 1U;
uint32_t x305 = UINT32_MAX;
int16_t x312 = -10;
static int32_t x313 = INT32_MIN;
int64_t x317 = INT64_MAX;
static int32_t x319 = -1;
int16_t x332 = INT16_MIN;
static int32_t t79 = -9725018;
uint8_t x337 = UINT8_MAX;
static uint64_t x340 = UINT64_MAX;
volatile int32_t t81 = 1;
volatile int16_t x341 = 11017;
static uint32_t x348 = 909576411U;
int16_t x354 = 240;
int16_t x363 = INT16_MIN;
volatile int64_t x365 = INT64_MAX;
volatile int32_t t89 = 248049367;
static uint16_t x373 = 154U;
static uint32_t x374 = UINT32_MAX;
int8_t x376 = INT8_MAX;
int16_t x384 = 1325;
uint8_t x386 = 1U;
uint8_t x392 = 36U;
static volatile int32_t t94 = -187976;
int16_t x395 = INT16_MAX;
int32_t t95 = -16741465;
volatile int32_t x401 = INT32_MAX;
static int32_t t97 = 709124449;
int8_t x405 = -57;
uint16_t x407 = 483U;


void f0(void) {
	int32_t x1 = -1060503;
	static int8_t x2 = 0;
	int8_t x3 = -1;
	int64_t x4 = -118324670669984LL;
	volatile int32_t t0 = -65180827;

	t0 = (((x1==x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static uint8_t x7 = 1U;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -1522;

	t1 = (((x5==x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = INT8_MAX;
	uint32_t x11 = 8U;
	uint32_t x12 = 19771U;
	int32_t t2 = 235565943;

	t2 = (((x9==x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -6686;
	int64_t x15 = INT64_MAX;
	uint16_t x16 = 76U;

	t3 = (((x13==x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 2725U;
	uint8_t x18 = UINT8_MAX;
	volatile int16_t x20 = 996;

	t4 = (((x17==x18)%x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint16_t x22 = 4891U;
	static int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 173160;

	t5 = (((x21==x22)%x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1567092U;
	volatile int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 78544483;

	t6 = (((x25==x26)%x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = -170;

	t7 = (((x29==x30)%x31)==x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	uint32_t x34 = 191908U;
	uint8_t x35 = 57U;
	uint16_t x36 = 0U;

	t8 = (((x33==x34)%x35)==x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 24799471LLU;
	static uint8_t x39 = 11U;
	int16_t x40 = INT16_MIN;

	t9 = (((x37==x38)%x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = 7960285372LLU;
	int8_t x43 = 15;
	volatile int64_t x44 = 0LL;

	t10 = (((x41==x42)%x43)==x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -780LL;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = -929149;

	t11 = (((x45==x46)%x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 108U;
	uint32_t x50 = 12401U;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -8916142;

	t12 = (((x49==x50)%x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 1183U;
	volatile int64_t x54 = INT64_MIN;
	int32_t x56 = INT32_MIN;
	static int32_t t13 = 278642308;

	t13 = (((x53==x54)%x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = 61015U;
	volatile int16_t x59 = INT16_MIN;
	static int32_t x60 = INT32_MAX;

	t14 = (((x57==x58)%x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 45916383U;
	uint64_t x62 = 6284682242700165LLU;
	uint64_t x63 = 530812060956294705LLU;
	uint8_t x64 = 109U;
	static int32_t t15 = -15354872;

	t15 = (((x61==x62)%x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = 52U;

	t16 = (((x65==x66)%x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile int16_t x71 = 213;
	int16_t x72 = -4;

	t17 = (((x69==x70)%x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x74 = INT64_MAX;
	static int64_t x76 = -24315316LL;

	t18 = (((x73==x74)%x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 1U;
	int8_t x78 = -48;
	uint8_t x79 = 3U;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -59891931;

	t19 = (((x77==x78)%x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static volatile int8_t x83 = -1;
	static int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -35461;

	t20 = (((x81==x82)%x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -2;
	uint64_t x86 = 13765506549LLU;
	static int32_t x87 = INT32_MIN;
	static uint64_t x88 = 789837032LLU;
	int32_t t21 = -124;

	t21 = (((x85==x86)%x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 7;
	int32_t x90 = -1;
	volatile uint8_t x91 = 3U;

	t22 = (((x89==x90)%x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -1;
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	int16_t x96 = -1;
	volatile int32_t t23 = -1596846;

	t23 = (((x93==x94)%x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 197U;
	int8_t x98 = 2;
	int32_t x99 = 10654;
	static volatile int64_t x100 = INT64_MIN;

	t24 = (((x97==x98)%x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int32_t x102 = INT32_MIN;
	int8_t x103 = 1;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -120670;

	t25 = (((x101==x102)%x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = 0;
	static uint64_t x106 = 204732780488546534LLU;
	static volatile int64_t x107 = INT64_MIN;

	t26 = (((x105==x106)%x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -16;
	static int32_t x110 = INT32_MAX;
	int32_t x111 = INT32_MIN;
	volatile int8_t x112 = -1;
	volatile int32_t t27 = -101;

	t27 = (((x109==x110)%x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = 1903LL;
	int64_t x114 = INT64_MIN;
	int32_t x115 = 810880;
	uint8_t x116 = 0U;
	int32_t t28 = -10972967;

	t28 = (((x113==x114)%x115)==x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 0LL;
	int16_t x118 = -1;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t t29 = -60612834;

	t29 = (((x117==x118)%x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	uint16_t x124 = 282U;
	static int32_t t30 = -519886;

	t30 = (((x121==x122)%x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t31 = 6449;

	t31 = (((x125==x126)%x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	static int8_t x130 = 0;
	int8_t x131 = -26;
	int32_t x132 = INT32_MIN;
	volatile int32_t t32 = -105130701;

	t32 = (((x129==x130)%x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 3;
	int8_t x135 = INT8_MIN;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = 349;

	t33 = (((x133==x134)%x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = INT16_MIN;
	uint32_t x140 = UINT32_MAX;

	t34 = (((x137==x138)%x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 7439U;
	static uint16_t x142 = 150U;
	uint8_t x143 = 4U;
	static volatile int32_t t35 = 763407252;

	t35 = (((x141==x142)%x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x146 = 2131706;
	uint8_t x147 = 3U;
	uint8_t x148 = UINT8_MAX;

	t36 = (((x145==x146)%x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	static int8_t x151 = INT8_MIN;
	uint16_t x152 = 27U;
	int32_t t37 = -179;

	t37 = (((x149==x150)%x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 18U;
	int16_t x154 = INT16_MAX;
	static int8_t x155 = INT8_MIN;
	volatile int32_t t38 = 764;

	t38 = (((x153==x154)%x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x159 = INT16_MAX;
	static volatile int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -252855387;

	t39 = (((x157==x158)%x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = -1;
	volatile uint32_t x167 = 180987U;
	int16_t x168 = INT16_MIN;
	volatile int32_t t40 = 3655557;

	t40 = (((x165==x166)%x167)==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	volatile int32_t x170 = INT32_MAX;
	int16_t x171 = 3313;
	int32_t t41 = 308705;

	t41 = (((x169==x170)%x171)==x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MAX;
	int8_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t42 = 232;

	t42 = (((x173==x174)%x175)==x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = -336963181;
	int64_t x178 = -1LL;
	uint64_t x179 = 19LLU;
	int8_t x180 = -1;
	volatile int32_t t43 = -2431923;

	t43 = (((x177==x178)%x179)==x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	int32_t x182 = -227860737;
	int16_t x183 = INT16_MAX;
	int64_t x184 = INT64_MIN;
	volatile int32_t t44 = 7590390;

	t44 = (((x181==x182)%x183)==x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 10U;
	static int16_t x186 = INT16_MIN;
	int16_t x187 = INT16_MIN;
	static volatile int8_t x188 = -7;
	int32_t t45 = 8;

	t45 = (((x185==x186)%x187)==x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 27U;
	uint32_t x190 = 0U;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = 57U;
	int32_t t46 = -647114295;

	t46 = (((x189==x190)%x191)==x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = INT16_MIN;
	volatile int8_t x195 = -38;
	int8_t x196 = 8;
	int32_t t47 = 32446581;

	t47 = (((x193==x194)%x195)==x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x198 = INT16_MIN;
	static uint16_t x199 = 54U;
	int16_t x200 = -1;
	volatile int32_t t48 = -1613;

	t48 = (((x197==x198)%x199)==x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 1;
	int32_t x202 = INT32_MAX;
	volatile uint64_t x203 = 1231564LLU;
	static int8_t x204 = INT8_MIN;
	volatile int32_t t49 = -3525197;

	t49 = (((x201==x202)%x203)==x204);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x206 = 480912LL;
	int64_t x207 = INT64_MAX;
	static volatile int8_t x208 = INT8_MAX;
	int32_t t50 = 252;

	t50 = (((x205==x206)%x207)==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MAX;
	volatile uint8_t x211 = 6U;
	int64_t x212 = -1LL;
	int32_t t51 = 44014622;

	t51 = (((x209==x210)%x211)==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	int8_t x215 = INT8_MIN;
	static volatile int8_t x216 = INT8_MIN;
	int32_t t52 = 0;

	t52 = (((x213==x214)%x215)==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x220 = INT32_MIN;
	int32_t t53 = 8693;

	t53 = (((x217==x218)%x219)==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = INT8_MIN;
	uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MAX;
	volatile int64_t x224 = INT64_MAX;
	static volatile int32_t t54 = 3687224;

	t54 = (((x221==x222)%x223)==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = INT32_MIN;
	int8_t x226 = -1;
	int64_t x227 = INT64_MIN;
	int32_t x228 = INT32_MIN;
	static volatile int32_t t55 = 8369;

	t55 = (((x225==x226)%x227)==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = 104;
	volatile int64_t x231 = -323988244142LL;
	uint8_t x232 = 59U;

	t56 = (((x229==x230)%x231)==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = INT8_MIN;
	uint64_t x234 = 221LLU;
	int8_t x235 = INT8_MIN;
	static int32_t x236 = INT32_MIN;
	volatile int32_t t57 = -202450;

	t57 = (((x233==x234)%x235)==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x242 = UINT8_MAX;
	static int8_t x243 = INT8_MAX;
	volatile int32_t t58 = 7;

	t58 = (((x241==x242)%x243)==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	static int16_t x246 = -1;
	int16_t x247 = INT16_MAX;
	int32_t t59 = 245;

	t59 = (((x245==x246)%x247)==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = UINT32_MAX;
	uint16_t x250 = 27U;
	uint16_t x251 = UINT16_MAX;
	uint16_t x252 = 14U;
	volatile int32_t t60 = -949334;

	t60 = (((x249==x250)%x251)==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = INT32_MAX;
	volatile int64_t x255 = INT64_MAX;
	static int8_t x256 = INT8_MIN;
	static int32_t t61 = -2;

	t61 = (((x253==x254)%x255)==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 204U;
	int16_t x258 = INT16_MIN;
	volatile int16_t x259 = INT16_MIN;
	static int64_t x260 = -436197806LL;
	volatile int32_t t62 = 22287989;

	t62 = (((x257==x258)%x259)==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = -1;
	uint32_t x262 = 2080265491U;
	int8_t x263 = INT8_MIN;
	int32_t t63 = -96;

	t63 = (((x261==x262)%x263)==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x266 = INT16_MAX;
	int16_t x268 = INT16_MIN;
	int32_t t64 = -19;

	t64 = (((x265==x266)%x267)==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	uint16_t x271 = 7U;
	int64_t x272 = -65LL;
	volatile int32_t t65 = 2206;

	t65 = (((x269==x270)%x271)==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x273 = INT32_MIN;
	volatile uint64_t x275 = UINT64_MAX;
	volatile int16_t x276 = -8412;
	volatile int32_t t66 = 331;

	t66 = (((x273==x274)%x275)==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = -1;
	int8_t x280 = INT8_MAX;
	volatile int32_t t67 = 414;

	t67 = (((x277==x278)%x279)==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = UINT8_MAX;
	int32_t x282 = -2;
	int32_t x283 = 412174;
	uint8_t x284 = 21U;
	volatile int32_t t68 = 2104293;

	t68 = (((x281==x282)%x283)==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x286 = UINT32_MAX;
	uint64_t x287 = 924LLU;
	int16_t x288 = -60;

	t69 = (((x285==x286)%x287)==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	uint32_t x290 = UINT32_MAX;
	int8_t x291 = -16;
	static volatile int64_t x292 = 63530069738953LL;
	static int32_t t70 = -4656;

	t70 = (((x289==x290)%x291)==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x293 = 752U;
	static int8_t x294 = INT8_MAX;
	static volatile int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t71 = 16517848;

	t71 = (((x293==x294)%x295)==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MAX;
	int8_t x299 = 31;
	int16_t x300 = -1;
	volatile int32_t t72 = 3314;

	t72 = (((x297==x298)%x299)==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	static volatile uint32_t x302 = 408090442U;
	int64_t x303 = -8356379LL;
	int16_t x304 = INT16_MAX;
	static int32_t t73 = -3894;

	t73 = (((x301==x302)%x303)==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x306 = INT64_MIN;
	int64_t x307 = INT64_MAX;
	static int16_t x308 = -1;
	static volatile int32_t t74 = -111;

	t74 = (((x305==x306)%x307)==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x309 = INT16_MIN;
	uint8_t x310 = 21U;
	volatile int16_t x311 = -2;
	volatile int32_t t75 = 1;

	t75 = (((x309==x310)%x311)==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x314 = UINT64_MAX;
	static int32_t x315 = 46666;
	int64_t x316 = INT64_MAX;
	volatile int32_t t76 = -12413412;

	t76 = (((x313==x314)%x315)==x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x318 = 30667LL;
	int8_t x320 = -2;
	int32_t t77 = -183033;

	t77 = (((x317==x318)%x319)==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 5U;
	uint64_t x326 = 241LLU;
	volatile int16_t x327 = 2;
	static int16_t x328 = INT16_MAX;
	volatile int32_t t78 = 938663732;

	t78 = (((x325==x326)%x327)==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x329 = UINT16_MAX;
	static int32_t x330 = INT32_MIN;
	int32_t x331 = 73084;

	t79 = (((x329==x330)%x331)==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = INT32_MAX;
	static int16_t x335 = INT16_MIN;
	int8_t x336 = -18;
	volatile int32_t t80 = 160132372;

	t80 = (((x333==x334)%x335)==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x338 = -1LL;
	volatile int32_t x339 = INT32_MAX;

	t81 = (((x337==x338)%x339)==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x342 = INT8_MAX;
	int64_t x343 = INT64_MIN;
	uint32_t x344 = 12957U;
	int32_t t82 = 5233;

	t82 = (((x341==x342)%x343)==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x345 = INT32_MIN;
	volatile int16_t x346 = INT16_MIN;
	volatile uint16_t x347 = 27U;
	static volatile int32_t t83 = -9979214;

	t83 = (((x345==x346)%x347)==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = -369LL;
	int64_t x350 = INT64_MIN;
	volatile int32_t x351 = INT32_MIN;
	uint64_t x352 = 171953LLU;
	static volatile int32_t t84 = 552148;

	t84 = (((x349==x350)%x351)==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x353 = -1LL;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t85 = -2;

	t85 = (((x353==x354)%x355)==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = -1;
	int32_t x358 = 0;
	uint16_t x359 = 963U;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t86 = 26598064;

	t86 = (((x357==x358)%x359)==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x361 = 492438LLU;
	static uint64_t x362 = 859053837050LLU;
	int64_t x364 = 22860732808903LL;
	volatile int32_t t87 = -81748245;

	t87 = (((x361==x362)%x363)==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x366 = -4;
	int16_t x367 = INT16_MAX;
	static volatile int32_t x368 = INT32_MAX;
	static int32_t t88 = 30792665;

	t88 = (((x365==x366)%x367)==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = -1;
	int16_t x371 = -170;
	volatile uint32_t x372 = 2U;

	t89 = (((x369==x370)%x371)==x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x375 = 6U;
	static volatile int32_t t90 = 133341004;

	t90 = (((x373==x374)%x375)==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MIN;
	volatile int8_t x378 = -1;
	uint8_t x379 = UINT8_MAX;
	volatile int32_t x380 = -1341;
	int32_t t91 = -8820282;

	t91 = (((x377==x378)%x379)==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x381 = 5U;
	volatile uint8_t x382 = 0U;
	int32_t x383 = INT32_MIN;
	volatile int32_t t92 = 106064953;

	t92 = (((x381==x382)%x383)==x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = 7365000909LL;
	int16_t x387 = 10;
	uint64_t x388 = 10382563455670LLU;
	static int32_t t93 = -149349308;

	t93 = (((x385==x386)%x387)==x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MAX;
	int16_t x390 = -6080;
	int8_t x391 = INT8_MAX;

	t94 = (((x389==x390)%x391)==x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MIN;
	volatile uint32_t x394 = 2685U;
	volatile int32_t x396 = -1;

	t95 = (((x393==x394)%x395)==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MIN;
	volatile uint64_t x398 = UINT64_MAX;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = -366037395665691470LL;
	static int32_t t96 = -2;

	t96 = (((x397==x398)%x399)==x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x402 = INT16_MAX;
	uint32_t x403 = 43235788U;
	uint64_t x404 = 461200LLU;

	t97 = (((x401==x402)%x403)==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x406 = 28;
	uint8_t x408 = UINT8_MAX;
	int32_t t98 = 53094217;

	t98 = (((x405==x406)%x407)==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = -1;
	static int8_t x410 = -1;
	static int16_t x411 = INT16_MIN;
	static int64_t x412 = -1555618049480LL;
	int32_t t99 = -1;

	t99 = (((x409==x410)%x411)==x412);

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

