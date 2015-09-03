#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 31U;
static uint32_t x7 = 12U;
volatile int32_t t1 = -11;
int32_t t3 = 13;
int16_t x19 = INT16_MIN;
uint8_t x23 = UINT8_MAX;
int64_t x26 = INT64_MAX;
uint32_t x35 = 435918939U;
volatile int32_t x42 = -33892;
int32_t x46 = -2;
int64_t x47 = 63539LL;
static int64_t x52 = 1LL;
static volatile int64_t x54 = INT64_MIN;
static volatile int16_t x59 = INT16_MIN;
uint64_t x62 = 7322147139LLU;
volatile int32_t t15 = 9;
volatile int64_t x67 = 5852419353LL;
uint64_t x70 = 619LLU;
int8_t x72 = -2;
static volatile int64_t x81 = INT64_MIN;
int64_t x84 = INT64_MIN;
uint64_t x87 = UINT64_MAX;
int16_t x89 = INT16_MAX;
uint16_t x90 = 16533U;
static uint8_t x97 = UINT8_MAX;
int32_t t25 = -1;
int8_t x105 = INT8_MIN;
uint8_t x108 = UINT8_MAX;
int32_t t27 = 706127306;
static volatile uint16_t x113 = 6U;
int16_t x119 = -1;
uint8_t x125 = UINT8_MAX;
uint64_t x126 = 643570LLU;
static uint64_t x128 = 943009297LLU;
volatile int32_t t31 = -232846;
uint8_t x131 = 51U;
int64_t x137 = INT64_MAX;
volatile int8_t x149 = 1;
int16_t x155 = INT16_MIN;
int64_t x158 = -1LL;
int32_t t40 = 7500;
volatile int32_t t41 = -23;
volatile uint64_t x171 = 615192LLU;
uint16_t x172 = 320U;
int16_t x173 = INT16_MIN;
int64_t x176 = INT64_MIN;
uint32_t x177 = 4835220U;
int64_t x179 = 5LL;
int64_t x192 = INT64_MAX;
static uint8_t x202 = 52U;
int64_t x210 = INT64_MIN;
int64_t x211 = -1LL;
static int32_t t52 = -20582;
volatile int32_t t53 = 18;
int64_t x218 = INT64_MAX;
static uint8_t x223 = UINT8_MAX;
uint64_t x226 = UINT64_MAX;
uint16_t x232 = 1325U;
volatile int32_t x234 = 7400;
volatile int32_t x238 = -1543;
int32_t x242 = 15;
int64_t x245 = -1LL;
int16_t x247 = 809;
static int32_t x248 = -374;
volatile int32_t t63 = -23914245;
int64_t x258 = INT64_MIN;
int16_t x262 = -1;
int8_t x272 = 1;
int32_t x273 = INT32_MIN;
volatile int32_t t69 = -1107867;
uint8_t x282 = UINT8_MAX;
int32_t x285 = -1;
static int16_t x286 = -7;
int32_t t73 = 33324642;
int8_t x300 = -1;
int32_t t74 = -4971;
static int8_t x304 = INT8_MAX;
int32_t t76 = 129580;
int32_t x313 = INT32_MIN;
int64_t x321 = -2LL;
int32_t t82 = 100241;
static uint64_t x334 = 7805661LLU;
int8_t x335 = INT8_MAX;
volatile int32_t t83 = 28265699;
int64_t x343 = INT64_MIN;
volatile int16_t x345 = 0;
uint8_t x357 = 12U;
int32_t t89 = -880975802;
volatile int32_t x361 = INT32_MIN;
uint32_t x366 = 764U;
uint64_t x367 = 1135430472168045LLU;
uint32_t x378 = UINT32_MAX;
volatile int32_t x380 = INT32_MIN;
int16_t x382 = -781;
int16_t x389 = -1;
int8_t x392 = -1;
static volatile int32_t t97 = -34;
int8_t x398 = 0;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int64_t x2 = -62842357464079094LL;
	static int64_t x4 = 276329664914866501LL;
	volatile int32_t t0 = 645;

	t0 = (((x1^x2)<=x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int64_t x6 = -1LL;
	int16_t x8 = 34;

	t1 = (((x5^x6)<=x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -2;
	int32_t x10 = -1;
	int8_t x11 = 1;
	static int8_t x12 = 25;
	volatile int32_t t2 = 413;

	t2 = (((x9^x10)<=x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -5;
	int8_t x14 = INT8_MIN;
	static uint32_t x15 = 68755162U;
	int32_t x16 = -1;

	t3 = (((x13^x14)<=x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	int64_t x18 = INT64_MIN;
	uint32_t x20 = 346U;
	int32_t t4 = 148059;

	t4 = (((x17^x18)<=x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -10205101119578825LL;
	int8_t x22 = -1;
	static int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -68328080;

	t5 = (((x21^x22)<=x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x27 = 20;
	volatile int16_t x28 = -1;
	volatile int32_t t6 = 21353032;

	t6 = (((x25^x26)<=x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 359982473741338367LL;
	int32_t x30 = -1;
	static int64_t x31 = INT64_MIN;
	int64_t x32 = INT64_MAX;
	int32_t t7 = 39523654;

	t7 = (((x29^x30)<=x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 4741;
	static int64_t x34 = 953807782354514LL;
	int16_t x36 = INT16_MAX;
	static int32_t t8 = 8036533;

	t8 = (((x33^x34)<=x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	volatile uint64_t x38 = UINT64_MAX;
	int16_t x39 = -3;
	static volatile int32_t x40 = -25447;
	volatile int32_t t9 = 31;

	t9 = (((x37^x38)<=x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	static uint8_t x43 = 1U;
	volatile int8_t x44 = -19;
	int32_t t10 = -441;

	t10 = (((x41^x42)<=x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	static uint64_t x48 = 2LLU;
	volatile int32_t t11 = 322108;

	t11 = (((x45^x46)<=x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	volatile int16_t x50 = INT16_MAX;
	int8_t x51 = -27;
	volatile int32_t t12 = 150;

	t12 = (((x49^x50)<=x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int16_t x55 = INT16_MIN;
	int16_t x56 = -1;
	volatile int32_t t13 = 466768133;

	t13 = (((x53^x54)<=x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = INT64_MAX;
	static int16_t x58 = INT16_MAX;
	volatile uint8_t x60 = 0U;
	int32_t t14 = 17437012;

	t14 = (((x57^x58)<=x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = INT64_MAX;
	uint8_t x63 = UINT8_MAX;
	uint16_t x64 = UINT16_MAX;

	t15 = (((x61^x62)<=x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 81U;
	int32_t x66 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t16 = 0;

	t16 = (((x65^x66)<=x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	uint32_t x71 = 9U;
	volatile int32_t t17 = 0;

	t17 = (((x69^x70)<=x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -2;
	volatile int8_t x74 = INT8_MIN;
	uint8_t x75 = 111U;
	int8_t x76 = -11;
	volatile int32_t t18 = 632;

	t18 = (((x73^x74)<=x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -14027LL;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	static int32_t x80 = -1003366893;
	volatile int32_t t19 = -52897;

	t19 = (((x77^x78)<=x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	static int16_t x83 = INT16_MIN;
	int32_t t20 = -196743;

	t20 = (((x81^x82)<=x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 837;
	int8_t x86 = -1;
	uint16_t x88 = 10155U;
	int32_t t21 = -3746;

	t21 = (((x85^x86)<=x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x91 = 2U;
	uint32_t x92 = 388863U;
	volatile int32_t t22 = 303981;

	t22 = (((x89^x90)<=x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	static int64_t x94 = 227276157534419LL;
	int16_t x95 = 1276;
	int8_t x96 = -1;
	volatile int32_t t23 = -13034;

	t23 = (((x93^x94)<=x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x98 = UINT16_MAX;
	int16_t x99 = INT16_MIN;
	static volatile int32_t x100 = -4684226;
	static volatile int32_t t24 = 58;

	t24 = (((x97^x98)<=x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = -1;
	static uint64_t x102 = 13LLU;
	volatile int16_t x103 = INT16_MAX;
	static uint8_t x104 = UINT8_MAX;

	t25 = (((x101^x102)<=x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x106 = 2584671250534LL;
	int32_t x107 = INT32_MIN;
	volatile int32_t t26 = -4323;

	t26 = (((x105^x106)<=x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 909784472LLU;
	int32_t x110 = -13561;
	uint64_t x111 = 13496709LLU;
	uint8_t x112 = UINT8_MAX;

	t27 = (((x109^x110)<=x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = INT8_MIN;
	volatile int8_t x115 = -1;
	uint32_t x116 = UINT32_MAX;
	static volatile int32_t t28 = -7812;

	t28 = (((x113^x114)<=x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -56573714LL;
	volatile int16_t x118 = -94;
	int16_t x120 = -1;
	int32_t t29 = 8968340;

	t29 = (((x117^x118)<=x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int32_t x122 = INT32_MIN;
	volatile int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = 67U;
	static int32_t t30 = -311;

	t30 = (((x121^x122)<=x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x127 = UINT8_MAX;

	t31 = (((x125^x126)<=x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	int32_t x130 = 339047654;
	uint8_t x132 = 20U;
	int32_t t32 = 196716797;

	t32 = (((x129^x130)<=x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	uint16_t x134 = UINT16_MAX;
	static int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t33 = 98;

	t33 = (((x133^x134)<=x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = INT8_MAX;
	int64_t x139 = INT64_MAX;
	uint8_t x140 = 81U;
	int32_t t34 = -120599006;

	t34 = (((x137^x138)<=x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 113U;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -12;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 9001177;

	t35 = (((x141^x142)<=x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 5U;
	int64_t x146 = -1941LL;
	uint16_t x147 = UINT16_MAX;
	uint64_t x148 = 502552549332238219LLU;
	static volatile int32_t t36 = -626;

	t36 = (((x145^x146)<=x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	static int16_t x151 = 249;
	int16_t x152 = -1;
	int32_t t37 = -331166;

	t37 = (((x149^x150)<=x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = INT32_MIN;
	volatile uint32_t x156 = UINT32_MAX;
	int32_t t38 = -124375515;

	t38 = (((x153^x154)<=x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x157 = INT32_MIN;
	static volatile uint16_t x159 = UINT16_MAX;
	volatile uint8_t x160 = 1U;
	int32_t t39 = 7141;

	t39 = (((x157^x158)<=x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x162 = UINT64_MAX;
	int16_t x163 = -8089;
	int32_t x164 = INT32_MIN;

	t40 = (((x161^x162)<=x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 311926005465198LLU;
	volatile int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MAX;
	int32_t x168 = INT32_MIN;

	t41 = (((x165^x166)<=x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -14;
	static volatile int8_t x170 = INT8_MIN;
	int32_t t42 = 6966455;

	t42 = (((x169^x170)<=x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = -1;
	int64_t x175 = 772460118282913553LL;
	volatile int32_t t43 = -1;

	t43 = (((x173^x174)<=x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -2;
	volatile int32_t x180 = INT32_MIN;
	int32_t t44 = -16882908;

	t44 = (((x177^x178)<=x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = 122634140317114LL;
	int16_t x182 = INT16_MIN;
	static volatile uint64_t x183 = 7326LLU;
	volatile uint16_t x184 = 95U;
	volatile int32_t t45 = -1;

	t45 = (((x181^x182)<=x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	uint8_t x186 = 95U;
	static int16_t x187 = INT16_MAX;
	int16_t x188 = -1;
	volatile int32_t t46 = -3328448;

	t46 = (((x185^x186)<=x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = UINT16_MAX;
	static int8_t x190 = INT8_MIN;
	uint16_t x191 = 63U;
	int32_t t47 = 3467818;

	t47 = (((x189^x190)<=x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MAX;
	volatile int32_t x196 = 24942527;
	static int32_t t48 = 360096;

	t48 = (((x193^x194)<=x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = UINT64_MAX;
	uint8_t x198 = 3U;
	int8_t x199 = -1;
	volatile uint8_t x200 = UINT8_MAX;
	static int32_t t49 = -421752;

	t49 = (((x197^x198)<=x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	static uint8_t x203 = UINT8_MAX;
	volatile int64_t x204 = -1601635904335688LL;
	int32_t t50 = 207160;

	t50 = (((x201^x202)<=x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = INT64_MAX;
	uint16_t x207 = 14186U;
	int32_t x208 = INT32_MAX;
	int32_t t51 = 136278639;

	t51 = (((x205^x206)<=x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 14259U;
	uint8_t x212 = UINT8_MAX;

	t52 = (((x209^x210)<=x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = -1;
	volatile int64_t x215 = -1LL;
	uint8_t x216 = 113U;

	t53 = (((x213^x214)<=x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MAX;
	int16_t x219 = INT16_MIN;
	int64_t x220 = -22617LL;
	volatile int32_t t54 = -1;

	t54 = (((x217^x218)<=x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 206446U;
	uint64_t x222 = UINT64_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 7487;

	t55 = (((x221^x222)<=x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = -1LL;
	int64_t x227 = INT64_MIN;
	static uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = 1913;

	t56 = (((x225^x226)<=x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	volatile uint8_t x230 = 14U;
	int8_t x231 = INT8_MIN;
	volatile int32_t t57 = 12347;

	t57 = (((x229^x230)<=x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = 6518LL;
	volatile int8_t x235 = -21;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t58 = 6953804;

	t58 = (((x233^x234)<=x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -3480;
	uint8_t x239 = 1U;
	int16_t x240 = -1;
	int32_t t59 = -10851;

	t59 = (((x237^x238)<=x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	static int16_t x243 = 1;
	static int16_t x244 = -1;
	volatile int32_t t60 = 5;

	t60 = (((x241^x242)<=x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = -1;
	int32_t t61 = -1;

	t61 = (((x245^x246)<=x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	uint16_t x250 = 7597U;
	int64_t x251 = 6797092465LL;
	int32_t x252 = -27414;
	int32_t t62 = 0;

	t62 = (((x249^x250)<=x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	static uint8_t x254 = 2U;
	int16_t x255 = INT16_MAX;
	static int8_t x256 = INT8_MIN;

	t63 = (((x253^x254)<=x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x257 = INT64_MAX;
	static volatile int64_t x259 = 224007490161008806LL;
	int8_t x260 = -1;
	int32_t t64 = 20;

	t64 = (((x257^x258)<=x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -180140749472980260LL;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = INT32_MIN;
	static volatile int32_t t65 = -3;

	t65 = (((x261^x262)<=x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MAX;
	volatile int64_t x267 = INT64_MIN;
	uint16_t x268 = 109U;
	int32_t t66 = 114681047;

	t66 = (((x265^x266)<=x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	volatile int64_t x270 = 768029449508LL;
	static uint32_t x271 = 52309066U;
	int32_t t67 = 15;

	t67 = (((x269^x270)<=x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MIN;
	int16_t x276 = 5;
	static int32_t t68 = -66685580;

	t68 = (((x273^x274)<=x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MIN;
	volatile int32_t x279 = INT32_MIN;
	uint16_t x280 = 63U;

	t69 = (((x277^x278)<=x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 2514U;
	static volatile int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -880;

	t70 = (((x281^x282)<=x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x287 = INT64_MIN;
	int32_t x288 = 1311;
	int32_t t71 = 0;

	t71 = (((x285^x286)<=x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MIN;
	int8_t x291 = -13;
	static uint32_t x292 = UINT32_MAX;
	int32_t t72 = -70;

	t72 = (((x289^x290)<=x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 614644706331983LL;
	static uint16_t x294 = UINT16_MAX;
	int16_t x295 = 1077;
	uint64_t x296 = 73949LLU;

	t73 = (((x293^x294)<=x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = -1LL;
	static int64_t x298 = INT64_MAX;
	static volatile uint32_t x299 = 4461U;

	t74 = (((x297^x298)<=x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	uint16_t x302 = 44U;
	volatile uint32_t x303 = 7346885U;
	int32_t t75 = -108;

	t75 = (((x301^x302)<=x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -1;
	uint64_t x306 = 130065LLU;
	static int8_t x307 = -24;
	int64_t x308 = INT64_MIN;

	t76 = (((x305^x306)<=x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -57;
	volatile uint32_t x310 = 318U;
	int64_t x311 = 1499949258515565LL;
	int8_t x312 = -1;
	volatile int32_t t77 = 9864;

	t77 = (((x309^x310)<=x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x314 = 1;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -13473;
	int32_t t78 = 567450064;

	t78 = (((x313^x314)<=x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = -748;
	int64_t x320 = -1LL;
	int32_t t79 = -53;

	t79 = (((x317^x318)<=x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x322 = INT64_MAX;
	int16_t x323 = -1;
	uint8_t x324 = UINT8_MAX;
	static volatile int32_t t80 = -148;

	t80 = (((x321^x322)<=x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -2;
	uint64_t x326 = 1159598LLU;
	static volatile uint8_t x327 = 6U;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t81 = -2806;

	t81 = (((x325^x326)<=x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = -3;
	int32_t x331 = -2123;
	static int32_t x332 = -1;

	t82 = (((x329^x330)<=x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = 7451097564154538335LLU;
	volatile uint8_t x336 = 31U;

	t83 = (((x333^x334)<=x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	static int64_t x338 = INT64_MIN;
	uint8_t x339 = 3U;
	int16_t x340 = INT16_MIN;
	int32_t t84 = 52413228;

	t84 = (((x337^x338)<=x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = UINT64_MAX;
	static int32_t x342 = -162083;
	volatile int16_t x344 = INT16_MAX;
	static volatile int32_t t85 = 68108;

	t85 = (((x341^x342)<=x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 3348562979LLU;
	volatile int8_t x347 = -1;
	int32_t x348 = -2;
	int32_t t86 = -11592483;

	t86 = (((x345^x346)<=x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 3U;
	uint8_t x350 = 120U;
	volatile uint16_t x351 = 225U;
	uint8_t x352 = 0U;
	volatile int32_t t87 = 0;

	t87 = (((x349^x350)<=x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile int8_t x354 = INT8_MIN;
	static int64_t x355 = -743844376033480487LL;
	int16_t x356 = -1;
	volatile int32_t t88 = 217170445;

	t88 = (((x353^x354)<=x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MAX;
	int64_t x360 = -451574176LL;

	t89 = (((x357^x358)<=x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = 342208U;
	static int64_t x363 = 3320LL;
	volatile int8_t x364 = INT8_MIN;
	int32_t t90 = 62;

	t90 = (((x361^x362)<=x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = 169;
	volatile int64_t x368 = -1LL;
	volatile int32_t t91 = -1;

	t91 = (((x365^x366)<=x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 8U;
	int64_t x370 = -268487742LL;
	static int32_t x371 = 5701;
	int8_t x372 = 1;
	volatile int32_t t92 = 3;

	t92 = (((x369^x370)<=x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	uint8_t x374 = 4U;
	uint64_t x375 = 21136385976235LLU;
	volatile int16_t x376 = -1735;
	static int32_t t93 = -19867087;

	t93 = (((x373^x374)<=x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -968;
	static int16_t x379 = INT16_MAX;
	volatile int32_t t94 = 255322;

	t94 = (((x377^x378)<=x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	int16_t x383 = INT16_MIN;
	static uint64_t x384 = 244802698474LLU;
	volatile int32_t t95 = 1451498;

	t95 = (((x381^x382)<=x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 1034102720U;
	uint8_t x386 = 3U;
	volatile int64_t x387 = INT64_MIN;
	int8_t x388 = 56;
	static volatile int32_t t96 = -52;

	t96 = (((x385^x386)<=x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MAX;
	static int64_t x391 = INT64_MIN;

	t97 = (((x389^x390)<=x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 4042963877824543008LLU;
	volatile int32_t x394 = 57817548;
	volatile int16_t x395 = INT16_MAX;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 19668647;

	t98 = (((x393^x394)<=x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -305505112693LL;
	uint16_t x399 = 19U;
	int8_t x400 = INT8_MIN;
	static int32_t t99 = 9;

	t99 = (((x397^x398)<=x399)<x400);

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

