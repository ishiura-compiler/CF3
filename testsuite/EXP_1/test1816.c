#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 85599651689728LL;
uint16_t x5 = UINT16_MAX;
volatile uint64_t x7 = UINT64_MAX;
volatile int32_t t1 = -47;
int8_t x13 = INT8_MIN;
int8_t x16 = 6;
int8_t x22 = -3;
volatile uint32_t x23 = UINT32_MAX;
static int16_t x33 = INT16_MAX;
int64_t x34 = -579LL;
static int64_t x40 = -1LL;
uint8_t x44 = UINT8_MAX;
int8_t x46 = INT8_MIN;
uint32_t x49 = UINT32_MAX;
static int64_t x54 = -1LL;
int32_t x55 = 2;
int32_t t14 = 38;
volatile int32_t x61 = 3360026;
uint64_t x63 = 6LLU;
uint64_t x66 = 2344LLU;
uint8_t x69 = UINT8_MAX;
int32_t x78 = INT32_MIN;
uint32_t x84 = 17246U;
static uint32_t x87 = UINT32_MAX;
int32_t x88 = INT32_MAX;
uint8_t x95 = 0U;
int16_t x98 = INT16_MAX;
int32_t x104 = INT32_MIN;
int16_t x111 = -1;
int8_t x120 = -10;
static uint8_t x126 = 0U;
static int32_t t31 = 348;
int8_t x132 = INT8_MIN;
volatile uint8_t x142 = 62U;
int16_t x150 = INT16_MIN;
static int32_t t38 = 0;
static uint8_t x171 = UINT8_MAX;
int64_t x172 = INT64_MAX;
static volatile int64_t x175 = -1LL;
int32_t t43 = 1890;
static volatile uint16_t x178 = 4U;
uint32_t x180 = 1582113U;
int32_t t44 = 4;
volatile int8_t x181 = INT8_MAX;
static volatile int16_t x185 = INT16_MIN;
static int16_t x197 = INT16_MIN;
static int32_t x198 = -1;
uint16_t x203 = UINT16_MAX;
int8_t x204 = -1;
uint32_t x206 = UINT32_MAX;
static int64_t x210 = INT64_MIN;
int8_t x223 = -1;
int32_t x229 = -1;
int64_t x232 = INT64_MIN;
volatile int32_t x234 = 6860658;
static int32_t x239 = INT32_MIN;
volatile uint64_t x242 = 80LLU;
int32_t t64 = 8847159;
int64_t x263 = -127269LL;
static int16_t x278 = INT16_MIN;
int8_t x284 = INT8_MAX;
int32_t t70 = 102;
static uint16_t x285 = 59U;
uint64_t x300 = 2588098156970LLU;
static int64_t x304 = INT64_MIN;
static int64_t x305 = INT64_MAX;
int32_t x307 = 15616888;
int8_t x310 = INT8_MIN;
static volatile int32_t t77 = 786806;
uint8_t x313 = UINT8_MAX;
volatile uint32_t x315 = 126185U;
static volatile int32_t t78 = 670155892;
uint8_t x318 = 17U;
static volatile int32_t t79 = -548022259;
int16_t x323 = INT16_MAX;
static uint16_t x327 = 346U;
int8_t x328 = INT8_MIN;
int8_t x342 = -7;
int8_t x350 = 1;
uint64_t x352 = 585386107814588118LLU;
int32_t t88 = 1;
int32_t t89 = 457;
static int32_t x365 = INT32_MAX;
volatile int16_t x366 = -3;
volatile int32_t t91 = 1370509;
uint8_t x384 = 30U;
int32_t t95 = -1350726;
uint8_t x387 = 36U;


