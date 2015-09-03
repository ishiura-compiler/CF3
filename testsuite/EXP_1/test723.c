#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
static int8_t x3 = -1;
int16_t x8 = -1;
static int16_t x11 = -3236;
uint16_t x17 = 213U;
int8_t x22 = INT8_MIN;
static int8_t x23 = -1;
static int32_t t5 = -30;
int32_t x27 = INT32_MIN;
volatile int32_t x30 = -1;
volatile uint16_t x32 = 0U;
static volatile int32_t t8 = -241803331;
volatile int32_t t9 = 84370506;
int32_t x42 = 398758;
volatile int32_t t10 = -21;
int8_t x52 = INT8_MIN;
uint32_t x57 = 19625U;
int8_t x59 = INT8_MIN;
int16_t x62 = INT16_MIN;
int32_t t16 = -22037;
static int16_t x70 = INT16_MIN;
int32_t x75 = INT32_MIN;
volatile int32_t t18 = 448;
int16_t x80 = INT16_MIN;
uint32_t x85 = 968946508U;
int64_t x89 = INT64_MAX;
int32_t t23 = 52052;
int32_t t26 = -650105920;
volatile int16_t x116 = INT16_MAX;
static int32_t x129 = -1;
int8_t x135 = 3;
volatile int32_t t31 = 704389;
int64_t x139 = -22230571807668LL;
int64_t x142 = INT64_MIN;
int8_t x144 = -7;
volatile int16_t x153 = INT16_MIN;
int8_t x159 = 3;
volatile int32_t t37 = -5;
volatile int16_t x169 = 14602;
static volatile int16_t x171 = -1;
static int8_t x176 = 3;
volatile int32_t t40 = 6;
int32_t x179 = INT32_MAX;
uint32_t x180 = 530U;
uint32_t x182 = 933667136U;
static int16_t x185 = -1;
uint32_t x190 = UINT32_MAX;
static int8_t x191 = 1;
uint64_t x199 = 31803LLU;
int32_t t47 = -118415768;
volatile uint64_t x224 = 53415815LLU;
uint32_t x238 = 60397U;
static volatile uint16_t x244 = 21149U;
int32_t t57 = 51587;
volatile int32_t x249 = INT32_MAX;
int16_t x252 = INT16_MIN;
static volatile int32_t x255 = -56359927;
volatile uint32_t x265 = UINT32_MAX;
uint16_t x272 = 4064U;
volatile int32_t t65 = 350;
volatile int32_t t66 = 1;
volatile int32_t x311 = 78715;
int8_t x312 = INT8_MIN;
uint16_t x313 = 3055U;
uint64_t x317 = 661396922LLU;
int16_t x319 = INT16_MIN;
int8_t x320 = INT8_MIN;
int8_t x321 = -4;
volatile int32_t x342 = -149;
int32_t x347 = -1;
int8_t x351 = -1;
int8_t x357 = -1;
int16_t x361 = INT16_MAX;
uint32_t x363 = 284795U;
volatile uint64_t x367 = 2882228030113368LLU;
int16_t x372 = INT16_MIN;
uint64_t x373 = UINT64_MAX;
uint16_t x375 = UINT16_MAX;
static volatile int32_t t88 = 28295344;
int32_t t90 = 3280516;
static int8_t x401 = INT8_MIN;
int64_t x411 = INT64_MIN;
uint32_t x416 = UINT32_MAX;
static uint16_t x422 = UINT16_MAX;
int64_t x423 = INT64_MIN;
volatile uint32_t x427 = UINT32_MAX;
volatile int32_t t98 = 26963;


