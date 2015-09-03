#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = -1003;
volatile int16_t x5 = -1;
volatile int64_t x13 = INT64_MIN;
uint32_t x22 = 2187U;
int16_t x23 = -1;
int8_t x24 = 1;
int16_t x28 = -1;
uint64_t x33 = UINT64_MAX;
int32_t t8 = 134;
volatile uint32_t x37 = UINT32_MAX;
volatile uint64_t x40 = 611LLU;
int32_t x51 = -1;
uint16_t x52 = UINT16_MAX;
int16_t x59 = INT16_MAX;
volatile int32_t t16 = -873010186;
int16_t x74 = -1;
int32_t x82 = -17688;
static volatile int32_t t20 = -386093639;
volatile int32_t t21 = 1038;
static int16_t x89 = INT16_MIN;
uint8_t x90 = UINT8_MAX;
uint16_t x91 = 1U;
uint8_t x98 = 65U;
volatile int32_t t24 = 17328286;
int16_t x102 = INT16_MIN;
int64_t x104 = INT64_MIN;
int32_t x106 = INT32_MIN;
int16_t x108 = -1;
static int16_t x110 = INT16_MIN;
uint8_t x115 = 1U;
int8_t x125 = INT8_MIN;
uint32_t x143 = UINT32_MAX;
uint8_t x151 = UINT8_MAX;
int8_t x156 = INT8_MIN;
int64_t x159 = INT64_MIN;
static int64_t x165 = 105435LL;
int8_t x166 = INT8_MIN;
uint16_t x168 = 184U;
static int8_t x169 = -4;
int16_t x174 = INT16_MIN;
uint8_t x175 = UINT8_MAX;
int32_t x176 = INT32_MAX;
int32_t t44 = 0;
volatile int16_t x184 = INT16_MIN;
int32_t t47 = -228;
int16_t x193 = -1;
volatile int32_t t49 = -119;
int64_t x217 = -1LL;
int32_t x229 = INT32_MIN;
volatile int32_t t57 = 1;
volatile int64_t x239 = 520687447LL;
uint32_t x243 = 1353150U;
volatile int32_t t59 = 3086609;
uint16_t x245 = 8U;
int32_t x247 = -3401;
uint16_t x253 = 1867U;
volatile int32_t x257 = -1;
int16_t x260 = INT16_MAX;
int8_t x267 = INT8_MIN;
static int16_t x268 = INT16_MIN;
static int32_t x270 = -84;
int8_t x271 = INT8_MIN;
int32_t x283 = INT32_MIN;
int32_t t69 = 0;
static int16_t x286 = INT16_MAX;
static volatile uint64_t x287 = UINT64_MAX;
int64_t x291 = -33000378415136402LL;
static int16_t x292 = INT16_MIN;
volatile uint64_t x294 = UINT64_MAX;
int8_t x305 = -1;
static volatile int32_t t75 = 6;
volatile int32_t x315 = INT32_MAX;
volatile int32_t x317 = INT32_MAX;
volatile uint8_t x337 = 36U;
static int32_t x341 = INT32_MAX;
int32_t x342 = -1201215;
static uint16_t x344 = UINT16_MAX;
int8_t x355 = INT8_MIN;
volatile uint64_t x356 = 4685029436990LLU;
volatile int8_t x360 = INT8_MIN;
int64_t x361 = INT64_MIN;
int16_t x362 = 255;
volatile int32_t t88 = 949;
int64_t x374 = 2124096344478LL;
volatile int32_t t90 = 3863;
int16_t x382 = INT16_MAX;
uint8_t x388 = 88U;
volatile int32_t t97 = -4784382;
int64_t x408 = INT64_MIN;
uint16_t x409 = 1U;
int16_t x411 = INT16_MAX;


