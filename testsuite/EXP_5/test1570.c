#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = 3205826LLU;
int64_t x6 = -388692054692118807LL;
uint64_t x9 = 45860LLU;
int8_t x15 = INT8_MIN;
uint16_t x16 = 486U;
uint8_t x19 = 36U;
volatile int16_t x22 = INT16_MAX;
volatile int32_t t5 = -38341363;
int8_t x33 = -6;
volatile uint32_t x40 = UINT32_MAX;
int8_t x41 = -1;
int64_t x47 = INT64_MIN;
int64_t x49 = INT64_MAX;
int32_t x54 = INT32_MIN;
static uint32_t x62 = 63783U;
int32_t x67 = INT32_MIN;
static int32_t t18 = 3458907;
static int16_t x85 = 1317;
volatile int32_t x89 = 731252277;
volatile int32_t t21 = -230;
int16_t x101 = INT16_MAX;
volatile int32_t x102 = INT32_MAX;
static volatile int32_t t22 = -23954723;
volatile int8_t x107 = 12;
int8_t x110 = INT8_MIN;
static uint32_t x113 = UINT32_MAX;
static uint64_t x117 = 15439LLU;
int32_t x118 = INT32_MAX;
int16_t x126 = INT16_MIN;
int8_t x128 = INT8_MAX;
static volatile int64_t x136 = -1LL;
int32_t x138 = 603;
volatile uint64_t x141 = UINT64_MAX;
volatile int32_t x152 = 844;
volatile uint64_t x157 = 71118LLU;
volatile uint64_t x159 = 4LLU;
volatile int16_t x165 = INT16_MIN;
int32_t x176 = INT32_MAX;
int32_t t41 = -204414970;
int64_t x187 = 343908916960LL;
volatile int32_t x191 = INT32_MIN;
int32_t x193 = -3;
uint16_t x198 = 16U;
uint8_t x208 = 30U;
volatile int16_t x209 = 1;
volatile int32_t x216 = INT32_MIN;
volatile int8_t x229 = 0;
static volatile uint16_t x231 = 1U;
uint8_t x236 = UINT8_MAX;
uint64_t x239 = 860LLU;
int32_t x246 = 15;
volatile int64_t x248 = 264334679869229583LL;
volatile int16_t x249 = -1;
int8_t x258 = INT8_MAX;
volatile int32_t t59 = 179007170;
static uint32_t x264 = 414568U;
volatile int32_t t61 = 8767;
uint16_t x269 = 429U;
int16_t x270 = -1;
static volatile uint16_t x271 = UINT16_MAX;
int64_t x273 = INT64_MIN;
volatile int16_t x274 = INT16_MIN;
volatile int32_t t64 = 4703452;
volatile int32_t x286 = 489;
int16_t x295 = 1283;
uint8_t x303 = UINT8_MAX;
volatile int64_t x316 = 635207859406LL;
uint64_t x317 = 5661LLU;
int16_t x318 = INT16_MIN;
int64_t x319 = INT64_MIN;
static int16_t x320 = 5142;
int8_t x324 = -1;
static int32_t x327 = INT32_MAX;
volatile int64_t x329 = -26310LL;
int8_t x333 = INT8_MIN;
uint64_t x345 = 249708264365775LLU;
static volatile int64_t x346 = INT64_MIN;
static volatile uint8_t x356 = 26U;
int8_t x358 = INT8_MIN;
static int16_t x364 = -1;
uint64_t x370 = UINT64_MAX;
int8_t x374 = INT8_MAX;
static uint8_t x377 = UINT8_MAX;
int8_t x379 = INT8_MAX;
int8_t x383 = -1;
int16_t x391 = INT16_MIN;
int32_t t92 = -211;
int32_t x403 = -1;
static uint16_t x405 = 3742U;
int64_t x410 = -743072295967LL;
static int16_t x411 = 950;
volatile int32_t t98 = 901719492;
static int32_t x417 = 18;
uint16_t x419 = 293U;