void f0(void) {
	int64_t x2 = INT64_MIN;
	static int64_t x3 = -511LL;
	int16_t x4 = 2641;
	int32_t t0 = -7416;

	t0 = (((x1&x2)<=x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int32_t x8 = INT32_MIN;

	t1 = (((x5&x6)<=x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 2972001LLU;
	static volatile int64_t x10 = -1LL;
	uint8_t x11 = 10U;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 8;

	t2 = (((x9&x10)<=x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	volatile int32_t t3 = -2420;

	t3 = (((x13&x14)<=x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 252U;
	int8_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	volatile int64_t x20 = -1LL;
	volatile int32_t t4 = 47126;

	t4 = (((x17&x18)<=x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	volatile uint8_t x24 = 0U;
	static int32_t t5 = -8;

	t5 = (((x21&x22)<=x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -2;
	int8_t x26 = 25;
	volatile int32_t x27 = INT32_MAX;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 19834;

	t6 = (((x25&x26)<=x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	static int64_t x30 = INT64_MIN;
	int8_t x31 = INT8_MAX;
	int32_t x32 = 478893055;
	int32_t t7 = 42;

	t7 = (((x29&x30)<=x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x35 = 99075819699LLU;
	int8_t x36 = 12;
	static volatile int32_t t8 = -5;

	t8 = (((x33&x34)<=x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint64_t x38 = 0LLU;
	volatile int32_t x39 = INT32_MIN;
	int32_t t9 = 48;

	t9 = (((x37&x38)<=x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static int64_t x42 = -16546281748006LL;
	int8_t x43 = INT8_MIN;
	int32_t t10 = -15;

	t10 = (((x41&x42)<=x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int64_t x47 = 5386293949LL;
	uint64_t x48 = UINT64_MAX;
	int32_t t11 = 5;

	t11 = (((x45&x46)<=x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = INT8_MAX;
	int32_t x51 = INT32_MAX;
	static volatile int32_t x52 = -249278277;
	static int32_t t12 = -29961098;

	t12 = (((x49&x50)<=x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 17U;
	uint64_t x56 = 363374164753646849LLU;
	volatile int32_t t13 = -9;

	t13 = (((x53&x54)<=x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -557520302118LL;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = INT64_MAX;
	volatile uint32_t x60 = UINT32_MAX;

	t14 = (((x57&x58)<=x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x62 = 1;
	static int64_t x64 = -1LL;
	volatile int32_t t15 = 723;

	t15 = (((x61&x62)<=x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int16_t x68 = 747;
	static volatile int32_t t16 = -52330791;

	t16 = (((x65&x66)<=x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x70 = 71202250LLU;
	volatile int32_t x71 = INT32_MAX;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = -600427085;

	t17 = (((x69&x70)<=x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 5540U;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	static int8_t x76 = -1;
	int32_t t18 = 1361;

	t18 = (((x73&x74)<=x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 15;
	volatile int16_t x79 = -50;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 24359;

	t19 = (((x77&x78)<=x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int16_t x82 = INT16_MAX;
	uint32_t x83 = UINT32_MAX;
	int32_t t20 = -715749;

	t20 = (((x81&x82)<=x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 1216914553223435159LLU;
	int16_t x86 = INT16_MIN;
	int32_t t21 = -16056102;

	t21 = (((x85&x86)<=x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	int32_t x90 = INT32_MIN;
	volatile int16_t x91 = 9;
	static volatile uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = 1;

	t22 = (((x89&x90)<=x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	uint16_t x94 = 3U;
	volatile uint16_t x96 = UINT16_MAX;
	int32_t t23 = -879352;

	t23 = (((x93&x94)<=x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x99 = -1505;
	static uint8_t x100 = 1U;
	int32_t t24 = -33309;

	t24 = (((x97&x98)<=x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = UINT64_MAX;
	int8_t x102 = -23;
	int32_t x103 = 179133476;
	volatile int32_t t25 = -156731252;

	t25 = (((x101&x102)<=x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -38;
	int8_t x106 = 31;
	int8_t x107 = INT8_MIN;
	static int64_t x108 = INT64_MIN;
	int32_t t26 = -86;

	t26 = (((x105&x106)<=x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 0U;
	static uint16_t x110 = 2577U;
	volatile int16_t x112 = -1;
	volatile int32_t t27 = 5850959;

	t27 = (((x109&x110)<=x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = 1004242LL;
	static int16_t x114 = 15;
	volatile int16_t x115 = -1;
	int64_t x116 = INT64_MAX;
	volatile int32_t t28 = 1005514462;

	t28 = (((x113&x114)<=x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = -12;
	int16_t x119 = 8;
	int32_t t29 = 6;

	t29 = (((x117&x118)<=x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	int64_t x122 = 5243421257934LL;
	uint8_t x123 = 12U;
	int16_t x124 = -1042;
	volatile int32_t t30 = 1557;

	t30 = (((x121&x122)<=x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 0;
	uint64_t x127 = UINT64_MAX;
	volatile int8_t x128 = INT8_MIN;

	t31 = (((x125&x126)<=x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 515;
	volatile uint8_t x130 = UINT8_MAX;
	uint16_t x131 = 0U;
	volatile int32_t t32 = 89;

	t32 = (((x129&x130)<=x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 1024610;
	int16_t x134 = INT16_MIN;
	uint32_t x135 = 1909233U;
	volatile uint8_t x136 = UINT8_MAX;
	static volatile int32_t t33 = 2516;

	t33 = (((x133&x134)<=x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 7892U;
	int32_t x138 = INT32_MIN;
	int32_t x139 = -167355;
	volatile int32_t x140 = INT32_MAX;
	int32_t t34 = -4548;

	t34 = (((x137&x138)<=x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint8_t x141 = UINT8_MAX;
	uint32_t x143 = 29017U;
	int64_t x144 = INT64_MAX;
	volatile int32_t t35 = -2;

	t35 = (((x141&x142)<=x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 8;
	volatile uint16_t x146 = 76U;
	volatile int32_t x147 = -1455;
	volatile int32_t x148 = -1;
	int32_t t36 = -17;

	t36 = (((x145&x146)<=x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	static volatile uint64_t x151 = UINT64_MAX;
	static int32_t x152 = INT32_MIN;
	int32_t t37 = -4;

	t37 = (((x149&x150)<=x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int16_t x154 = -1;
	static uint64_t x155 = 3436LLU;
	static int8_t x156 = 27;

	t38 = (((x153&x154)<=x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x157 = -284994209565LL;
	int16_t x158 = INT16_MAX;
	static int16_t x159 = 23;
	int32_t x160 = -3;
	int32_t t39 = 86;

	t39 = (((x157&x158)<=x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 6LLU;
	int32_t x162 = -24;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = -1;
	volatile int32_t t40 = 1076;

	t40 = (((x161&x162)<=x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	int16_t x166 = 4034;
	int32_t x167 = -1;
	int64_t x168 = 187245717480LL;
	int32_t t41 = 202594;

	t41 = (((x165&x166)<=x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 7371922450021LLU;
	uint8_t x170 = 23U;
	static int32_t t42 = 215;

	t42 = (((x169&x170)<=x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	volatile int32_t x174 = INT32_MIN;
	int64_t x176 = -1020726237LL;

	t43 = (((x173&x174)<=x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int32_t x179 = -29;

	t44 = (((x177&x178)<=x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x182 = INT8_MAX;
	static volatile int64_t x183 = INT64_MAX;
	static int64_t x184 = -1822204490720LL;
	int32_t t45 = 16;

	t45 = (((x181&x182)<=x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = 500635LLU;
	int64_t x187 = -107378LL;
	uint64_t x188 = UINT64_MAX;
	static int32_t t46 = 428444;

	t46 = (((x185&x186)<=x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 33966713LLU;
	int16_t x190 = INT16_MAX;
	int16_t x191 = -1;
	int8_t x192 = INT8_MIN;
	static int32_t t47 = 11945595;

	t47 = (((x189&x190)<=x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = UINT8_MAX;
	uint8_t x195 = 1U;
	uint32_t x196 = UINT32_MAX;
	static int32_t t48 = 2346908;

	t48 = (((x193&x194)<=x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x199 = 321779U;
	static uint64_t x200 = 8392846LLU;
	volatile int32_t t49 = 78267042;

	t49 = (((x197&x198)<=x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = -6822908937LL;
	volatile int32_t t50 = 11824;

	t50 = (((x201&x202)<=x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t x207 = INT32_MAX;
	static int32_t x208 = -1;
	int32_t t51 = -27;

	t51 = (((x205&x206)<=x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -37LL;
	uint8_t x211 = UINT8_MAX;
	volatile uint64_t x212 = 261496205048LLU;
	int32_t t52 = -703751633;

	t52 = (((x209&x210)<=x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	int32_t x214 = INT32_MIN;
	uint16_t x215 = 2920U;
	int8_t x216 = INT8_MIN;
	int32_t t53 = 10109676;

	t53 = (((x213&x214)<=x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = UINT64_MAX;
	static uint16_t x218 = 170U;
	uint8_t x219 = 2U;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t54 = -225622;

	t54 = (((x217&x218)<=x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 111671LLU;
	int32_t x222 = -1;
	uint16_t x224 = 4U;
	int32_t t55 = -1;

	t55 = (((x221&x222)<=x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 1;
	int16_t x226 = INT16_MIN;
	static uint8_t x227 = UINT8_MAX;
	uint64_t x228 = 99560LLU;
	int32_t t56 = 228822011;

	t56 = (((x225&x226)<=x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 43095196U;
	int16_t x231 = -17;
	static int32_t t57 = -806246565;

	t57 = (((x229&x230)<=x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 179041825529328LLU;
	static uint64_t x235 = 275LLU;
	int16_t x236 = INT16_MAX;
	int32_t t58 = 2923060;

	t58 = (((x233&x234)<=x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = INT32_MAX;
	static volatile int32_t x240 = -1;
	int32_t t59 = 5140989;

	t59 = (((x237&x238)<=x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 43U;
	static uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t60 = 0;

	t60 = (((x241&x242)<=x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	static int16_t x246 = INT16_MIN;
	static int8_t x247 = 1;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -80692;

	t61 = (((x245&x246)<=x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = 1U;
	int8_t x250 = 44;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = 9012029;

	t62 = (((x249&x250)<=x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x253 = UINT8_MAX;
	volatile int16_t x254 = 8;
	int64_t x255 = INT64_MIN;
	int16_t x256 = 232;
	int32_t t63 = 73251;

	t63 = (((x253&x254)<=x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 24U;
	int32_t x258 = INT32_MAX;
	static uint64_t x259 = UINT64_MAX;
	int32_t x260 = -1;

	t64 = (((x257&x258)<=x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = UINT32_MAX;
	static int64_t x262 = INT64_MIN;
	uint64_t x264 = UINT64_MAX;
	int32_t t65 = -902625675;

	t65 = (((x261&x262)<=x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	int64_t x266 = INT64_MIN;
	volatile int64_t x267 = 7181790596LL;
	static uint32_t x268 = UINT32_MAX;
	static int32_t t66 = 2;

	t66 = (((x265&x266)<=x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = 11907575108119888LLU;
	static int32_t x271 = INT32_MIN;
	volatile int32_t x272 = -1764235;
	volatile int32_t t67 = 1091650;

	t67 = (((x269&x270)<=x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	volatile int32_t x274 = 888152;
	volatile int64_t x275 = INT64_MIN;
	volatile int8_t x276 = INT8_MIN;
	int32_t t68 = 715613091;

	t68 = (((x273&x274)<=x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	volatile int64_t x279 = INT64_MAX;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -43262768;

	t69 = (((x277&x278)<=x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = -1;
	int64_t x283 = -1LL;

	t70 = (((x281&x282)<=x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MAX;
	volatile int8_t x287 = -1;
	static int16_t x288 = 5418;
	static int32_t t71 = 287;

	t71 = (((x285&x286)<=x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = UINT16_MAX;
	static int32_t x291 = INT32_MIN;
	static volatile int64_t x292 = INT64_MAX;
	int32_t t72 = 158358914;

	t72 = (((x289&x290)<=x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -89;
	int8_t x294 = INT8_MAX;
	uint64_t x295 = 3109LLU;
	int64_t x296 = -1LL;
	int32_t t73 = -1;

	t73 = (((x293&x294)<=x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 19;
	volatile uint64_t x298 = UINT64_MAX;
	int32_t x299 = INT32_MAX;
	int32_t t74 = -1;

	t74 = (((x297&x298)<=x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	static int16_t x302 = 7;
	uint32_t x303 = UINT32_MAX;
	volatile int32_t t75 = 16254713;

	t75 = (((x301&x302)<=x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 140711484308LLU;
	volatile int16_t x308 = -1;
	static int32_t t76 = -6;

	t76 = (((x305&x306)<=x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 23485LLU;
	static volatile int32_t x311 = INT32_MIN;
	int32_t x312 = -2798;

	t77 = (((x309&x310)<=x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	int64_t x316 = -1LL;

	t78 = (((x313&x314)<=x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	int64_t x319 = -1LL;
	static int8_t x320 = INT8_MIN;

	t79 = (((x317&x318)<=x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	int8_t x322 = INT8_MAX;
	int16_t x324 = -1;
	static int32_t t80 = -546417862;

	t80 = (((x321&x322)<=x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MIN;
	int64_t x326 = INT64_MIN;
	int32_t t81 = 2;

	t81 = (((x325&x326)<=x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 102U;
	volatile int16_t x330 = -632;
	static int16_t x331 = INT16_MAX;
	int16_t x332 = 3;
	int32_t t82 = 26256662;

	t82 = (((x329&x330)<=x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 1;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	volatile int16_t x336 = 5;
	int32_t t83 = 451;

	t83 = (((x333&x334)<=x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 1715088587614440LLU;
	static int8_t x338 = -1;
	uint32_t x339 = 672U;
	volatile int8_t x340 = INT8_MIN;
	static volatile int32_t t84 = -68222440;

	t84 = (((x337&x338)<=x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	uint64_t x343 = 10LLU;
	int16_t x344 = -1449;
	int32_t t85 = 186710439;

	t85 = (((x341&x342)<=x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int8_t x346 = -29;
	uint8_t x347 = 36U;
	int64_t x348 = 3013282044LL;
	int32_t t86 = 86064267;

	t86 = (((x345&x346)<=x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	static int16_t x351 = INT16_MAX;
	static int32_t t87 = -10006106;

	t87 = (((x349&x350)<=x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -1LL;
	uint8_t x354 = 3U;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;

	t88 = (((x353&x354)<=x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = -1;
	uint64_t x358 = UINT64_MAX;
	volatile int32_t x359 = -3140776;
	int8_t x360 = INT8_MIN;

	t89 = (((x357&x358)<=x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 10U;
	uint64_t x362 = 3025LLU;
	int32_t x363 = INT32_MIN;
	volatile int32_t x364 = INT32_MIN;
	static int32_t t90 = -64993179;

	t90 = (((x361&x362)<=x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = INT16_MIN;
	static int64_t x368 = INT64_MIN;

	t91 = (((x365&x366)<=x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MIN;
	uint8_t x370 = UINT8_MAX;
	int16_t x371 = -34;
	static int32_t x372 = INT32_MAX;
	int32_t t92 = -282;

	t92 = (((x369&x370)<=x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 0U;
	uint64_t x374 = 15719973863573LLU;
	int8_t x375 = INT8_MIN;
	uint8_t x376 = 20U;
	volatile int32_t t93 = -29675;

	t93 = (((x373&x374)<=x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 9LLU;
	uint32_t x378 = 48267U;
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 125U;
	int32_t t94 = 1024025110;

	t94 = (((x377&x378)<=x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 7476419LL;
	int32_t x382 = INT32_MAX;
	static int8_t x383 = INT8_MAX;

	t95 = (((x381&x382)<=x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	static uint8_t x386 = 7U;
	static volatile uint64_t x388 = 42350589018495LLU;
	volatile int32_t t96 = 5609656;

	t96 = (((x385&x386)<=x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 98324U;
	int32_t x390 = INT32_MIN;
	int8_t x391 = 6;
	int16_t x392 = -1;
	int32_t t97 = -11888;

	t97 = (((x389&x390)<=x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -2760115099LL;
	int8_t x394 = -26;
	int16_t x395 = INT16_MIN;
	uint16_t x396 = 12U;
	volatile int32_t t98 = 2727;

	t98 = (((x393&x394)<=x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x397 = UINT32_MAX;
	int16_t x398 = 5;
	volatile int64_t x399 = INT64_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t99 = 822335032;

	t99 = (((x397&x398)<=x399)<x400);

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

