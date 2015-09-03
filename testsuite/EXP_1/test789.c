#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = INT16_MIN;
volatile uint64_t x13 = 32026822320LLU;
static int16_t x15 = INT16_MIN;
static volatile int32_t x18 = 256249707;
uint8_t x22 = 6U;
int32_t t5 = 491119;
static int64_t x29 = INT64_MIN;
uint32_t x31 = 15011035U;
int64_t x32 = 3372457583364087353LL;
uint64_t x34 = UINT64_MAX;
int8_t x36 = INT8_MIN;
int32_t x37 = INT32_MIN;
volatile uint8_t x42 = 1U;
static volatile int32_t x43 = INT32_MAX;
volatile uint64_t x44 = UINT64_MAX;
volatile uint16_t x55 = 1198U;
volatile int8_t x58 = -1;
volatile int32_t t14 = -9;
int64_t x62 = INT64_MIN;
uint64_t x64 = UINT64_MAX;
int32_t t16 = -183151;
volatile int32_t t17 = 449679;
volatile uint16_t x74 = UINT16_MAX;
int32_t t18 = 16;
uint32_t x84 = 3562582U;
uint32_t x88 = UINT32_MAX;
volatile int32_t t22 = 16141;
int8_t x99 = -1;
int8_t x100 = INT8_MIN;
uint64_t x105 = 7845514720LLU;
int16_t x106 = 7966;
static volatile int32_t t26 = 346204;
uint32_t x111 = 7U;
volatile int8_t x113 = INT8_MIN;
static int64_t x114 = INT64_MIN;
int32_t t28 = -3488009;
uint64_t x123 = 2LLU;
uint16_t x132 = 13U;
volatile int32_t t34 = 7550312;
int16_t x143 = -433;
static volatile int32_t t35 = 3;
uint64_t x147 = 33173007LLU;
int64_t x157 = INT64_MIN;
int64_t x160 = INT64_MAX;
uint64_t x164 = 245137477397191LLU;
int32_t x165 = INT32_MIN;
volatile uint8_t x167 = 3U;
int8_t x169 = INT8_MAX;
volatile uint32_t x176 = UINT32_MAX;
int16_t x178 = INT16_MIN;
uint32_t x183 = 124U;
volatile int32_t t46 = 16;
static int64_t x190 = INT64_MIN;
int64_t x194 = INT64_MAX;
int8_t x196 = 1;
volatile uint8_t x199 = 26U;
volatile int32_t t49 = 4990403;
uint64_t x201 = 13365854490410696LLU;
volatile uint16_t x205 = 31U;
static int64_t x207 = 9264597855537048LL;
int16_t x216 = -12;
static uint64_t x217 = 55128586777LLU;
int64_t x219 = INT64_MAX;
int32_t t55 = 99894;
volatile int8_t x229 = 24;
uint8_t x232 = 108U;
int32_t t57 = 619957447;
int32_t x234 = INT32_MIN;
volatile uint16_t x235 = UINT16_MAX;
volatile uint32_t x237 = 1795640U;
static uint16_t x239 = 1U;
int32_t x240 = INT32_MAX;
uint16_t x243 = 17225U;
static int8_t x245 = INT8_MAX;
static uint16_t x256 = UINT16_MAX;
volatile int32_t t63 = -7366192;
static volatile int32_t t64 = -57599053;
uint16_t x262 = UINT16_MAX;
volatile int32_t t65 = 687;
volatile int16_t x268 = INT16_MAX;
uint64_t x271 = 153312LLU;
volatile uint16_t x272 = 341U;
volatile int8_t x281 = INT8_MIN;
int64_t x284 = INT64_MIN;
static int32_t t70 = -3;
int32_t x289 = -1;
int16_t x291 = INT16_MIN;
static int16_t x296 = INT16_MIN;
int64_t x300 = INT64_MAX;
static int8_t x308 = INT8_MIN;
static uint16_t x310 = 363U;
volatile int32_t x314 = INT32_MAX;
uint8_t x316 = 0U;
uint64_t x321 = 8035927300217667LLU;
int8_t x325 = INT8_MIN;
uint8_t x326 = 127U;
volatile int32_t t81 = 931708584;
int32_t x331 = INT32_MIN;
int32_t t82 = 804;
uint16_t x336 = 125U;
int64_t x337 = INT64_MAX;
static int32_t t85 = -145806921;
static volatile int32_t t86 = 15;
uint32_t x354 = 587472594U;
volatile int32_t t88 = 109412;
static volatile uint64_t x358 = UINT64_MAX;
volatile int64_t x360 = -53636115091226042LL;
uint8_t x372 = UINT8_MAX;
int32_t t93 = -14882;
uint8_t x380 = 1U;
int32_t x382 = -1;
int8_t x395 = INT8_MIN;
int32_t t98 = 392869364;