void f0(void) {
	int32_t x1 = -14843;
	uint8_t x3 = 2U;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -2807353;

	t0 = ((x1^(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	volatile int64_t x7 = 14LL;
	volatile int32_t x8 = -53710;
	int32_t t1 = 203;

	t1 = ((x5^(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 5715U;
	int64_t x10 = 8602524245434363LL;
	uint16_t x11 = 203U;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -3444202;

	t2 = ((x9^(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MIN;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = -1LL;
	volatile int32_t t3 = 339600674;

	t3 = ((x13^(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -35;
	int16_t x18 = 1197;
	int16_t x19 = 6;
	uint8_t x20 = 0U;
	volatile int32_t t4 = -2716193;

	t4 = ((x17^(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 117716;
	static volatile int32_t t5 = -149559;

	t5 = ((x21^(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static uint8_t x26 = 54U;
	static int8_t x27 = INT8_MAX;
	volatile int32_t t6 = 163758;

	t6 = ((x25^(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	int8_t x30 = 1;
	static int8_t x31 = -1;
	int16_t x32 = 821;
	volatile int32_t t7 = 3355;

	t7 = ((x29^(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	int8_t x35 = -2;
	int64_t x36 = -5377103139LL;

	t8 = ((x33^(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -1;
	static uint64_t x39 = 1369LLU;
	int32_t t9 = 104826;

	t9 = ((x37^(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 13U;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -329420846;

	t10 = ((x41^(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	int64_t x46 = 1840940811LL;
	static uint64_t x47 = UINT64_MAX;
	static int64_t x48 = -1LL;
	int32_t t11 = -197067410;

	t11 = ((x45^(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MIN;
	volatile int32_t t12 = -48860253;

	t12 = ((x49^(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static int8_t x54 = INT8_MIN;
	int32_t x55 = -1;
	int64_t x56 = -43108853303608LL;
	int32_t t13 = -226;

	t13 = ((x53^(x54%x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	int16_t x58 = 98;
	int64_t x60 = INT64_MAX;
	static volatile int32_t t14 = -14002;

	t14 = ((x57^(x58%x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 17U;
	int16_t x62 = INT16_MAX;
	int64_t x63 = 564693112LL;
	int64_t x64 = 118LL;
	static int32_t t15 = -26822;

	t15 = ((x61^(x62%x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -4049LL;
	volatile int8_t x66 = INT8_MAX;
	int16_t x67 = 1555;
	volatile int16_t x68 = INT16_MAX;

	t16 = ((x65^(x66%x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 7U;
	int8_t x70 = -1;
	uint8_t x71 = 14U;
	uint16_t x72 = 651U;
	static int32_t t17 = -6025914;

	t17 = ((x69^(x70%x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	static uint64_t x75 = 241LLU;
	int32_t x76 = -163930329;
	int32_t t18 = 693;

	t18 = ((x73^(x74%x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 1U;
	int8_t x78 = -25;
	int64_t x79 = INT64_MIN;
	static int8_t x80 = INT8_MIN;
	int32_t t19 = 1;

	t19 = ((x77^(x78%x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int16_t x83 = 8770;
	int64_t x84 = -1LL;

	t20 = ((x81^(x82%x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 5LL;
	volatile uint64_t x86 = 11884054477LLU;
	int64_t x87 = INT64_MIN;
	volatile uint8_t x88 = UINT8_MAX;

	t21 = ((x85^(x86%x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -101228403;

	t22 = ((x89^(x90%x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -1;
	volatile uint8_t x94 = 62U;
	static int32_t x95 = 12929;
	int32_t x96 = -1;
	int32_t t23 = -640606;

	t23 = ((x93^(x94%x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = UINT64_MAX;
	uint32_t x99 = 44U;
	uint32_t x100 = UINT32_MAX;

	t24 = ((x97^(x98%x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -747;
	int16_t x103 = -1;
	int32_t t25 = -751753690;

	t25 = ((x101^(x102%x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 50768U;
	int16_t x107 = -206;
	volatile int32_t t26 = -388503;

	t26 = ((x105^(x106%x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	uint64_t x111 = 4LLU;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 186;

	t27 = ((x109^(x110%x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 28029727912993LL;
	uint16_t x114 = UINT16_MAX;
	static uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 1;

	t28 = ((x113^(x114%x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -2780774;
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MAX;
	volatile uint32_t x120 = UINT32_MAX;
	volatile int32_t t29 = -1;

	t29 = ((x117^(x118%x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	static int64_t x122 = -22725779316LL;
	uint16_t x123 = 31228U;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = 4;

	t30 = ((x121^(x122%x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = INT64_MIN;
	int64_t x127 = 41985622174120LL;
	static volatile int8_t x128 = -1;
	int32_t t31 = -510137;

	t31 = ((x125^(x126%x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1070U;
	volatile int8_t x130 = -29;
	static int32_t x131 = INT32_MIN;
	volatile int64_t x132 = -3659442272LL;
	int32_t t32 = 353470;

	t32 = ((x129^(x130%x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = INT64_MAX;
	int16_t x135 = -1;
	int64_t x136 = INT64_MIN;
	int32_t t33 = -29520239;

	t33 = ((x133^(x134%x135))==x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	uint16_t x138 = 25399U;
	volatile int64_t x139 = INT64_MIN;
	uint32_t x140 = 178787265U;
	int32_t t34 = 52247686;

	t34 = ((x137^(x138%x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 782U;
	uint64_t x142 = 141339745136LLU;
	int8_t x144 = -1;
	volatile int32_t t35 = 246517;

	t35 = ((x141^(x142%x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = 0LLU;
	uint16_t x147 = 12U;
	uint16_t x148 = 104U;
	volatile int32_t t36 = -393122;

	t36 = ((x145^(x146%x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t37 = -6604;

	t37 = ((x149^(x150%x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -2;
	uint64_t x154 = 3200687899695324LLU;
	static uint64_t x155 = UINT64_MAX;
	static volatile int32_t t38 = -1;

	t38 = ((x153^(x154%x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	uint32_t x158 = UINT32_MAX;
	int32_t x160 = -1;
	volatile int32_t t39 = 96701;

	t39 = ((x157^(x158%x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = 13399U;
	static volatile int64_t x162 = -1LL;
	int64_t x163 = INT64_MIN;
	int64_t x164 = -1LL;
	static int32_t t40 = -262;

	t40 = ((x161^(x162%x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x167 = -1LL;
	int32_t t41 = 179931114;

	t41 = ((x165^(x166%x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = 2102642695U;
	int8_t x171 = -1;
	int16_t x172 = INT16_MIN;
	int32_t t42 = -225666;

	t42 = ((x169^(x170%x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	int32_t t43 = 0;

	t43 = ((x173^(x174%x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	uint8_t x179 = 1U;
	int32_t x180 = -22865;

	t44 = ((x177^(x178%x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	volatile int64_t x182 = INT64_MAX;
	static int64_t x183 = INT64_MIN;
	int32_t t45 = -431408784;

	t45 = ((x181^(x182%x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = INT16_MIN;
	uint8_t x186 = 1U;
	uint64_t x187 = 5LLU;
	int64_t x188 = INT64_MIN;
	int32_t t46 = 3591;

	t46 = ((x185^(x186%x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 61;
	uint32_t x190 = 515434638U;
	static int32_t x191 = -1;
	volatile int64_t x192 = INT64_MAX;

	t47 = ((x189^(x190%x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -223205LL;
	volatile uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = -132;

	t48 = ((x193^(x194%x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	volatile int32_t x198 = -1;
	volatile int16_t x199 = INT16_MAX;
	uint32_t x200 = UINT32_MAX;

	t49 = ((x197^(x198%x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MAX;
	static volatile int16_t x206 = INT16_MAX;
	volatile int8_t x207 = -54;
	uint32_t x208 = 224U;
	volatile int32_t t50 = 15696;

	t50 = ((x205^(x206%x207))==x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x209 = 0U;
	int32_t x210 = INT32_MIN;
	int16_t x211 = -1;
	int32_t x212 = 29532;
	static int32_t t51 = 355331783;

	t51 = ((x209^(x210%x211))==x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x213 = 1U;
	static uint8_t x214 = 16U;
	static int32_t x215 = 1;
	int16_t x216 = INT16_MIN;
	int32_t t52 = 5274008;

	t52 = ((x213^(x214%x215))==x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x218 = INT16_MAX;
	int32_t x219 = INT32_MIN;
	int16_t x220 = 399;
	static int32_t t53 = -5;

	t53 = ((x217^(x218%x219))==x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MAX;
	int16_t x224 = INT16_MAX;
	volatile int32_t t54 = -5760;

	t54 = ((x221^(x222%x223))==x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int64_t x226 = 20776930LL;
	static int64_t x227 = -16857LL;
	static volatile int16_t x228 = INT16_MAX;
	volatile int32_t t55 = -185366963;

	t55 = ((x225^(x226%x227))==x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x230 = 1;
	int16_t x231 = -1;
	static uint64_t x232 = UINT64_MAX;
	int32_t t56 = 7896;

	t56 = ((x229^(x230%x231))==x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MIN;

	t57 = ((x233^(x234%x235))==x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x237 = INT64_MAX;
	int32_t x238 = -11499;
	int16_t x240 = INT16_MIN;
	int32_t t58 = -17746519;

	t58 = ((x237^(x238%x239))==x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = 0;
	int16_t x244 = -1;

	t59 = ((x241^(x242%x243))==x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x246 = 2U;
	volatile int8_t x248 = INT8_MAX;
	static int32_t t60 = -13432803;

	t60 = ((x245^(x246%x247))==x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -1;
	volatile int32_t x250 = INT32_MAX;
	int16_t x251 = INT16_MIN;
	uint16_t x252 = 66U;
	volatile int32_t t61 = 0;

	t61 = ((x249^(x250%x251))==x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x254 = UINT64_MAX;
	volatile int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MIN;
	int32_t t62 = 45677816;

	t62 = ((x253^(x254%x255))==x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x258 = INT32_MAX;
	uint16_t x259 = 1U;
	int32_t t63 = 0;

	t63 = ((x257^(x258%x259))==x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MAX;
	volatile uint32_t x262 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t64 = 1;

	t64 = ((x261^(x262%x263))==x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x265 = -536640;
	volatile int32_t x266 = INT32_MIN;
	int32_t t65 = 658318;

	t65 = ((x265^(x266%x267))==x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = INT64_MAX;
	uint16_t x272 = 4U;
	volatile int32_t t66 = 0;

	t66 = ((x269^(x270%x271))==x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -14651;
	static uint16_t x274 = 967U;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t x276 = INT64_MIN;
	static volatile int32_t t67 = 1;

	t67 = ((x273^(x274%x275))==x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -1;
	int64_t x278 = INT64_MAX;
	static int16_t x279 = INT16_MIN;
	int64_t x280 = INT64_MIN;
	int32_t t68 = 964;

	t68 = ((x277^(x278%x279))==x280);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = UINT32_MAX;
	static volatile uint64_t x282 = 1718014754670301LLU;
	uint8_t x284 = 4U;

	t69 = ((x281^(x282%x283))==x284);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 895556587074021LLU;
	static int16_t x288 = -1;
	volatile int32_t t70 = -1;

	t70 = ((x285^(x286%x287))==x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	uint16_t x290 = 3977U;
	static int32_t t71 = 558100;

	t71 = ((x289^(x290%x291))==x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = -1;
	int32_t x295 = -1;
	static volatile uint8_t x296 = 1U;
	int32_t t72 = -1923;

	t72 = ((x293^(x294%x295))==x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = INT64_MIN;
	static volatile int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	uint32_t x300 = 221451U;
	volatile int32_t t73 = 647557765;

	t73 = ((x297^(x298%x299))==x300);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = 2U;
	uint32_t x302 = 0U;
	int16_t x303 = -9553;
	static uint8_t x304 = 1U;
	int32_t t74 = 0;

	t74 = ((x301^(x302%x303))==x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x306 = UINT32_MAX;
	uint32_t x307 = UINT32_MAX;
	volatile uint64_t x308 = 8241034094214191287LLU;

	t75 = ((x305^(x306%x307))==x308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	static int64_t x310 = INT64_MAX;
	volatile uint32_t x311 = 1907581U;
	static uint64_t x312 = 898771901672746LLU;
	volatile int32_t t76 = 228;

	t76 = ((x309^(x310%x311))==x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MAX;
	volatile int8_t x314 = INT8_MIN;
	static uint8_t x316 = 1U;
	static volatile int32_t t77 = 64065154;

	t77 = ((x313^(x314%x315))==x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x318 = INT8_MIN;
	static int8_t x319 = INT8_MAX;
	static int64_t x320 = INT64_MAX;
	static volatile int32_t t78 = 0;

	t78 = ((x317^(x318%x319))==x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = 0;
	static uint16_t x326 = 121U;
	uint64_t x327 = 15018094044LLU;
	volatile int32_t x328 = 1088;
	volatile int32_t t79 = 498700;

	t79 = ((x325^(x326%x327))==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = UINT16_MAX;
	volatile int16_t x330 = INT16_MIN;
	uint8_t x331 = 30U;
	int64_t x332 = 450525LL;
	int32_t t80 = 1;

	t80 = ((x329^(x330%x331))==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x338 = INT8_MIN;
	uint32_t x339 = UINT32_MAX;
	volatile int16_t x340 = -1;
	volatile int32_t t81 = -114756915;

	t81 = ((x337^(x338%x339))==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x343 = UINT8_MAX;
	volatile int32_t t82 = 170906;

	t82 = ((x341^(x342%x343))==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = 409903U;
	static int64_t x346 = INT64_MAX;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -1LL;
	int32_t t83 = 1;

	t83 = ((x345^(x346%x347))==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x349 = 10868944127LL;
	int8_t x350 = 1;
	int64_t x351 = INT64_MAX;
	int64_t x352 = 228639LL;
	volatile int32_t t84 = -1080445;

	t84 = ((x349^(x350%x351))==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x354 = 54U;
	int32_t t85 = 12046;

	t85 = ((x353^(x354%x355))==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x357 = 1U;
	int16_t x358 = INT16_MIN;
	int8_t x359 = -1;
	volatile int32_t t86 = 13101815;

	t86 = ((x357^(x358%x359))==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x363 = 13;
	volatile uint8_t x364 = 0U;
	volatile int32_t t87 = -218770756;

	t87 = ((x361^(x362%x363))==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x365 = 1049647912047670LLU;
	static int8_t x366 = -1;
	int8_t x367 = INT8_MIN;
	static uint16_t x368 = 7U;

	t88 = ((x365^(x366%x367))==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	uint8_t x371 = 88U;
	static int32_t x372 = INT32_MIN;
	volatile int32_t t89 = 12756;

	t89 = ((x369^(x370%x371))==x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	volatile int8_t x376 = INT8_MAX;

	t90 = ((x373^(x374%x375))==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = INT16_MAX;
	static uint32_t x378 = UINT32_MAX;
	static volatile uint16_t x379 = 395U;
	static uint64_t x380 = 178LLU;
	int32_t t91 = 0;

	t91 = ((x377^(x378%x379))==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = 0;
	int16_t x383 = INT16_MAX;
	uint64_t x384 = 19LLU;
	static int32_t t92 = 6536332;

	t92 = ((x381^(x382%x383))==x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	volatile int32_t x386 = INT32_MAX;
	int64_t x387 = 12284989LL;
	int32_t t93 = -1474847;

	t93 = ((x385^(x386%x387))==x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x389 = UINT16_MAX;
	int8_t x390 = -1;
	int16_t x391 = INT16_MAX;
	uint8_t x392 = UINT8_MAX;
	int32_t t94 = 276926;

	t94 = ((x389^(x390%x391))==x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x393 = 0;
	uint16_t x394 = 839U;
	uint16_t x395 = 4628U;
	int8_t x396 = INT8_MAX;
	volatile int32_t t95 = -111;

	t95 = ((x393^(x394%x395))==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MAX;
	uint16_t x399 = 10888U;
	int16_t x400 = INT16_MIN;
	volatile int32_t t96 = 12804520;

	t96 = ((x397^(x398%x399))==x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 60U;
	uint64_t x402 = UINT64_MAX;
	uint32_t x403 = 396U;
	int8_t x404 = 0;

	t97 = ((x401^(x402%x403))==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 144904LLU;
	uint8_t x406 = 17U;
	volatile int8_t x407 = -2;
	int32_t t98 = 0;

	t98 = ((x405^(x406%x407))==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x410 = -1LL;
	uint8_t x412 = 1U;
	volatile int32_t t99 = -1123;

	t99 = ((x409^(x410%x411))==x412);

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