void f0(void) {
	uint8_t x1 = 9U;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -46;

	t0 = (((x1%x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 2777U;
	int16_t x6 = INT16_MIN;
	int16_t x7 = 11400;
	static volatile int32_t t1 = 56;

	t1 = (((x5%x6)/x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static uint8_t x10 = UINT8_MAX;
	int8_t x12 = -1;
	static volatile int32_t t2 = 4356;

	t2 = (((x9%x10)/x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int64_t x14 = 6852138553LL;
	int32_t x15 = INT32_MAX;
	uint16_t x16 = 641U;
	volatile int32_t t3 = 1;

	t3 = (((x13%x14)/x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	volatile uint64_t x19 = 935LLU;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 2;

	t4 = (((x17%x18)/x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 617;
	static int8_t x24 = INT8_MIN;

	t5 = (((x21%x22)/x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 166777U;
	static int64_t x26 = -653348456009233539LL;
	int32_t x28 = INT32_MAX;
	volatile int32_t t6 = 5;

	t6 = (((x25%x26)/x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int32_t x31 = -7390560;
	int32_t t7 = 3390331;

	t7 = (((x29%x30)/x31)==x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	volatile uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MIN;
	volatile uint16_t x36 = 480U;

	t8 = (((x33%x34)/x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int32_t x38 = -107297;
	volatile int16_t x39 = 254;
	int8_t x40 = INT8_MIN;

	t9 = (((x37%x38)/x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	volatile uint32_t x43 = 1999941U;
	int16_t x44 = INT16_MIN;

	t10 = (((x41%x42)/x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static uint32_t x46 = 13U;
	int16_t x47 = INT16_MAX;
	int8_t x48 = -1;
	int32_t t11 = 1945797;

	t11 = (((x45%x46)/x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int16_t x50 = -1;
	int16_t x51 = -1;
	volatile int32_t t12 = 297;

	t12 = (((x49%x50)/x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = 1;
	static int64_t x54 = -1LL;
	volatile int8_t x55 = -10;
	int16_t x56 = -505;
	int32_t t13 = 6598149;

	t13 = (((x53%x54)/x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	int32_t x60 = -7;
	static int32_t t14 = -90642;

	t14 = (((x57%x58)/x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 253U;
	int32_t x63 = INT32_MIN;
	volatile int32_t x64 = INT32_MAX;
	volatile int32_t t15 = 4;

	t15 = (((x61%x62)/x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	int32_t x68 = -1;

	t16 = (((x65%x66)/x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -647;

	t17 = (((x69%x70)/x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x74 = 15952U;
	volatile int64_t x76 = INT64_MIN;

	t18 = (((x73%x74)/x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static int32_t x78 = 385;
	static int16_t x79 = -1;
	static int32_t t19 = -457;

	t19 = (((x77%x78)/x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x86 = -1;
	int64_t x87 = INT64_MIN;
	int16_t x88 = 282;
	int32_t t20 = -3;

	t20 = (((x85%x86)/x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = -1LL;
	int64_t x91 = INT64_MAX;
	static int32_t x92 = INT32_MIN;
	int32_t t21 = -3152;

	t21 = (((x89%x90)/x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -1LL;
	uint8_t x94 = UINT8_MAX;
	uint64_t x95 = 272472936009211LLU;
	int64_t x96 = INT64_MIN;
	static volatile int32_t t22 = -506;

	t22 = (((x93%x94)/x95)==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x97 = 3702U;
	int32_t x98 = INT32_MAX;
	volatile int32_t x99 = 52;
	int8_t x100 = INT8_MAX;

	t23 = (((x97%x98)/x99)==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MIN;
	int32_t x103 = 12;
	int8_t x104 = INT8_MIN;
	volatile int32_t t24 = -115;

	t24 = (((x101%x102)/x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = -108;
	int64_t x107 = -1LL;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t25 = 5989009;

	t25 = (((x105%x106)/x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = -14537869;
	int16_t x110 = 1810;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = INT8_MIN;

	t26 = (((x109%x110)/x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MAX;
	int32_t t27 = 107;

	t27 = (((x113%x114)/x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int8_t x118 = INT8_MAX;
	int32_t x119 = -1;
	static volatile int16_t x120 = 659;
	int32_t t28 = -103;

	t28 = (((x117%x118)/x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = -1;
	int64_t x122 = 1147875881LL;
	static uint32_t x123 = 44797493U;
	int32_t x124 = INT32_MAX;
	int32_t t29 = -16129147;

	t29 = (((x121%x122)/x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x130 = 4U;
	int16_t x131 = -1;
	int16_t x132 = 3;
	volatile int32_t t30 = 355;

	t30 = (((x129%x130)/x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = -1;
	int64_t x134 = INT64_MIN;
	int64_t x136 = INT64_MAX;

	t31 = (((x133%x134)/x135)==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = UINT8_MAX;
	static int16_t x138 = INT16_MIN;
	uint16_t x140 = 8912U;
	static int32_t t32 = -10934742;

	t32 = (((x137%x138)/x139)==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = INT16_MIN;
	int16_t x143 = -273;
	int32_t t33 = -260744909;

	t33 = (((x141%x142)/x143)==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x145 = UINT32_MAX;
	static int64_t x146 = -1LL;
	int16_t x147 = -1;
	int32_t x148 = -1;
	int32_t t34 = 39581375;

	t34 = (((x145%x146)/x147)==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x154 = INT64_MIN;
	volatile uint8_t x155 = 1U;
	int64_t x156 = INT64_MIN;
	int32_t t35 = 0;

	t35 = (((x153%x154)/x155)==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x157 = INT16_MIN;
	int8_t x158 = -1;
	static uint8_t x160 = 1U;
	volatile int32_t t36 = -34;

	t36 = (((x157%x158)/x159)==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x161 = -545302173;
	volatile int32_t x162 = INT32_MAX;
	static uint8_t x163 = UINT8_MAX;
	uint64_t x164 = 116550LLU;

	t37 = (((x161%x162)/x163)==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = -7;
	int16_t x168 = INT16_MAX;
	int32_t t38 = -163175441;

	t38 = (((x165%x166)/x167)==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = 63;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t39 = 8068;

	t39 = (((x169%x170)/x171)==x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x173 = -58398472555428140LL;
	static int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;

	t40 = (((x173%x174)/x175)==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	volatile int32_t t41 = -205589212;

	t41 = (((x177%x178)/x179)==x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MAX;
	uint64_t x183 = 309718095LLU;
	uint64_t x184 = 121LLU;
	static volatile int32_t t42 = 2608;

	t42 = (((x181%x182)/x183)==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x186 = -1;
	uint16_t x187 = 455U;
	static volatile uint32_t x188 = 7U;
	static int32_t t43 = -1565946;

	t43 = (((x185%x186)/x187)==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	uint8_t x192 = 55U;
	volatile int32_t t44 = -59285764;

	t44 = (((x189%x190)/x191)==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MIN;
	uint16_t x195 = UINT16_MAX;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t45 = 0;

	t45 = (((x193%x194)/x195)==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 58U;
	static uint64_t x198 = 253304857614372LLU;
	uint64_t x200 = 1LLU;
	int32_t t46 = -2550;

	t46 = (((x197%x198)/x199)==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	uint8_t x202 = UINT8_MAX;
	uint32_t x203 = UINT32_MAX;
	uint32_t x204 = UINT32_MAX;

	t47 = (((x201%x202)/x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x205 = UINT8_MAX;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = UINT64_MAX;
	volatile int16_t x208 = INT16_MAX;
	int32_t t48 = 135672;

	t48 = (((x205%x206)/x207)==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MAX;
	int16_t x212 = INT16_MIN;
	int32_t t49 = 0;

	t49 = (((x209%x210)/x211)==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x213 = -1LL;
	static int16_t x214 = 236;
	int16_t x215 = 3202;
	int64_t x216 = -1LL;
	int32_t t50 = 788204811;

	t50 = (((x213%x214)/x215)==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	static uint16_t x219 = 19U;
	static int8_t x220 = 0;
	int32_t t51 = -468;

	t51 = (((x217%x218)/x219)==x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x221 = 204393LLU;
	uint64_t x222 = 20318LLU;
	static int32_t x223 = INT32_MIN;
	static volatile int32_t t52 = 483;

	t52 = (((x221%x222)/x223)==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -1;
	int64_t x226 = -3326247401458622024LL;
	int8_t x227 = -1;
	static volatile int64_t x228 = -497LL;
	volatile int32_t t53 = 1;

	t53 = (((x225%x226)/x227)==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x233 = 604U;
	uint32_t x234 = 33972U;
	volatile int16_t x235 = INT16_MIN;
	static int8_t x236 = 8;
	static volatile int32_t t54 = -15287765;

	t54 = (((x233%x234)/x235)==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x237 = 20608343494565LLU;
	int64_t x239 = -1LL;
	int8_t x240 = -1;
	int32_t t55 = -17310;

	t55 = (((x237%x238)/x239)==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = 266228653388473989LLU;
	volatile int32_t x243 = INT32_MIN;
	volatile int32_t t56 = 14;

	t56 = (((x241%x242)/x243)==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x245 = INT8_MIN;
	int32_t x246 = 38;
	uint64_t x247 = UINT64_MAX;
	static uint16_t x248 = 1554U;

	t57 = (((x245%x246)/x247)==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x250 = INT16_MIN;
	uint8_t x251 = 21U;
	static int32_t t58 = 5665350;

	t58 = (((x249%x250)/x251)==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -1;
	int32_t x254 = INT32_MIN;
	volatile uint64_t x256 = 2129601764897784268LLU;
	static int32_t t59 = -7596106;

	t59 = (((x253%x254)/x255)==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x257 = INT32_MAX;
	uint16_t x258 = UINT16_MAX;
	static int16_t x259 = 10;
	int16_t x260 = 169;
	static volatile int32_t t60 = 10;

	t60 = (((x257%x258)/x259)==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x261 = 23455415851771022LLU;
	uint16_t x262 = 6460U;
	static uint8_t x263 = UINT8_MAX;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t61 = -260588995;

	t61 = (((x261%x262)/x263)==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x266 = -13794;
	volatile int32_t x267 = INT32_MIN;
	static volatile int32_t x268 = INT32_MIN;
	static int32_t t62 = -14523;

	t62 = (((x265%x266)/x267)==x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MIN;
	int32_t t63 = 249;

	t63 = (((x269%x270)/x271)==x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x273 = INT16_MIN;
	static int64_t x274 = INT64_MIN;
	volatile int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t64 = -67;

	t64 = (((x273%x274)/x275)==x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x277 = UINT8_MAX;
	static uint32_t x278 = UINT32_MAX;
	volatile int32_t x279 = INT32_MAX;
	volatile int16_t x280 = INT16_MIN;

	t65 = (((x277%x278)/x279)==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = 2227LL;
	volatile uint8_t x286 = UINT8_MAX;
	int16_t x287 = INT16_MIN;
	int64_t x288 = INT64_MIN;

	t66 = (((x285%x286)/x287)==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x289 = INT8_MIN;
	uint16_t x290 = UINT16_MAX;
	static volatile int8_t x291 = INT8_MAX;
	int64_t x292 = -15591231006308915LL;
	volatile int32_t t67 = -960;

	t67 = (((x289%x290)/x291)==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x305 = 1392286LL;
	static int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MIN;
	volatile uint8_t x308 = 0U;
	int32_t t68 = -12;

	t68 = (((x305%x306)/x307)==x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x309 = 6202425873811214LLU;
	static uint8_t x310 = UINT8_MAX;
	volatile int32_t t69 = 70108;

	t69 = (((x309%x310)/x311)==x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x314 = INT8_MIN;
	static uint64_t x315 = 13LLU;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t70 = 279441;

	t70 = (((x313%x314)/x315)==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x318 = INT64_MIN;
	volatile int32_t t71 = 154;

	t71 = (((x317%x318)/x319)==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x322 = UINT8_MAX;
	static int64_t x323 = INT64_MIN;
	uint8_t x324 = UINT8_MAX;
	static int32_t t72 = -35509;

	t72 = (((x321%x322)/x323)==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = INT16_MAX;
	static volatile int64_t x326 = -1LL;
	uint16_t x327 = 12574U;
	static volatile uint32_t x328 = 522387U;
	volatile int32_t t73 = 136;

	t73 = (((x325%x326)/x327)==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x329 = INT32_MAX;
	volatile uint32_t x330 = 432U;
	volatile uint64_t x331 = 2314740203LLU;
	volatile int8_t x332 = -3;
	volatile int32_t t74 = -23629391;

	t74 = (((x329%x330)/x331)==x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = INT64_MIN;
	volatile uint32_t x338 = UINT32_MAX;
	static int32_t x339 = INT32_MAX;
	volatile int64_t x340 = INT64_MAX;
	static int32_t t75 = 165028;

	t75 = (((x337%x338)/x339)==x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x341 = INT64_MAX;
	int8_t x343 = INT8_MAX;
	int8_t x344 = 2;
	static int32_t t76 = 6771;

	t76 = (((x341%x342)/x343)==x344);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int64_t x346 = INT64_MIN;
	int32_t x348 = -1;
	volatile int32_t t77 = 31732;

	t77 = (((x345%x346)/x347)==x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x349 = UINT8_MAX;
	uint64_t x350 = 909799833LLU;
	volatile int16_t x352 = INT16_MIN;
	int32_t t78 = -2385221;

	t78 = (((x349%x350)/x351)==x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 25081U;
	uint32_t x354 = UINT32_MAX;
	uint16_t x355 = 15781U;
	int16_t x356 = -1;
	volatile int32_t t79 = 219;

	t79 = (((x353%x354)/x355)==x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x358 = 48170053986274728LLU;
	int16_t x359 = 3932;
	uint64_t x360 = 13LLU;
	static int32_t t80 = -1055255;

	t80 = (((x357%x358)/x359)==x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x362 = UINT64_MAX;
	int64_t x364 = 184559033LL;
	int32_t t81 = 567;

	t81 = (((x361%x362)/x363)==x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = -4995;
	uint8_t x366 = 36U;
	uint64_t x368 = UINT64_MAX;
	static int32_t t82 = 1087664;

	t82 = (((x365%x366)/x367)==x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x369 = -1;
	uint16_t x370 = 708U;
	static uint16_t x371 = UINT16_MAX;
	int32_t t83 = 63;

	t83 = (((x369%x370)/x371)==x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x374 = 2057656;
	static int16_t x376 = 0;
	volatile int32_t t84 = -18050;

	t84 = (((x373%x374)/x375)==x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	static int64_t x379 = 15313841LL;
	int32_t x380 = -4212;
	static int32_t t85 = 14;

	t85 = (((x377%x378)/x379)==x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x381 = 6U;
	int32_t x382 = INT32_MAX;
	int32_t x383 = 280;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t86 = 158924;

	t86 = (((x381%x382)/x383)==x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = 2U;
	uint8_t x388 = 0U;
	volatile int32_t t87 = 108;

	t87 = (((x385%x386)/x387)==x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = 253;
	uint16_t x390 = 54U;
	int8_t x391 = -1;
	int8_t x392 = INT8_MIN;

	t88 = (((x389%x390)/x391)==x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = -1;
	static int8_t x394 = -1;
	volatile int8_t x395 = INT8_MIN;
	uint8_t x396 = 21U;
	static volatile int32_t t89 = -237095;

	t89 = (((x393%x394)/x395)==x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x397 = 0;
	int16_t x398 = INT16_MAX;
	static int8_t x399 = INT8_MAX;
	int16_t x400 = INT16_MIN;

	t90 = (((x397%x398)/x399)==x400);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x402 = INT16_MAX;
	uint16_t x403 = UINT16_MAX;
	int32_t x404 = INT32_MIN;
	volatile int32_t t91 = 16533919;

	t91 = (((x401%x402)/x403)==x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = 22;
	int32_t x406 = INT32_MIN;
	int8_t x407 = -35;
	static int16_t x408 = INT16_MIN;
	static volatile int32_t t92 = 636451;

	t92 = (((x405%x406)/x407)==x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x409 = INT32_MAX;
	uint8_t x410 = 49U;
	int64_t x412 = INT64_MIN;
	int32_t t93 = -313;

	t93 = (((x409%x410)/x411)==x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = INT32_MIN;
	int64_t x414 = -1LL;
	int64_t x415 = INT64_MIN;
	int32_t t94 = 34089059;

	t94 = (((x413%x414)/x415)==x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = 1;
	uint8_t x418 = 5U;
	int8_t x419 = -1;
	static uint16_t x420 = UINT16_MAX;
	static int32_t t95 = 350471761;

	t95 = (((x417%x418)/x419)==x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x421 = -556;
	uint32_t x424 = 447U;
	int32_t t96 = 1;

	t96 = (((x421%x422)/x423)==x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x425 = 3U;
	static int16_t x426 = INT16_MIN;
	static uint8_t x428 = UINT8_MAX;
	static volatile int32_t t97 = -64597;

	t97 = (((x425%x426)/x427)==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x429 = 19069388LLU;
	int16_t x430 = INT16_MIN;
	volatile uint16_t x431 = 2U;
	int32_t x432 = INT32_MIN;

	t98 = (((x429%x430)/x431)==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x433 = 1LLU;
	static int8_t x434 = 3;
	int64_t x435 = INT64_MAX;
	int64_t x436 = INT64_MIN;
	static volatile int32_t t99 = -257226382;

	t99 = (((x433%x434)/x435)==x436);

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

