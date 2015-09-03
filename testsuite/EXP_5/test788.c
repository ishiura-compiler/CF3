#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 58U;
uint32_t x2 = 114104U;
int8_t x7 = INT8_MIN;
static volatile uint32_t x11 = 180643U;
int32_t x14 = -46305165;
int8_t x15 = INT8_MAX;
static uint16_t x18 = UINT16_MAX;
int32_t t4 = 39;
uint32_t x31 = UINT32_MAX;
uint64_t x36 = 294421264886127LLU;
volatile uint64_t x39 = 1609160457LLU;
int8_t x44 = INT8_MIN;
static volatile int32_t t9 = -33609599;
int32_t x47 = INT32_MIN;
int64_t x49 = -32346765203LL;
uint8_t x71 = 6U;
static uint32_t x75 = 3U;
volatile uint32_t x81 = 757U;
int64_t x82 = 21465LL;
volatile uint32_t x87 = 13702U;
uint64_t x98 = 5501241281005LLU;
static int8_t x101 = INT8_MIN;
uint8_t x121 = UINT8_MAX;
int64_t x132 = INT64_MIN;
volatile uint16_t x134 = UINT16_MAX;
volatile uint32_t x136 = 8033484U;
int32_t t31 = -94;
volatile int8_t x141 = 1;
int8_t x149 = 1;
volatile int32_t x151 = 7179469;
uint8_t x157 = 1U;
volatile int8_t x163 = 1;
volatile int32_t t38 = -1;
volatile int32_t t39 = -67565464;
int64_t x172 = INT64_MIN;
uint64_t x174 = UINT64_MAX;
int32_t x180 = INT32_MIN;
static volatile uint16_t x181 = 2U;
int64_t x185 = INT64_MIN;
uint16_t x190 = 14U;
int32_t x198 = INT32_MIN;
volatile uint16_t x202 = UINT16_MAX;
int32_t x205 = -1;
static int32_t x207 = 1;
static uint8_t x208 = 2U;
uint64_t x215 = UINT64_MAX;
uint32_t x216 = 148U;
uint64_t x220 = 13780732895834LLU;
static int8_t x221 = -1;
uint16_t x225 = 17818U;
static int64_t x226 = 1844278LL;
int32_t x227 = -52280227;
volatile int32_t t55 = 963977210;
int64_t x233 = -1LL;
volatile int8_t x235 = -1;
uint32_t x241 = 17327U;
int32_t x244 = 5;
volatile uint64_t x249 = 68796499210736LLU;
static volatile int64_t x258 = -1LL;
static uint64_t x266 = 234115401549LLU;
volatile int32_t t64 = 1;
int64_t x269 = INT64_MIN;
int64_t x273 = -1LL;
uint8_t x276 = 59U;
volatile int32_t t66 = -4;
volatile int32_t x280 = 113;
static int32_t x282 = 2052;
volatile uint16_t x283 = 39U;
volatile int32_t t69 = -6996987;
static int16_t x291 = INT16_MAX;
int32_t t70 = -64011;
uint8_t x294 = UINT8_MAX;
volatile int8_t x304 = INT8_MAX;
int32_t x309 = INT32_MIN;
static int32_t x310 = INT32_MAX;
int8_t x311 = -1;
int32_t t75 = 814358;
int8_t x313 = -15;
int32_t t76 = -990;
int64_t x318 = -29485241LL;
volatile int32_t t77 = -1335;
volatile int32_t x324 = 66558755;
int16_t x325 = -1;
int64_t x333 = -121924LL;
static int16_t x334 = 16;
static int16_t x337 = INT16_MIN;
uint16_t x339 = 62U;
uint8_t x343 = 4U;
static int16_t x345 = -1;
uint8_t x352 = UINT8_MAX;
volatile int64_t x359 = -1LL;
int32_t x360 = -1;
uint8_t x361 = 3U;
int8_t x381 = 1;
static int8_t x383 = INT8_MIN;
uint16_t x384 = UINT16_MAX;
static int64_t x394 = -1LL;
int64_t x401 = INT64_MAX;
int8_t x407 = INT8_MAX;
int64_t x411 = INT64_MAX;
int8_t x413 = INT8_MIN;


