#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x13 = INT8_MIN;
volatile int8_t x16 = -1;
int32_t t3 = 581318;
int8_t x19 = INT8_MAX;
static int32_t x23 = -932;
int8_t x24 = INT8_MIN;
int16_t x28 = -1;
int32_t t7 = -1107497;
uint8_t x41 = 14U;
int32_t x47 = 55319;
int64_t x53 = 2131552031542711LL;
static int16_t x57 = -1;
volatile int32_t t14 = 325;
int8_t x64 = 9;
int8_t x66 = -1;
int64_t x71 = -1LL;
int8_t x74 = INT8_MAX;
static uint8_t x75 = 99U;
int32_t t18 = -52433;
int32_t x83 = -1;
volatile int16_t x88 = INT16_MIN;
int16_t x91 = 2;
volatile int64_t x95 = 266LL;
volatile int32_t t25 = 3949;
volatile int32_t t26 = 12;
static uint32_t x109 = UINT32_MAX;
uint16_t x110 = 3823U;
int32_t x121 = INT32_MIN;
volatile int16_t x123 = -1;
int32_t x124 = INT32_MIN;
int16_t x129 = -359;
int32_t t32 = -159059394;
uint16_t x133 = 166U;
uint16_t x138 = 3U;
uint64_t x143 = UINT64_MAX;
int64_t x148 = 37238305260820722LL;
int16_t x153 = -521;
int16_t x159 = -302;
static uint8_t x162 = 63U;
static int32_t x165 = -1;
int32_t x167 = INT32_MIN;
int16_t x169 = -1;
volatile int32_t t42 = -2;
static int16_t x176 = INT16_MIN;
int32_t t44 = 26588303;
static int16_t x194 = -13153;
volatile int32_t t49 = 2607;
int64_t x211 = INT64_MAX;
uint16_t x217 = UINT16_MAX;
int32_t x218 = -2373043;
int32_t x222 = INT32_MAX;
int64_t x243 = 1398167097041LL;
volatile int8_t x245 = INT8_MIN;
int64_t x249 = INT64_MIN;
int64_t x254 = -1LL;
static int32_t x256 = INT32_MIN;
int16_t x259 = INT16_MIN;
volatile int64_t x262 = INT64_MIN;
volatile int32_t t65 = -159122;
int64_t x268 = -1LL;
int8_t x270 = -8;
static volatile int32_t t67 = -2456589;
volatile int8_t x273 = 0;
int64_t x275 = -6483772714045255LL;
uint64_t x289 = 2LLU;
int32_t x290 = INT32_MIN;
int32_t x296 = INT32_MIN;
uint32_t x300 = 1344716U;
volatile int32_t t75 = 144051763;
uint16_t x311 = 11200U;
uint16_t x312 = 468U;
int64_t x317 = 917596768LL;
int16_t x319 = INT16_MAX;
static uint32_t x326 = UINT32_MAX;
uint64_t x329 = 993685LLU;
volatile uint64_t x332 = 22510LLU;
int16_t x333 = 6331;
int64_t x335 = INT64_MAX;
uint8_t x339 = UINT8_MAX;
int32_t x351 = 3;
int8_t x354 = 2;
int32_t x357 = -1031050;
volatile int32_t t90 = -14493;
int8_t x368 = -6;
static int8_t x369 = INT8_MIN;
uint16_t x370 = UINT16_MAX;
int16_t x371 = -1;
int64_t x373 = INT64_MIN;
volatile int32_t x375 = INT32_MIN;
volatile int32_t t93 = -87720;
uint8_t x377 = 49U;
uint16_t x381 = 3643U;
static int64_t x382 = INT64_MIN;
uint64_t x395 = UINT64_MAX;
int32_t t98 = 124732;
int8_t x398 = -1;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	volatile uint32_t x2 = 13U;
	int8_t x3 = -1;
	static int32_t x4 = 3808;
	int32_t t0 = -52473977;

	t0 = (((x1|x2)&x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -23;
	volatile int16_t x6 = 8789;
	static int16_t x7 = -217;
	volatile int64_t x8 = INT64_MIN;
	static int32_t t1 = -15960876;

	t1 = (((x5|x6)&x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile uint32_t x10 = UINT32_MAX;
	int64_t x11 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 816;

	t2 = (((x9|x10)&x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = -1;
	volatile int8_t x15 = INT8_MIN;

	t3 = (((x13|x14)&x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	volatile int16_t x18 = 1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 1;

	t4 = (((x17|x18)&x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 23097LLU;
	static int16_t x22 = -7;
	int32_t t5 = 2586;

	t5 = (((x21|x22)&x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint32_t x26 = 2419159U;
	int8_t x27 = INT8_MAX;
	static int32_t t6 = -7558098;

	t6 = (((x25|x26)&x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 9036;
	int16_t x30 = INT16_MIN;
	static uint8_t x31 = UINT8_MAX;
	static int32_t x32 = INT32_MIN;

	t7 = (((x29|x30)&x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 1233;
	uint16_t x34 = 15955U;
	int32_t x35 = INT32_MIN;
	static uint32_t x36 = 293862U;
	static volatile int32_t t8 = 3;

	t8 = (((x33|x34)&x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = UINT8_MAX;
	uint32_t x38 = UINT32_MAX;
	volatile uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	static int32_t t9 = -50;

	t9 = (((x37|x38)&x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	volatile uint64_t x43 = 2755LLU;
	uint16_t x44 = 195U;
	volatile int32_t t10 = -1;

	t10 = (((x41|x42)&x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = 2267432798LL;
	volatile int32_t x48 = INT32_MAX;
	static volatile int32_t t11 = -393;

	t11 = (((x45|x46)&x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 0U;
	uint64_t x50 = 5193707589681LLU;
	int8_t x51 = -1;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -2794;

	t12 = (((x49|x50)&x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x54 = 372109;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = UINT64_MAX;
	int32_t t13 = -45813;

	t13 = (((x53|x54)&x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = 161;
	volatile uint32_t x59 = 53U;
	int64_t x60 = INT64_MIN;

	t14 = (((x57|x58)&x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile int8_t x62 = INT8_MIN;
	static volatile uint32_t x63 = UINT32_MAX;
	static volatile int32_t t15 = 1015561145;

	t15 = (((x61|x62)&x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint64_t x67 = UINT64_MAX;
	int64_t x68 = -1LL;
	int32_t t16 = 3956;

	t16 = (((x65|x66)&x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = 1LL;
	int64_t x72 = -15278437LL;
	volatile int32_t t17 = 19;

	t17 = (((x69|x70)&x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	int16_t x76 = INT16_MIN;

	t18 = (((x73|x74)&x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = 8760447;
	int32_t x79 = INT32_MIN;
	volatile int8_t x80 = -1;
	static volatile int32_t t19 = 672253;

	t19 = (((x77|x78)&x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 0U;
	uint64_t x82 = UINT64_MAX;
	static int64_t x84 = INT64_MAX;
	volatile int32_t t20 = -7062;

	t20 = (((x81|x82)&x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static uint16_t x86 = UINT16_MAX;
	int16_t x87 = 81;
	int32_t t21 = -278;

	t21 = (((x85|x86)&x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	uint32_t x90 = 585656U;
	uint8_t x92 = 1U;
	static volatile int32_t t22 = 330663;

	t22 = (((x89|x90)&x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = -1;
	volatile uint8_t x94 = 2U;
	int8_t x96 = 1;
	int32_t t23 = 57;

	t23 = (((x93|x94)&x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	volatile uint64_t x98 = 735376828LLU;
	int8_t x99 = INT8_MIN;
	int16_t x100 = -1;
	static volatile int32_t t24 = -5603160;

	t24 = (((x97|x98)&x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 63634503U;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = 46U;

	t25 = (((x101|x102)&x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = -338521880195675723LL;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = INT8_MIN;

	t26 = (((x105|x106)&x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x111 = 0;
	static uint8_t x112 = 5U;
	static volatile int32_t t27 = 140333;

	t27 = (((x109|x110)&x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	uint32_t x114 = 28891U;
	int32_t x115 = -6324;
	volatile int8_t x116 = INT8_MAX;
	static int32_t t28 = -69;

	t28 = (((x113|x114)&x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MIN;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = 1501287492629LL;
	volatile int32_t t29 = -4442681;

	t29 = (((x117|x118)&x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = -1;
	int32_t t30 = -1;

	t30 = (((x121|x122)&x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = INT64_MIN;
	int8_t x126 = -1;
	static uint32_t x127 = 55299749U;
	int32_t x128 = INT32_MAX;
	int32_t t31 = -2773;

	t31 = (((x125|x126)&x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	int16_t x132 = 3;

	t32 = (((x129|x130)&x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x134 = 0U;
	uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MAX;
	int32_t t33 = 2;

	t33 = (((x133|x134)&x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -1;
	int32_t x139 = INT32_MAX;
	static uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = -6;

	t34 = (((x137|x138)&x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -6513664LL;
	int8_t x142 = -1;
	volatile int64_t x144 = INT64_MIN;
	int32_t t35 = 0;

	t35 = (((x141|x142)&x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	static volatile uint8_t x146 = 3U;
	static int16_t x147 = -1;
	static int32_t t36 = -357;

	t36 = (((x145|x146)&x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 35U;
	int64_t x150 = INT64_MAX;
	static int32_t x151 = 0;
	int16_t x152 = -1;
	volatile int32_t t37 = -195458;

	t37 = (((x149|x150)&x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -1;
	uint64_t x155 = 116792LLU;
	static volatile int64_t x156 = 180315584570LL;
	int32_t t38 = -9;

	t38 = (((x153|x154)&x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = -5;
	int8_t x160 = -1;
	int32_t t39 = 610609;

	t39 = (((x157|x158)&x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -480;
	int8_t x163 = -1;
	uint8_t x164 = 30U;
	static volatile int32_t t40 = 30414944;

	t40 = (((x161|x162)&x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x166 = -1LL;
	static int16_t x168 = INT16_MAX;
	volatile int32_t t41 = 7523;

	t41 = (((x165|x166)&x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = UINT64_MAX;
	uint16_t x171 = 0U;
	uint64_t x172 = 308652122335595788LLU;

	t42 = (((x169|x170)&x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 9U;
	static int8_t x174 = INT8_MIN;
	volatile int64_t x175 = INT64_MIN;
	volatile int32_t t43 = -168;

	t43 = (((x173|x174)&x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 8591039464039LLU;
	volatile int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MAX;
	volatile uint64_t x180 = 552987LLU;

	t44 = (((x177|x178)&x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = INT64_MIN;
	volatile int16_t x183 = INT16_MIN;
	volatile uint32_t x184 = 1213U;
	int32_t t45 = 0;

	t45 = (((x181|x182)&x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	uint32_t x187 = 195177911U;
	int8_t x188 = -1;
	int32_t t46 = 0;

	t46 = (((x185|x186)&x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static int8_t x190 = INT8_MAX;
	uint64_t x191 = 10156573LLU;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -1;

	t47 = (((x189|x190)&x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 108;
	volatile int8_t x195 = INT8_MIN;
	int32_t x196 = -50647;
	int32_t t48 = 12;

	t48 = (((x193|x194)&x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	volatile uint64_t x198 = 64LLU;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MIN;

	t49 = (((x197|x198)&x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 93U;
	uint64_t x202 = 1521421990LLU;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -1;
	static int32_t t50 = 18757;

	t50 = (((x201|x202)&x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	static uint8_t x206 = 15U;
	volatile int8_t x207 = INT8_MIN;
	static int64_t x208 = INT64_MAX;
	int32_t t51 = 1162776;

	t51 = (((x205|x206)&x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	volatile int8_t x210 = 9;
	int16_t x212 = INT16_MAX;
	volatile int32_t t52 = -109593352;

	t52 = (((x209|x210)&x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	uint32_t x214 = 65U;
	static int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = -49246089;

	t53 = (((x213|x214)&x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x219 = -1;
	int32_t x220 = INT32_MAX;
	int32_t t54 = -51989323;

	t54 = (((x217|x218)&x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = INT32_MIN;
	int64_t x223 = INT64_MAX;
	static volatile int32_t x224 = -38181127;
	volatile int32_t t55 = 2048268;

	t55 = (((x221|x222)&x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	int16_t x226 = INT16_MAX;
	volatile int16_t x227 = -1;
	int32_t x228 = INT32_MIN;
	static int32_t t56 = 26;

	t56 = (((x225|x226)&x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	volatile int8_t x230 = INT8_MAX;
	volatile uint16_t x231 = UINT16_MAX;
	int16_t x232 = 315;
	volatile int32_t t57 = -1;

	t57 = (((x229|x230)&x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 6U;
	int64_t x234 = -1LL;
	uint8_t x235 = 70U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t58 = 0;

	t58 = (((x233|x234)&x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = 679087826;
	int32_t x238 = -1;
	uint8_t x239 = 3U;
	static int64_t x240 = INT64_MIN;
	int32_t t59 = 610301;

	t59 = (((x237|x238)&x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	static volatile int64_t x242 = -4374LL;
	int16_t x244 = INT16_MAX;
	volatile int32_t t60 = -1;

	t60 = (((x241|x242)&x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x246 = UINT16_MAX;
	int32_t x247 = -1;
	volatile int64_t x248 = INT64_MAX;
	int32_t t61 = 11432;

	t61 = (((x245|x246)&x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 825LLU;
	static int16_t x251 = 0;
	static uint8_t x252 = 1U;
	int32_t t62 = -1;

	t62 = (((x249|x250)&x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	static volatile int32_t t63 = -150879396;

	t63 = (((x253|x254)&x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	static int8_t x258 = 3;
	int8_t x260 = -1;
	int32_t t64 = 49270810;

	t64 = (((x257|x258)&x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	int32_t x264 = -1;

	t65 = (((x261|x262)&x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	uint16_t x266 = 1429U;
	int32_t x267 = -242547017;
	volatile int32_t t66 = 222;

	t66 = (((x265|x266)&x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int32_t x271 = -9;
	volatile int8_t x272 = INT8_MIN;

	t67 = (((x269|x270)&x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = 3989U;
	int32_t x276 = -32533075;
	int32_t t68 = -520;

	t68 = (((x273|x274)&x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 233141849717622272LLU;
	int8_t x278 = 1;
	static int16_t x279 = INT16_MAX;
	int32_t x280 = -12394;
	int32_t t69 = 23;

	t69 = (((x277|x278)&x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = -23655941303LL;
	uint64_t x282 = 7LLU;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;
	int32_t t70 = 661873239;

	t70 = (((x281|x282)&x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int32_t x286 = INT32_MIN;
	int64_t x287 = -1LL;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 11607;

	t71 = (((x285|x286)&x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x291 = INT32_MAX;
	static uint16_t x292 = UINT16_MAX;
	int32_t t72 = -2055203;

	t72 = (((x289|x290)&x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = -59;
	uint8_t x294 = UINT8_MAX;
	static int16_t x295 = INT16_MIN;
	volatile int32_t t73 = 0;

	t73 = (((x293|x294)&x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x298 = -1LL;
	int32_t x299 = -5104731;
	int32_t t74 = 5063;

	t74 = (((x297|x298)&x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	static uint32_t x302 = UINT32_MAX;
	static uint64_t x303 = 244892435LLU;
	volatile uint64_t x304 = 10269LLU;

	t75 = (((x301|x302)&x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 1647315143U;
	int32_t x306 = -1;
	int64_t x307 = INT64_MAX;
	volatile uint8_t x308 = 71U;
	volatile int32_t t76 = -40440;

	t76 = (((x305|x306)&x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	static int32_t x310 = INT32_MIN;
	volatile int32_t t77 = 0;

	t77 = (((x309|x310)&x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1659096799467LL;
	int8_t x314 = INT8_MIN;
	static uint16_t x315 = UINT16_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 51676903;

	t78 = (((x313|x314)&x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MAX;
	int8_t x320 = -1;
	int32_t t79 = 818245;

	t79 = (((x317|x318)&x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 7;
	static int64_t x322 = INT64_MAX;
	volatile uint8_t x323 = 8U;
	uint32_t x324 = 1040836U;
	int32_t t80 = -7;

	t80 = (((x321|x322)&x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = INT64_MIN;
	static volatile int32_t t81 = 2524;

	t81 = (((x325|x326)&x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = 234;
	int8_t x331 = 1;
	int32_t t82 = 0;

	t82 = (((x329|x330)&x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = 2636262;
	volatile uint8_t x336 = 0U;
	static volatile int32_t t83 = -1;

	t83 = (((x333|x334)&x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	uint32_t x338 = 1730495U;
	static int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 1418200;

	t84 = (((x337|x338)&x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MIN;
	int32_t t85 = -168;

	t85 = (((x341|x342)&x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	volatile int8_t x346 = -1;
	volatile int64_t x347 = -1036759368202497LL;
	uint8_t x348 = UINT8_MAX;
	int32_t t86 = -9;

	t86 = (((x345|x346)&x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = 1U;
	static int32_t x350 = 118867309;
	int8_t x352 = 6;
	static volatile int32_t t87 = -953;

	t87 = (((x349|x350)&x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	static volatile int32_t x355 = -31945908;
	uint16_t x356 = 980U;
	int32_t t88 = -15257727;

	t88 = (((x353|x354)&x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MIN;
	uint32_t x359 = UINT32_MAX;
	uint16_t x360 = 34U;
	static volatile int32_t t89 = -146951318;

	t89 = (((x357|x358)&x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	volatile int32_t x362 = INT32_MIN;
	int8_t x363 = -1;
	static int32_t x364 = 6050;

	t90 = (((x361|x362)&x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	static int64_t x366 = -1LL;
	int32_t x367 = 4076;
	volatile int32_t t91 = 25072;

	t91 = (((x365|x366)&x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x372 = 6824;
	int32_t t92 = 10838;

	t92 = (((x369|x370)&x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MAX;
	uint64_t x376 = 23736870LLU;

	t93 = (((x373|x374)&x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = -86482448347070136LL;
	int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 1636136;

	t94 = (((x377|x378)&x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x383 = 7U;
	uint8_t x384 = 2U;
	int32_t t95 = -475911062;

	t95 = (((x381|x382)&x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 22U;
	static int8_t x386 = 1;
	uint16_t x387 = UINT16_MAX;
	uint32_t x388 = 31U;
	volatile int32_t t96 = 1434;

	t96 = (((x385|x386)&x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 14LLU;
	volatile int16_t x390 = 9;
	uint32_t x391 = UINT32_MAX;
	volatile int8_t x392 = INT8_MIN;
	int32_t t97 = 22398;

	t97 = (((x389|x390)&x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x393 = INT64_MIN;
	uint64_t x394 = 2666346604736LLU;
	int64_t x396 = 812693114693291LL;

	t98 = (((x393|x394)&x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	static uint16_t x399 = 12U;
	static volatile int64_t x400 = INT64_MAX;
	int32_t t99 = 1423194;

	t99 = (((x397|x398)&x399)<x400);

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