void f0(void) {
	volatile uint32_t x1 = 611146861U;
	uint16_t x2 = 2500U;
	int16_t x3 = -187;
	int32_t t0 = 123146906;

	t0 = (((x1%x2)<x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2455405U;
	int8_t x6 = INT8_MAX;
	static volatile int8_t x7 = INT8_MIN;
	uint64_t x8 = 19696029129LLU;
	volatile int32_t t1 = 96834943;

	t1 = (((x5%x6)<x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MAX;
	int32_t x12 = 999;
	static int32_t t2 = -7;

	t2 = (((x9%x10)<x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	uint64_t x16 = 2431909354338LLU;
	int32_t t3 = 3122;

	t3 = (((x13%x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x19 = INT16_MIN;
	static uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -6654267;

	t4 = (((x17%x18)<x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile int32_t x23 = INT32_MIN;
	uint64_t x24 = 3128007LLU;

	t5 = (((x21%x22)<x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static uint16_t x26 = 1U;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = 43670;

	t6 = (((x25%x26)<x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x30 = UINT64_MAX;
	static int32_t t7 = -421;

	t7 = (((x29%x30)<x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -29330782132725LL;
	uint16_t x35 = UINT16_MAX;
	volatile int32_t t8 = -1313432;

	t8 = (((x33%x34)<x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = 1751893664LL;
	uint32_t x39 = 3U;
	volatile uint64_t x40 = 2027776LLU;
	static int32_t t9 = -878372;

	t9 = (((x37%x38)<x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	volatile int32_t t10 = -1;

	t10 = (((x41%x42)<x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MAX;
	int16_t x46 = INT16_MIN;
	int64_t x47 = -133964430555180LL;
	int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -15101812;

	t11 = (((x45%x46)<x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MAX;
	uint64_t x50 = 1666599398LLU;
	int16_t x51 = -1;
	int64_t x52 = -52213551474729LL;
	int32_t t12 = -1;

	t12 = (((x49%x50)<x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 53U;
	static volatile uint16_t x54 = UINT16_MAX;
	volatile int16_t x56 = INT16_MAX;
	volatile int32_t t13 = 533493539;

	t13 = (((x53%x54)<x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 57U;
	int32_t x59 = -1;
	int64_t x60 = 577637LL;

	t14 = (((x57%x58)<x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	volatile int32_t x63 = INT32_MIN;
	static volatile int32_t t15 = 4822460;

	t15 = (((x61%x62)<x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1046678;
	uint64_t x66 = 54LLU;
	volatile uint32_t x67 = UINT32_MAX;
	int64_t x68 = -5796594756LL;

	t16 = (((x65%x66)<x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	int32_t x70 = INT32_MIN;
	static int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MAX;

	t17 = (((x69%x70)<x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 4042U;
	volatile uint32_t x75 = 1616U;
	int32_t x76 = -1;

	t18 = (((x73%x74)<x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MAX;
	int16_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int32_t t19 = -940767;

	t19 = (((x77%x78)<x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int32_t x82 = 1006536025;
	int8_t x83 = INT8_MAX;
	int32_t t20 = -45652702;

	t20 = (((x81%x82)<x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 4177838218LLU;
	uint8_t x86 = 29U;
	volatile uint64_t x87 = UINT64_MAX;
	volatile int32_t t21 = 84857698;

	t21 = (((x85%x86)<x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	volatile int8_t x90 = INT8_MAX;
	static int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MIN;

	t22 = (((x89%x90)<x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int8_t x94 = -1;
	volatile int8_t x95 = INT8_MAX;
	static int8_t x96 = 0;
	volatile int32_t t23 = -38393366;

	t23 = (((x93%x94)<x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 9;
	int64_t x98 = INT64_MIN;
	volatile int32_t t24 = -49;

	t24 = (((x97%x98)<x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 1306U;
	int16_t x104 = -1;
	int32_t t25 = -15091255;

	t25 = (((x101%x102)<x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x107 = INT64_MIN;
	int8_t x108 = -1;

	t26 = (((x105%x106)<x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = -1;
	static int16_t x110 = -21;
	volatile int16_t x112 = INT16_MAX;
	int32_t t27 = 4874496;

	t27 = (((x109%x110)<x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x115 = -128484312900652LL;
	int8_t x116 = INT8_MAX;

	t28 = (((x113%x114)<x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MAX;
	volatile uint16_t x118 = 873U;
	int16_t x119 = -13;
	int16_t x120 = -1;
	volatile int32_t t29 = 0;

	t29 = (((x117%x118)<x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = UINT64_MAX;
	int16_t x122 = INT16_MIN;
	static uint64_t x124 = UINT64_MAX;
	volatile int32_t t30 = 1863518;

	t30 = (((x121%x122)<x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int16_t x126 = -132;
	static int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MIN;
	int32_t t31 = 1;

	t31 = (((x125%x126)<x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static int64_t x130 = -593414723LL;
	int16_t x131 = INT16_MAX;
	volatile int32_t t32 = -134123800;

	t32 = (((x129%x130)<x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MIN;
	int16_t x134 = 3191;
	int64_t x135 = INT64_MIN;
	static int8_t x136 = INT8_MIN;
	int32_t t33 = 159676;

	t33 = (((x133%x134)<x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 304LL;
	static int32_t x138 = 190157485;
	int64_t x139 = -1LL;
	static uint8_t x140 = 64U;

	t34 = (((x137%x138)<x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 57;
	uint64_t x142 = 4183613LLU;
	uint16_t x144 = 5924U;

	t35 = (((x141%x142)<x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MIN;
	int64_t x146 = -2LL;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -14;

	t36 = (((x145%x146)<x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	static uint16_t x150 = 3U;
	int32_t x151 = INT32_MAX;
	volatile int32_t x152 = INT32_MAX;
	int32_t t37 = -3203;

	t37 = (((x149%x150)<x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1245625475028LL;
	static int32_t x154 = INT32_MAX;
	volatile int32_t x155 = INT32_MIN;
	uint8_t x156 = 3U;
	volatile int32_t t38 = 31092;

	t38 = (((x153%x154)<x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x158 = INT64_MAX;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t t39 = -463;

	t39 = (((x157%x158)<x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -10;
	volatile uint8_t x162 = UINT8_MAX;
	int64_t x163 = -1LL;
	int32_t t40 = 1009850;

	t40 = (((x161%x162)<x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x166 = INT8_MAX;
	int8_t x168 = -1;
	static int32_t t41 = -3;

	t41 = (((x165%x166)<x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	volatile int8_t x171 = INT8_MIN;
	volatile int64_t x172 = 834741LL;
	int32_t t42 = 658281906;

	t42 = (((x169%x170)<x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int64_t x174 = -1LL;
	uint32_t x175 = 248550117U;
	volatile int32_t t43 = 27883860;

	t43 = (((x173%x174)<x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = UINT16_MAX;
	int16_t x179 = -1;
	volatile uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = -25571;

	t44 = (((x177%x178)<x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 95;
	int8_t x182 = 2;
	uint8_t x184 = 100U;
	int32_t t45 = -1555;

	t45 = (((x181%x182)<x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	static uint16_t x186 = UINT16_MAX;
	static int8_t x187 = 51;
	int8_t x188 = 62;

	t46 = (((x185%x186)<x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint64_t x191 = 195784201210167LLU;
	volatile uint32_t x192 = 10853825U;
	int32_t t47 = -3304292;

	t47 = (((x189%x190)<x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 1;
	static volatile int8_t x195 = INT8_MIN;
	int32_t t48 = -823;

	t48 = (((x193%x194)<x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -10;
	static int8_t x198 = 2;
	uint8_t x200 = 8U;

	t49 = (((x197%x198)<x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x202 = 3535U;
	int16_t x203 = INT16_MIN;
	static uint8_t x204 = 10U;
	volatile int32_t t50 = 9014;

	t50 = (((x201%x202)<x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	uint32_t x208 = 15241486U;
	static volatile int32_t t51 = 1420724;

	t51 = (((x205%x206)<x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -12;
	uint32_t x210 = 32677687U;
	volatile int16_t x211 = 0;
	int8_t x212 = INT8_MIN;
	volatile int32_t t52 = 1892;

	t52 = (((x209%x210)<x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -186;
	int16_t x214 = INT16_MAX;
	volatile int64_t x215 = 20425620LL;
	volatile int32_t t53 = -1658;

	t53 = (((x213%x214)<x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x218 = 2239U;
	int8_t x220 = 2;
	int32_t t54 = 1;

	t54 = (((x217%x218)<x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	int8_t x222 = INT8_MAX;
	static volatile int16_t x223 = INT16_MIN;
	static uint64_t x224 = 30302938391150LLU;

	t55 = (((x221%x222)<x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	uint8_t x226 = 22U;
	int64_t x227 = INT64_MIN;
	int64_t x228 = -28932273077LL;
	volatile int32_t t56 = -2;

	t56 = (((x225%x226)<x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 635624907LLU;
	static uint16_t x231 = 882U;

	t57 = (((x229%x230)<x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x233 = -1;
	static int16_t x236 = 70;
	int32_t t58 = -23;

	t58 = (((x233%x234)<x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x238 = 727U;
	volatile int32_t t59 = -1068;

	t59 = (((x237%x238)<x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = INT64_MIN;
	static uint64_t x244 = UINT64_MAX;
	static int32_t t60 = 222550824;

	t60 = (((x241%x242)<x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = 88U;
	int16_t x247 = 115;
	volatile int8_t x248 = INT8_MIN;
	int32_t t61 = -729;

	t61 = (((x245%x246)<x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 113U;
	uint16_t x250 = UINT16_MAX;
	static int8_t x251 = -9;
	volatile uint16_t x252 = 6U;
	int32_t t62 = -227866;

	t62 = (((x249%x250)<x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 4;
	uint32_t x254 = 63U;
	static int8_t x255 = INT8_MIN;

	t63 = (((x253%x254)<x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = 10;
	volatile int64_t x258 = INT64_MIN;
	int8_t x259 = INT8_MIN;
	volatile uint64_t x260 = 7LLU;

	t64 = (((x257%x258)<x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = -53;
	volatile int64_t x263 = 0LL;
	uint8_t x264 = 2U;

	t65 = (((x261%x262)<x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 1U;
	int32_t t66 = 57173;

	t66 = (((x265%x266)<x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	static uint16_t x270 = 9596U;
	volatile int32_t t67 = -1004305432;

	t67 = (((x269%x270)<x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 238;
	int16_t x274 = -1;
	uint16_t x275 = 0U;
	uint32_t x276 = 28U;
	int32_t t68 = 812297;

	t68 = (((x273%x274)<x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = 1;
	static int8_t x278 = -13;
	volatile int16_t x279 = -1;
	volatile int8_t x280 = 0;
	int32_t t69 = -2055518;

	t69 = (((x277%x278)<x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = -1;
	static int8_t x283 = -24;

	t70 = (((x281%x282)<x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	uint8_t x286 = 12U;
	int16_t x287 = -496;
	uint64_t x288 = 28167249LLU;
	volatile int32_t t71 = 1;

	t71 = (((x285%x286)<x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = 4;
	uint32_t x292 = 1806552844U;
	int32_t t72 = -1166063;

	t72 = (((x289%x290)<x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	volatile int32_t x294 = 6;
	uint16_t x295 = 408U;
	volatile int32_t t73 = 1166;

	t73 = (((x293%x294)<x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static int16_t x298 = 2;
	uint64_t x299 = 386595112LLU;
	volatile int32_t t74 = -19986384;

	t74 = (((x297%x298)<x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 863U;
	int32_t x302 = -1;
	int64_t x303 = 3063564386LL;
	volatile uint8_t x304 = UINT8_MAX;
	int32_t t75 = -1050;

	t75 = (((x301%x302)<x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	uint8_t x306 = UINT8_MAX;
	int64_t x307 = 2424581679043LL;
	int32_t t76 = -3160280;

	t76 = (((x305%x306)<x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile int8_t x311 = -17;
	volatile int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 39610;

	t77 = (((x309%x310)<x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 4U;
	volatile int64_t x315 = INT64_MIN;
	volatile int32_t t78 = 68517;

	t78 = (((x313%x314)<x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int32_t x318 = -17272;
	static int64_t x319 = 168358444621LL;
	static volatile int32_t x320 = INT32_MAX;
	volatile int32_t t79 = -36;

	t79 = (((x317%x318)<x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x322 = 9993864853916LLU;
	int8_t x323 = INT8_MIN;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 1465052;

	t80 = (((x321%x322)<x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x327 = 3625U;
	static int8_t x328 = INT8_MIN;

	t81 = (((x325%x326)<x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -2494767020569LL;
	int32_t x330 = INT32_MIN;
	volatile uint16_t x332 = 12U;

	t82 = (((x329%x330)<x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = -1767;
	static int32_t x334 = INT32_MIN;
	uint8_t x335 = 25U;
	int32_t t83 = 3046448;

	t83 = (((x333%x334)<x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	static int32_t x339 = INT32_MIN;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 1;

	t84 = (((x337%x338)<x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -7998;
	int32_t x342 = INT32_MAX;
	int64_t x343 = -1LL;
	uint16_t x344 = 6U;

	t85 = (((x341%x342)<x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = UINT16_MAX;
	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 248U;
	int64_t x348 = -109627LL;

	t86 = (((x345%x346)<x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 5992U;
	static int32_t x350 = INT32_MAX;
	uint32_t x351 = 320432U;
	uint16_t x352 = 5U;
	int32_t t87 = -121;

	t87 = (((x349%x350)<x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int16_t x355 = INT16_MAX;
	int32_t x356 = INT32_MIN;

	t88 = (((x353%x354)<x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int32_t x359 = INT32_MIN;
	volatile int32_t t89 = 64392;

	t89 = (((x357%x358)<x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 348LLU;
	int16_t x362 = 57;
	static uint32_t x363 = 91U;
	volatile uint32_t x364 = UINT32_MAX;
	int32_t t90 = 10478304;

	t90 = (((x361%x362)<x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint16_t x366 = 8U;
	volatile uint8_t x367 = UINT8_MAX;
	int16_t x368 = INT16_MIN;
	int32_t t91 = 247205;

	t91 = (((x365%x366)<x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int8_t x370 = 1;
	int8_t x371 = 1;
	volatile int32_t t92 = -75;

	t92 = (((x369%x370)<x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	int32_t x375 = INT32_MAX;
	uint8_t x376 = UINT8_MAX;

	t93 = (((x373%x374)<x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 10U;
	int16_t x378 = -4;
	static volatile uint64_t x379 = UINT64_MAX;
	static int32_t t94 = -38552775;

	t94 = (((x377%x378)<x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -7;
	int64_t x383 = -1LL;
	int64_t x384 = -1LL;
	int32_t t95 = 29;

	t95 = (((x381%x382)<x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	uint64_t x386 = 65467LLU;
	int16_t x387 = -1;
	int32_t x388 = -930640356;
	volatile int32_t t96 = -280916;

	t96 = (((x385%x386)<x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	static uint64_t x390 = 29LLU;
	volatile int8_t x391 = INT8_MIN;
	int64_t x392 = 568355LL;
	volatile int32_t t97 = -4368392;

	t97 = (((x389%x390)<x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile int8_t x394 = INT8_MIN;
	int8_t x396 = INT8_MIN;

	t98 = (((x393%x394)<x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x397 = 611U;
	int8_t x398 = INT8_MIN;
	int64_t x399 = 2509106361151LL;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t99 = 347919349;

	t99 = (((x397%x398)<x399)<x400);

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