void f0(void) {
	int16_t x3 = INT16_MAX;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 4;

	t0 = (x1==((x2%x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int16_t x6 = INT16_MIN;
	uint64_t x8 = 2525251611LLU;
	volatile int32_t t1 = 6198661;

	t1 = (x5==((x6%x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int8_t x10 = INT8_MAX;
	static int8_t x12 = -10;
	static volatile int32_t t2 = 994923;

	t2 = (x9==((x10%x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 20;

	t3 = (x13==((x14%x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static volatile uint64_t x19 = 5026306401LLU;
	uint32_t x20 = 4U;

	t4 = (x17==((x18%x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MAX;
	volatile uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MIN;
	static int32_t x24 = -7988581;
	int32_t t5 = 29248;

	t5 = (x21==((x22%x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = UINT8_MAX;
	uint32_t x30 = 2787180U;
	uint32_t x32 = 107845U;
	static volatile int32_t t6 = 1021;

	t6 = (x29==((x30%x31)<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x33 = 0U;
	static uint8_t x34 = 28U;
	int32_t x35 = INT32_MAX;
	int32_t t7 = 2298786;

	t7 = (x33==((x34%x35)<x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 3;
	static volatile uint32_t x38 = 97560U;
	int32_t x40 = 172302807;
	volatile int32_t t8 = -36018952;

	t8 = (x37==((x38%x39)<x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint8_t x42 = 7U;
	uint32_t x43 = 866071854U;

	t9 = (x41==((x42%x43)<x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = INT64_MAX;
	static int8_t x46 = -1;
	volatile int8_t x48 = -1;
	volatile int32_t t10 = 3814;

	t10 = (x45==((x46%x47)<x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	static int8_t x51 = INT8_MAX;
	int32_t x52 = INT32_MIN;
	volatile int32_t t11 = -48922676;

	t11 = (x49==((x50%x51)<x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = 9U;
	int16_t x54 = 12758;
	int16_t x55 = -29;
	static int8_t x56 = INT8_MIN;
	static volatile int32_t t12 = -113;

	t12 = (x53==((x54%x55)<x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x61 = UINT64_MAX;
	int32_t x62 = 2139259;
	static uint64_t x63 = 3705276320462653LLU;
	int32_t x64 = -5;
	int32_t t13 = -100;

	t13 = (x61==((x62%x63)<x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MAX;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MAX;
	uint64_t x68 = 2LLU;
	volatile int32_t t14 = 2384;

	t14 = (x65==((x66%x67)<x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = 31564196U;
	static int32_t x72 = INT32_MIN;
	int32_t t15 = 469;

	t15 = (x69==((x70%x71)<x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 1191930U;
	static int16_t x74 = 1;
	int8_t x76 = INT8_MIN;
	int32_t t16 = 1968;

	t16 = (x73==((x74%x75)<x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = INT32_MAX;
	static int64_t x79 = 1530445229284LL;
	static volatile int64_t x80 = INT64_MAX;
	int32_t t17 = -245385;

	t17 = (x77==((x78%x79)<x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x83 = -1;
	int64_t x84 = -1LL;
	int32_t t18 = -730192709;

	t18 = (x81==((x82%x83)<x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MIN;
	static int16_t x88 = INT16_MIN;
	int32_t t19 = 303;

	t19 = (x85==((x86%x87)<x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = 30016U;
	static volatile int64_t x90 = 100401114639362627LL;
	int64_t x91 = INT64_MIN;
	int64_t x92 = -1LL;
	volatile int32_t t20 = 4;

	t20 = (x89==((x90%x91)<x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 1U;
	uint16_t x94 = 5982U;
	uint64_t x95 = 15041291LLU;
	int32_t x96 = -1;
	static volatile int32_t t21 = 2211815;

	t21 = (x93==((x94%x95)<x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x97 = 0;
	uint16_t x99 = 1936U;
	int64_t x100 = -621302LL;
	volatile int32_t t22 = -31;

	t22 = (x97==((x98%x99)<x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = -494046LL;
	uint32_t x103 = 1016485U;
	int16_t x104 = -2;
	int32_t t23 = -22574;

	t23 = (x101==((x102%x103)<x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	static int64_t x106 = 4342204929959LL;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = 0U;
	static volatile int32_t t24 = -717;

	t24 = (x105==((x106%x107)<x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t25 = 68;

	t25 = (x109==((x110%x111)<x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	volatile int32_t x116 = INT32_MAX;
	static int32_t t26 = 342325;

	t26 = (x113==((x114%x115)<x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = UINT64_MAX;
	uint8_t x118 = UINT8_MAX;
	static int8_t x119 = -1;
	volatile uint64_t x120 = UINT64_MAX;
	static volatile int32_t t27 = 0;

	t27 = (x117==((x118%x119)<x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = INT8_MIN;
	int8_t x123 = -1;
	static volatile int8_t x124 = INT8_MAX;
	static volatile int32_t t28 = -3;

	t28 = (x121==((x122%x123)<x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x125 = 14151;
	volatile int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MAX;
	uint64_t x128 = UINT64_MAX;
	int32_t t29 = -287;

	t29 = (x125==((x126%x127)<x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = -39LL;
	volatile uint32_t x130 = 24193U;
	int64_t x131 = INT64_MIN;
	volatile int32_t t30 = -27117086;

	t30 = (x129==((x130%x131)<x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x133 = 124U;
	static uint32_t x135 = 25U;

	t31 = (x133==((x134%x135)<x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int32_t x138 = -954984738;
	volatile int32_t x139 = 842089756;
	uint8_t x140 = 15U;
	int32_t t32 = -1;

	t32 = (x137==((x138%x139)<x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = -53171209033LL;
	static volatile uint64_t x143 = 9152773284340132LLU;
	volatile int64_t x144 = -1LL;
	int32_t t33 = 42911;

	t33 = (x141==((x142%x143)<x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x145 = 33;
	int16_t x146 = INT16_MIN;
	volatile int8_t x147 = -1;
	int16_t x148 = -751;
	static volatile int32_t t34 = -3;

	t34 = (x145==((x146%x147)<x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = -1;
	static int16_t x152 = INT16_MIN;
	int32_t t35 = 773475;

	t35 = (x149==((x150%x151)<x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	int32_t x154 = -1;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = 525592077;

	t36 = (x153==((x154%x155)<x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x158 = INT8_MAX;
	volatile uint8_t x159 = 46U;
	static int64_t x160 = -1LL;
	int32_t t37 = 77;

	t37 = (x157==((x158%x159)<x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = UINT64_MAX;
	int64_t x162 = INT64_MIN;
	volatile uint64_t x164 = UINT64_MAX;

	t38 = (x161==((x162%x163)<x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x165 = 2003563U;
	volatile uint16_t x166 = 2043U;
	volatile int8_t x167 = -1;
	volatile int32_t x168 = -5745;

	t39 = (x165==((x166%x167)<x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = 21399;
	int32_t x170 = INT32_MAX;
	uint16_t x171 = 26449U;
	volatile int32_t t40 = 938;

	t40 = (x169==((x170%x171)<x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x173 = UINT32_MAX;
	uint64_t x175 = 134074336699534LLU;
	int32_t x176 = -179;
	int32_t t41 = -2942237;

	t41 = (x173==((x174%x175)<x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int16_t x178 = 7;
	int8_t x179 = -1;
	int32_t t42 = 2236544;

	t42 = (x177==((x178%x179)<x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x182 = 947U;
	int16_t x183 = 81;
	uint8_t x184 = 1U;
	int32_t t43 = 1;

	t43 = (x181==((x182%x183)<x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x186 = 25550276U;
	int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MIN;
	volatile int32_t t44 = 4474974;

	t44 = (x185==((x186%x187)<x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = 4;
	uint64_t x191 = 291435022479LLU;
	int8_t x192 = -30;
	static volatile int32_t t45 = 145708;

	t45 = (x189==((x190%x191)<x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 0U;
	int8_t x194 = INT8_MIN;
	int16_t x195 = INT16_MAX;
	volatile int32_t x196 = -1;
	volatile int32_t t46 = 34813035;

	t46 = (x193==((x194%x195)<x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x197 = UINT32_MAX;
	int16_t x199 = -1;
	int16_t x200 = -200;
	volatile int32_t t47 = 52826;

	t47 = (x197==((x198%x199)<x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = 307384;
	static volatile int8_t x203 = INT8_MIN;
	volatile uint16_t x204 = UINT16_MAX;
	static int32_t t48 = 29725;

	t48 = (x201==((x202%x203)<x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x206 = 9478540208LLU;
	static volatile int32_t t49 = -22;

	t49 = (x205==((x206%x207)<x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x209 = INT32_MAX;
	uint64_t x210 = 238746013325656513LLU;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = -2;
	int32_t t50 = -429874;

	t50 = (x209==((x210%x211)<x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 5;
	int8_t x214 = -20;
	volatile int32_t t51 = 5;

	t51 = (x213==((x214%x215)<x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = 1588;
	int64_t x218 = -1LL;
	static uint8_t x219 = UINT8_MAX;
	volatile int32_t t52 = -1;

	t52 = (x217==((x218%x219)<x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x222 = -33727LL;
	int8_t x223 = 1;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t53 = 427;

	t53 = (x221==((x222%x223)<x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x228 = 202795842U;
	volatile int32_t t54 = -20799170;

	t54 = (x225==((x226%x227)<x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 5U;
	static int8_t x231 = 2;
	volatile int16_t x232 = INT16_MIN;

	t55 = (x229==((x230%x231)<x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x234 = UINT64_MAX;
	int32_t x236 = -1;
	int32_t t56 = 1;

	t56 = (x233==((x234%x235)<x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -3822093483LL;
	int32_t x238 = -22;
	static int8_t x239 = -1;
	static uint16_t x240 = 2U;
	volatile int32_t t57 = 416148;

	t57 = (x237==((x238%x239)<x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x242 = 593451277LLU;
	int16_t x243 = INT16_MIN;
	int32_t t58 = 6634455;

	t58 = (x241==((x242%x243)<x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MIN;
	volatile uint16_t x247 = 207U;
	int64_t x248 = -1LL;
	int32_t t59 = -2531;

	t59 = (x245==((x246%x247)<x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MAX;
	int32_t t60 = -27;

	t60 = (x249==((x250%x251)<x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = INT64_MAX;
	int16_t x254 = -1;
	static int32_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;
	int32_t t61 = -4112;

	t61 = (x253==((x254%x255)<x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = INT8_MIN;
	volatile int32_t x259 = INT32_MAX;
	uint16_t x260 = 15980U;
	volatile int32_t t62 = 366845174;

	t62 = (x257==((x258%x259)<x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x261 = 286LLU;
	uint64_t x262 = 1469410539998071796LLU;
	int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	static int32_t t63 = 174;

	t63 = (x261==((x262%x263)<x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = -3;

	t64 = (x265==((x266%x267)<x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x270 = INT64_MAX;
	static int8_t x271 = INT8_MIN;
	volatile int32_t x272 = 1645720;
	int32_t t65 = -408874802;

	t65 = (x269==((x270%x271)<x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;

	t66 = (x273==((x274%x275)<x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	volatile int8_t x279 = INT8_MAX;
	static volatile int32_t t67 = -4140150;

	t67 = (x277==((x278%x279)<x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = INT32_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t68 = 1;

	t68 = (x281==((x282%x283)<x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = -1;
	int32_t x286 = INT32_MIN;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = -2394983648713497611LL;

	t69 = (x285==((x286%x287)<x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 1U;
	static int32_t x290 = -4465;
	static volatile int8_t x292 = INT8_MIN;

	t70 = (x289==((x290%x291)<x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MAX;
	int64_t x295 = INT64_MIN;
	static volatile uint16_t x296 = 18U;
	volatile int32_t t71 = 0;

	t71 = (x293==((x294%x295)<x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x297 = INT16_MIN;
	uint64_t x298 = 30206887651355LLU;
	int16_t x299 = INT16_MIN;
	static uint64_t x300 = 2834LLU;
	static int32_t t72 = -25958073;

	t72 = (x297==((x298%x299)<x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	int64_t x302 = INT64_MIN;
	volatile int8_t x303 = INT8_MIN;
	volatile int32_t t73 = 22870;

	t73 = (x301==((x302%x303)<x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x305 = 7916U;
	volatile uint32_t x306 = 62737U;
	int32_t x307 = -1;
	volatile uint16_t x308 = 1U;
	int32_t t74 = 31;

	t74 = (x305==((x306%x307)<x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x312 = 6886U;

	t75 = (x309==((x310%x311)<x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x314 = 32380554081873500LLU;
	int32_t x315 = INT32_MAX;
	volatile int32_t x316 = -1;

	t76 = (x313==((x314%x315)<x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x317 = 164U;
	uint32_t x319 = 174U;
	int16_t x320 = INT16_MIN;

	t77 = (x317==((x318%x319)<x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x322 = UINT32_MAX;
	int32_t x323 = -1;
	volatile int32_t t78 = -1;

	t78 = (x321==((x322%x323)<x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x326 = 1;
	static uint32_t x327 = 3U;
	volatile int16_t x328 = INT16_MIN;
	static int32_t t79 = -17;

	t79 = (x325==((x326%x327)<x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 240473U;
	static volatile uint64_t x330 = 30LLU;
	int16_t x331 = 7940;
	volatile uint64_t x332 = UINT64_MAX;
	static int32_t t80 = -571025377;

	t80 = (x329==((x330%x331)<x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x335 = -1;
	int64_t x336 = INT64_MAX;
	volatile int32_t t81 = -66452;

	t81 = (x333==((x334%x335)<x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x338 = -15851283;
	uint32_t x340 = 6629458U;
	static volatile int32_t t82 = 3882885;

	t82 = (x337==((x338%x339)<x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MAX;
	volatile uint16_t x342 = UINT16_MAX;
	int64_t x344 = INT64_MAX;
	int32_t t83 = 83982952;

	t83 = (x341==((x342%x343)<x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x346 = -1LL;
	volatile int32_t x347 = INT32_MAX;
	int8_t x348 = INT8_MIN;
	static int32_t t84 = -408;

	t84 = (x345==((x346%x347)<x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -1LL;
	int64_t x350 = 6995922348687752LL;
	uint64_t x351 = UINT64_MAX;
	static volatile int32_t t85 = -925;

	t85 = (x349==((x350%x351)<x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x353 = -876;
	uint16_t x354 = 5U;
	int8_t x355 = INT8_MAX;
	int16_t x356 = -3;
	volatile int32_t t86 = 4973443;

	t86 = (x353==((x354%x355)<x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = INT8_MIN;
	volatile uint8_t x358 = 15U;
	volatile int32_t t87 = -159;

	t87 = (x357==((x358%x359)<x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x362 = 1U;
	static int16_t x363 = -4;
	volatile int64_t x364 = INT64_MIN;
	volatile int32_t t88 = -163;

	t88 = (x361==((x362%x363)<x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	uint64_t x366 = UINT64_MAX;
	static uint16_t x367 = 1760U;
	static int8_t x368 = INT8_MIN;
	int32_t t89 = 13;

	t89 = (x365==((x366%x367)<x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = 58024;
	volatile uint8_t x370 = 20U;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MAX;
	volatile int32_t t90 = -17260308;

	t90 = (x369==((x370%x371)<x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x373 = 241U;
	static int64_t x374 = INT64_MIN;
	uint32_t x375 = UINT32_MAX;
	uint64_t x376 = UINT64_MAX;
	int32_t t91 = 584999;

	t91 = (x373==((x374%x375)<x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x378 = 88U;
	int8_t x379 = INT8_MAX;
	static int32_t x380 = 22;
	int32_t t92 = -3;

	t92 = (x377==((x378%x379)<x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x382 = 3458734349602LL;
	static int32_t t93 = 63302943;

	t93 = (x381==((x382%x383)<x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -1LL;
	uint64_t x395 = UINT64_MAX;
	volatile uint32_t x396 = 3971U;
	volatile int32_t t94 = -496353;

	t94 = (x393==((x394%x395)<x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = -1;
	int64_t x398 = INT64_MIN;
	int8_t x399 = 1;
	static uint32_t x400 = 225912U;
	int32_t t95 = -2091908;

	t95 = (x397==((x398%x399)<x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x402 = INT16_MAX;
	int8_t x403 = 1;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t96 = 44;

	t96 = (x401==((x402%x403)<x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x405 = -134045557258730963LL;
	int8_t x406 = -3;
	static int32_t x408 = -33531796;
	volatile int32_t t97 = -499;

	t97 = (x405==((x406%x407)<x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x409 = 974497005LLU;
	int8_t x410 = -1;
	uint8_t x412 = UINT8_MAX;
	int32_t t98 = 2346;

	t98 = (x409==((x410%x411)<x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x414 = 174005670416722423LLU;
	uint32_t x415 = UINT32_MAX;
	uint8_t x416 = 8U;
	volatile int32_t t99 = 2600;

	t99 = (x413==((x414%x415)<x416));

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