void f0(void) {
	static int64_t x1 = -13406LL;
	static int8_t x2 = 22;
	int64_t x3 = -27517LL;
	static uint32_t x4 = UINT32_MAX;
	int32_t t0 = 9;

	t0 = (x1<=((x2<=x3)/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x7 = -1;
	uint64_t x8 = 4431194081063069572LLU;
	volatile int32_t t1 = -6459724;

	t1 = (x5<=((x6<=x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x10 = 2554857U;
	int64_t x11 = INT64_MAX;
	int8_t x12 = INT8_MAX;
	static int32_t t2 = 591520;

	t2 = (x9<=((x10<=x11)/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	volatile int64_t x14 = INT64_MIN;
	volatile int32_t t3 = -243;

	t3 = (x13<=((x14<=x15)/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 1;
	uint64_t x18 = 402490LLU;
	volatile uint8_t x20 = 110U;
	int32_t t4 = 3822601;

	t4 = (x17<=((x18<=x19)/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 586U;
	volatile int32_t x23 = 0;
	int16_t x24 = INT16_MIN;

	t5 = (x21<=((x22<=x23)/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 578744LLU;
	int32_t x26 = 98;
	uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 8028264003346293LLU;
	int32_t t6 = 24366763;

	t6 = (x25<=((x26<=x27)/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 625LL;
	int32_t x30 = 1593;
	static int8_t x31 = 0;
	uint16_t x32 = 1U;
	int32_t t7 = 48468147;

	t7 = (x29<=((x30<=x31)/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = UINT64_MAX;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 2039581;

	t8 = (x33<=((x34<=x35)/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -297;
	int16_t x38 = INT16_MIN;
	int8_t x39 = 7;
	int32_t t9 = -625;

	t9 = (x37<=((x38<=x39)/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = -1;
	volatile uint8_t x44 = UINT8_MAX;
	int32_t t10 = 56851;

	t10 = (x41<=((x42<=x43)/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 1U;
	int64_t x46 = -1LL;
	static int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -171264714;

	t11 = (x45<=((x46<=x47)/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x50 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	volatile uint16_t x52 = 2000U;
	volatile int32_t t12 = -13874;

	t12 = (x49<=((x50<=x51)/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = -1;
	static volatile int16_t x55 = INT16_MIN;
	int32_t x56 = -1;
	int32_t t13 = -960137767;

	t13 = (x53<=((x54<=x55)/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = UINT8_MAX;
	static uint8_t x63 = UINT8_MAX;
	int8_t x64 = INT8_MAX;
	int32_t t14 = 337581314;

	t14 = (x61<=((x62<=x63)/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	uint32_t x66 = 3U;
	int16_t x68 = INT16_MIN;
	volatile int32_t t15 = -26739;

	t15 = (x65<=((x66<=x67)/x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MIN;
	static int16_t x70 = -1;
	int32_t x71 = 121110799;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t16 = 148;

	t16 = (x69<=((x70<=x71)/x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -1;
	volatile int16_t x74 = 0;
	int64_t x75 = INT64_MIN;
	int64_t x76 = -245169465744039806LL;
	volatile int32_t t17 = -105745708;

	t17 = (x73<=((x74<=x75)/x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1092470067227LL;
	int16_t x78 = INT16_MAX;
	uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MIN;

	t18 = (x77<=((x78<=x79)/x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x86 = INT64_MIN;
	uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t19 = -1604397;

	t19 = (x85<=((x86<=x87)/x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = 5;
	volatile uint64_t x91 = 79524148401LLU;
	volatile uint32_t x92 = 1222957U;
	volatile int32_t t20 = -126809;

	t20 = (x89<=((x90<=x91)/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	volatile int8_t x94 = 1;
	int32_t x95 = 387158586;
	int16_t x96 = INT16_MAX;

	t21 = (x93<=((x94<=x95)/x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x103 = 21U;
	volatile int8_t x104 = 20;

	t22 = (x101<=((x102<=x103)/x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = -1LL;
	volatile int64_t x106 = INT64_MIN;
	volatile int8_t x108 = INT8_MIN;
	int32_t t23 = -27;

	t23 = (x105<=((x106<=x107)/x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x109 = 110U;
	int16_t x111 = INT16_MAX;
	int16_t x112 = -8;
	volatile int32_t t24 = 930;

	t24 = (x109<=((x110<=x111)/x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x114 = UINT8_MAX;
	uint16_t x115 = 7U;
	int8_t x116 = 7;
	int32_t t25 = -420;

	t25 = (x113<=((x114<=x115)/x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x119 = INT16_MIN;
	volatile int16_t x120 = INT16_MAX;
	int32_t t26 = 226;

	t26 = (x117<=((x118<=x119)/x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x121 = INT64_MIN;
	static uint64_t x122 = 222781936532LLU;
	uint64_t x123 = 563LLU;
	uint16_t x124 = 101U;
	volatile int32_t t27 = 265940;

	t27 = (x121<=((x122<=x123)/x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x125 = -16;
	int8_t x127 = INT8_MAX;
	static int32_t t28 = 0;

	t28 = (x125<=((x126<=x127)/x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	uint64_t x130 = 1445LLU;
	int64_t x131 = INT64_MIN;
	uint8_t x132 = 6U;
	int32_t t29 = -63351;

	t29 = (x129<=((x130<=x131)/x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	int16_t x134 = 10018;
	uint16_t x135 = 66U;
	volatile int32_t t30 = 2741;

	t30 = (x133<=((x134<=x135)/x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x137 = INT64_MIN;
	uint16_t x139 = 172U;
	int8_t x140 = INT8_MIN;
	static int32_t t31 = 6;

	t31 = (x137<=((x138<=x139)/x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = -845;
	uint8_t x143 = UINT8_MAX;
	static int64_t x144 = -1LL;
	volatile int32_t t32 = -869;

	t32 = (x141<=((x142<=x143)/x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = 0;
	uint16_t x150 = UINT16_MAX;
	static int32_t x151 = INT32_MIN;
	volatile int32_t t33 = -1751030;

	t33 = (x149<=((x150<=x151)/x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	uint32_t x154 = UINT32_MAX;
	volatile uint64_t x155 = 1730LLU;
	volatile uint8_t x156 = 35U;
	volatile int32_t t34 = -29715;

	t34 = (x153<=((x154<=x155)/x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = UINT32_MAX;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t35 = -3991668;

	t35 = (x157<=((x158<=x159)/x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = INT16_MAX;
	volatile int16_t x162 = INT16_MIN;
	uint32_t x163 = UINT32_MAX;
	static int64_t x164 = INT64_MIN;
	static int32_t t36 = -872255361;

	t36 = (x161<=((x162<=x163)/x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = INT32_MIN;
	static int16_t x167 = 482;
	static int32_t x168 = -32150698;
	static volatile int32_t t37 = -7691;

	t37 = (x165<=((x166<=x167)/x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = INT32_MIN;
	int16_t x170 = -1;
	static int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	int32_t t38 = 159377;

	t38 = (x169<=((x170<=x171)/x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x173 = 4U;
	int32_t x174 = INT32_MAX;
	static int64_t x175 = INT64_MAX;
	volatile int32_t t39 = -38;

	t39 = (x173<=((x174<=x175)/x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x177 = 15953475U;
	volatile int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MIN;
	volatile int16_t x180 = -5;
	static int32_t t40 = 3754;

	t40 = (x177<=((x178<=x179)/x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x181 = INT32_MAX;
	int32_t x182 = 115963;
	int64_t x183 = -1LL;
	volatile int8_t x184 = INT8_MIN;

	t41 = (x181<=((x182<=x183)/x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x185 = 17U;
	int8_t x186 = INT8_MIN;
	int64_t x188 = -126350LL;
	int32_t t42 = 55715;

	t42 = (x185<=((x186<=x187)/x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x189 = UINT16_MAX;
	static int8_t x190 = INT8_MIN;
	static int64_t x192 = -305795LL;
	volatile int32_t t43 = 12955;

	t43 = (x189<=((x190<=x191)/x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x194 = 2U;
	int32_t x195 = 108455999;
	int64_t x196 = -1LL;
	volatile int32_t t44 = -6525022;

	t44 = (x193<=((x194<=x195)/x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x197 = 16642132651LLU;
	int16_t x199 = INT16_MIN;
	volatile uint8_t x200 = 34U;
	volatile int32_t t45 = -170715;

	t45 = (x197<=((x198<=x199)/x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = -1920206;
	volatile uint16_t x206 = 6U;
	static int16_t x207 = -1;
	int32_t t46 = -119068747;

	t46 = (x205<=((x206<=x207)/x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x210 = UINT32_MAX;
	static int64_t x211 = -6926376447406848LL;
	volatile uint8_t x212 = UINT8_MAX;
	static int32_t t47 = 378;

	t47 = (x209<=((x210<=x211)/x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x213 = 54LL;
	static uint16_t x214 = 5U;
	volatile int64_t x215 = -1LL;
	volatile int32_t t48 = 49082;

	t48 = (x213<=((x214<=x215)/x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = UINT64_MAX;
	int16_t x219 = -7994;
	volatile int32_t x220 = -1;
	int32_t t49 = -1009407;

	t49 = (x217<=((x218<=x219)/x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x222 = 461411658U;
	static int16_t x223 = -1;
	static int16_t x224 = INT16_MAX;
	volatile int32_t t50 = 0;

	t50 = (x221<=((x222<=x223)/x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -1;
	int8_t x226 = INT8_MAX;
	int64_t x227 = -1183961LL;
	uint64_t x228 = 95380995113636413LLU;
	static int32_t t51 = 105925;

	t51 = (x225<=((x226<=x227)/x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x230 = 11744U;
	volatile uint32_t x232 = 5U;
	volatile int32_t t52 = 662641;

	t52 = (x229<=((x230<=x231)/x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = UINT64_MAX;
	int64_t x234 = 506494843259330475LL;
	static int32_t x235 = INT32_MIN;
	volatile int32_t t53 = -32304;

	t53 = (x233<=((x234<=x235)/x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 0LLU;
	volatile int32_t x238 = 81;
	volatile int8_t x240 = -1;
	static int32_t t54 = 59492;

	t54 = (x237<=((x238<=x239)/x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -1320;
	int16_t x242 = 16;
	static int64_t x243 = -2048196668363937LL;
	volatile int64_t x244 = INT64_MIN;
	static int32_t t55 = -93115;

	t55 = (x241<=((x242<=x243)/x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -1LL;
	int64_t x247 = -1LL;
	volatile int32_t t56 = 880588292;

	t56 = (x245<=((x246<=x247)/x248));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x250 = INT64_MIN;
	static int8_t x251 = -1;
	uint16_t x252 = 6022U;
	volatile int32_t t57 = -29894;

	t57 = (x249<=((x250<=x251)/x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = 293U;
	int16_t x254 = -1;
	uint32_t x255 = UINT32_MAX;
	volatile int8_t x256 = INT8_MIN;
	volatile int32_t t58 = -1;

	t58 = (x253<=((x254<=x255)/x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MIN;
	int8_t x259 = INT8_MAX;
	int8_t x260 = INT8_MIN;

	t59 = (x257<=((x258<=x259)/x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MAX;
	uint32_t x263 = 15U;
	volatile int32_t t60 = -24824;

	t60 = (x261<=((x262<=x263)/x264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -1LL;
	uint16_t x266 = 28178U;
	int32_t x267 = -1;
	volatile int8_t x268 = -1;

	t61 = (x265<=((x266<=x267)/x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x272 = 25;
	int32_t t62 = 2;

	t62 = (x269<=((x270<=x271)/x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x275 = 2120;
	static volatile int16_t x276 = -1;
	static volatile int32_t t63 = -5968;

	t63 = (x273<=((x274<=x275)/x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -1;
	volatile int16_t x278 = -68;
	static int16_t x279 = -1;
	int8_t x280 = 3;

	t64 = (x277<=((x278<=x279)/x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = UINT16_MAX;
	uint64_t x282 = UINT64_MAX;
	static volatile int16_t x283 = 6;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t65 = 799;

	t65 = (x281<=((x282<=x283)/x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -414584561;
	int16_t x287 = -3;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t66 = 1;

	t66 = (x285<=((x286<=x287)/x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x289 = -1LL;
	int8_t x290 = -1;
	int16_t x291 = 2;
	int32_t x292 = -22790;
	int32_t t67 = 27479162;

	t67 = (x289<=((x290<=x291)/x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x293 = UINT16_MAX;
	uint16_t x294 = UINT16_MAX;
	int32_t x296 = -4;
	volatile int32_t t68 = 0;

	t68 = (x293<=((x294<=x295)/x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x297 = 74533129856559598LLU;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = 1294086612LLU;
	volatile int16_t x300 = INT16_MAX;
	int32_t t69 = 2;

	t69 = (x297<=((x298<=x299)/x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x301 = 14336133706LLU;
	uint32_t x302 = 41603386U;
	int16_t x304 = 1177;
	volatile int32_t t70 = 1295;

	t70 = (x301<=((x302<=x303)/x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -1195;
	int8_t x306 = INT8_MAX;
	uint64_t x307 = 12017691143374867LLU;
	int64_t x308 = INT64_MAX;
	int32_t t71 = -71575511;

	t71 = (x305<=((x306<=x307)/x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = 63943973658LL;
	int32_t x310 = INT32_MAX;
	int8_t x311 = 58;
	uint32_t x312 = 25662U;
	int32_t t72 = 29270282;

	t72 = (x309<=((x310<=x311)/x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x313 = UINT8_MAX;
	int64_t x314 = -1LL;
	static int32_t x315 = 155160;
	static int32_t t73 = -78560308;

	t73 = (x313<=((x314<=x315)/x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t t74 = 455;

	t74 = (x317<=((x318<=x319)/x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x321 = UINT64_MAX;
	static int32_t x322 = 69;
	int64_t x323 = INT64_MIN;
	volatile int32_t t75 = -3562341;

	t75 = (x321<=((x322<=x323)/x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = 309355;
	static uint64_t x326 = UINT64_MAX;
	static uint8_t x328 = 17U;
	static int32_t t76 = 0;

	t76 = (x325<=((x326<=x327)/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x330 = -869;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = INT16_MIN;
	int32_t t77 = 9467283;

	t77 = (x329<=((x330<=x331)/x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MAX;
	uint64_t x336 = 1678560097055569412LLU;
	int32_t t78 = 24205;

	t78 = (x333<=((x334<=x335)/x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = 0;
	int8_t x338 = 28;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = INT16_MAX;
	volatile int32_t t79 = 64868112;

	t79 = (x337<=((x338<=x339)/x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = UINT64_MAX;
	volatile int16_t x342 = INT16_MAX;
	volatile int64_t x343 = -622160130137922205LL;
	int16_t x344 = INT16_MAX;
	volatile int32_t t80 = 648;

	t80 = (x341<=((x342<=x343)/x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x347 = 203881420LL;
	static int32_t x348 = -1;
	volatile int32_t t81 = -5746;

	t81 = (x345<=((x346<=x347)/x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = -1LL;
	static int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MAX;
	volatile int32_t t82 = -13;

	t82 = (x349<=((x350<=x351)/x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x353 = 15U;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	volatile int32_t t83 = 0;

	t83 = (x353<=((x354<=x355)/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x357 = INT16_MIN;
	int32_t x359 = -1;
	uint8_t x360 = 30U;
	volatile int32_t t84 = -634200;

	t84 = (x357<=((x358<=x359)/x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = -27194854;
	int8_t x362 = INT8_MIN;
	static uint16_t x363 = UINT16_MAX;
	int32_t t85 = -769;

	t85 = (x361<=((x362<=x363)/x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MIN;
	static int8_t x367 = INT8_MAX;
	volatile int32_t x368 = INT32_MIN;
	int32_t t86 = 421;

	t86 = (x365<=((x366<=x367)/x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = INT64_MIN;
	int8_t x371 = -34;
	static int32_t x372 = INT32_MIN;
	static int32_t t87 = 106;

	t87 = (x369<=((x370<=x371)/x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x375 = 2;
	volatile int32_t x376 = INT32_MIN;
	int32_t t88 = -141180692;

	t88 = (x373<=((x374<=x375)/x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x378 = INT8_MAX;
	int8_t x380 = 10;
	int32_t t89 = -8235614;

	t89 = (x377<=((x378<=x379)/x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x381 = -23;
	static int8_t x382 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	static volatile int32_t t90 = -5430;

	t90 = (x381<=((x382<=x383)/x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = -1LL;
	static uint32_t x386 = 1U;
	int8_t x387 = INT8_MIN;
	static int64_t x388 = -218253793740LL;
	int32_t t91 = 0;

	t91 = (x385<=((x386<=x387)/x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 2U;
	int8_t x390 = INT8_MIN;
	int16_t x392 = INT16_MAX;

	t92 = (x389<=((x390<=x391)/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x393 = 153U;
	int32_t x394 = -1;
	volatile int64_t x395 = INT64_MAX;
	volatile int16_t x396 = INT16_MIN;
	int32_t t93 = -265095847;

	t93 = (x393<=((x394<=x395)/x396));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x397 = UINT64_MAX;
	uint8_t x398 = 100U;
	volatile uint32_t x399 = 144260249U;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t94 = 8;

	t94 = (x397<=((x398<=x399)/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 3793188131385LLU;
	volatile int64_t x402 = -1LL;
	volatile int16_t x404 = -3620;
	volatile int32_t t95 = -258352;

	t95 = (x401<=((x402<=x403)/x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x406 = 3882;
	static int32_t x407 = 14;
	int8_t x408 = -1;
	int32_t t96 = 713171949;

	t96 = (x405<=((x406<=x407)/x408));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = 1559U;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t97 = 184;

	t97 = (x409<=((x410<=x411)/x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x413 = 1U;
	uint64_t x414 = UINT64_MAX;
	volatile int64_t x415 = INT64_MIN;
	uint16_t x416 = 4U;

	t98 = (x413<=((x414<=x415)/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x418 = INT64_MIN;
	static int64_t x420 = INT64_MAX;
	static int32_t t99 = -26927;

	t99 = (x417<=((x418<=x419)/x420));

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

