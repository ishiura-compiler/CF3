#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -1LL;
int32_t x17 = INT32_MIN;
uint8_t x23 = UINT8_MAX;
volatile uint8_t x28 = 7U;
int64_t x30 = -1LL;
volatile int8_t x39 = INT8_MAX;
int16_t x40 = -5893;
uint16_t x42 = 10U;
volatile uint16_t x43 = 0U;
volatile uint8_t x47 = UINT8_MAX;
int64_t x49 = -1LL;
volatile int32_t t12 = 113518994;
int32_t x57 = 40420;
uint32_t x59 = UINT32_MAX;
static int8_t x62 = -3;
int8_t x67 = -1;
volatile uint64_t x76 = 16854576144LLU;
static int16_t x78 = -4;
volatile int64_t x79 = 583665105377LL;
int32_t x81 = INT32_MIN;
uint32_t x85 = UINT32_MAX;
int32_t t21 = -8458;
int8_t x89 = -14;
int32_t x98 = INT32_MIN;
int64_t x104 = -1LL;
static uint8_t x114 = UINT8_MAX;
int8_t x116 = 4;
int64_t x117 = -199LL;
int8_t x120 = -3;
static int8_t x122 = 4;
int8_t x141 = INT8_MAX;
uint8_t x143 = 2U;
uint32_t x147 = UINT32_MAX;
volatile int64_t x148 = INT64_MAX;
int8_t x155 = INT8_MIN;
int32_t x159 = INT32_MIN;
static int32_t t39 = -26776;
static int64_t x164 = 3412267892038494327LL;
volatile int32_t t40 = -956;
uint32_t x170 = 1U;
static uint16_t x175 = 105U;
static volatile int32_t t43 = 30651;
uint64_t x193 = 79547771LLU;
int8_t x205 = INT8_MAX;
int8_t x206 = -1;
static int8_t x212 = -2;
volatile uint32_t x225 = 537963809U;
volatile int32_t t56 = 878;
uint16_t x232 = 35U;
int8_t x233 = -1;
int32_t t58 = -545459;
volatile int8_t x244 = -1;
int64_t x256 = INT64_MIN;
uint64_t x260 = UINT64_MAX;
static int32_t x261 = -1;
uint64_t x269 = 6829009LLU;
int64_t x271 = 10285282312262LL;
int64_t x273 = INT64_MIN;
int8_t x275 = 4;
int64_t x281 = 267484825098376LL;
volatile int32_t x282 = INT32_MIN;
static volatile int8_t x284 = -7;
int32_t t70 = -556255741;
int8_t x285 = INT8_MAX;
static uint32_t x286 = 22871U;
int16_t x287 = INT16_MIN;
int64_t x288 = -3031349LL;
int64_t x308 = -1LL;
static volatile int16_t x313 = INT16_MIN;
volatile uint8_t x324 = 126U;
uint16_t x325 = UINT16_MAX;
volatile int32_t t81 = -3;
int32_t t82 = 6962;
int32_t t83 = -12643090;
int8_t x338 = -1;
volatile int32_t t84 = 443;
static int64_t x344 = INT64_MIN;
int16_t x349 = -1;
volatile int32_t t87 = -64793;
int16_t x356 = INT16_MAX;
int16_t x358 = -1;
volatile int32_t t91 = -39;
int16_t x369 = -13567;
static uint32_t x379 = UINT32_MAX;
uint8_t x380 = 2U;
uint32_t x389 = 6307986U;
volatile int32_t t98 = -8;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int32_t x2 = INT32_MAX;
	int32_t x3 = -1;
	volatile uint64_t x4 = 4LLU;
	volatile int32_t t0 = -7674;

	t0 = (x1==((x2&x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int8_t x6 = 3;
	volatile int8_t x7 = INT8_MAX;
	uint64_t x8 = 4497691752LLU;
	volatile int32_t t1 = 7513;

	t1 = (x5==((x6&x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = -1LL;
	static int8_t x10 = INT8_MIN;
	static int32_t x12 = INT32_MIN;
	int32_t t2 = -641;

	t2 = (x9==((x10&x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1653;
	static uint16_t x14 = UINT16_MAX;
	static int16_t x15 = INT16_MIN;
	uint64_t x16 = UINT64_MAX;
	static int32_t t3 = 6403581;

	t3 = (x13==((x14&x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 14522U;
	int64_t x19 = 165199LL;
	volatile int64_t x20 = 2288142990667598891LL;
	int32_t t4 = 342890724;

	t4 = (x17==((x18&x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 6;
	uint16_t x22 = 540U;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -318458;

	t5 = (x21==((x22&x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = -1;
	uint16_t x26 = 81U;
	uint64_t x27 = UINT64_MAX;
	int32_t t6 = 156668933;

	t6 = (x25==((x26&x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x31 = 61U;
	uint32_t x32 = 32283629U;
	static volatile int32_t t7 = -2199340;

	t7 = (x29==((x30&x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	uint16_t x34 = UINT16_MAX;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -3181200;

	t8 = (x33==((x34&x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 19;
	int16_t x38 = INT16_MIN;
	volatile int32_t t9 = 27;

	t9 = (x37==((x38&x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = INT8_MIN;
	volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 265365;

	t10 = (x41==((x42&x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	volatile int64_t x46 = INT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -65378218;

	t11 = (x45==((x46&x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = 0;
	static uint8_t x51 = 31U;
	int64_t x52 = INT64_MIN;

	t12 = (x49==((x50&x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int16_t x54 = INT16_MIN;
	static volatile int16_t x55 = -1;
	volatile uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -535;

	t13 = (x53==((x54&x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 31;
	int8_t x60 = 0;
	volatile int32_t t14 = 164135323;

	t14 = (x57==((x58&x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x61 = INT64_MIN;
	static uint8_t x63 = 49U;
	int16_t x64 = -1;
	int32_t t15 = 974;

	t15 = (x61==((x62&x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int8_t x66 = 1;
	static int16_t x68 = INT16_MIN;
	static int32_t t16 = 1;

	t16 = (x65==((x66&x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = 49;
	volatile uint16_t x71 = UINT16_MAX;
	int64_t x72 = -1LL;
	static int32_t t17 = 61;

	t17 = (x69==((x70&x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = 7U;
	volatile uint32_t x74 = 12U;
	uint64_t x75 = 1216968361330156417LLU;
	int32_t t18 = 0;

	t18 = (x73==((x74&x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -1431;
	volatile int16_t x80 = -1;
	volatile int32_t t19 = 6647;

	t19 = (x77==((x78&x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	static uint64_t x83 = 52823LLU;
	volatile int8_t x84 = -1;
	int32_t t20 = -53;

	t20 = (x81==((x82&x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = 167646821LL;
	int64_t x88 = INT64_MIN;

	t21 = (x85==((x86&x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x90 = INT32_MAX;
	static volatile int8_t x91 = -47;
	uint64_t x92 = UINT64_MAX;
	static int32_t t22 = 167910;

	t22 = (x89==((x90&x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	static uint32_t x94 = 15U;
	int8_t x95 = 14;
	int16_t x96 = 3632;
	static int32_t t23 = -4568884;

	t23 = (x93==((x94&x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static uint8_t x99 = 4U;
	int16_t x100 = 120;
	int32_t t24 = 56810;

	t24 = (x97==((x98&x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = -94993;
	int32_t x103 = 7837;
	static int32_t t25 = 6494349;

	t25 = (x101==((x102&x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	volatile uint64_t x106 = 62LLU;
	volatile uint32_t x107 = 2U;
	int64_t x108 = -1LL;
	static volatile int32_t t26 = 129408;

	t26 = (x105==((x106&x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int32_t x110 = -1;
	static uint16_t x111 = 2U;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 0;

	t27 = (x109==((x110&x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 40U;
	volatile int16_t x115 = INT16_MAX;
	int32_t t28 = -52;

	t28 = (x113==((x114&x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MIN;
	static uint64_t x119 = 1033294390950LLU;
	volatile int32_t t29 = -164641;

	t29 = (x117==((x118&x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MIN;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 0;

	t30 = (x121==((x122&x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	static uint32_t x126 = 11U;
	uint8_t x127 = 1U;
	int8_t x128 = 1;
	volatile int32_t t31 = 7;

	t31 = (x125==((x126&x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 2U;
	uint8_t x130 = 1U;
	static int32_t x131 = INT32_MIN;
	int8_t x132 = 7;
	volatile int32_t t32 = -1787;

	t32 = (x129==((x130&x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 3947;
	volatile int16_t x134 = INT16_MIN;
	volatile uint16_t x135 = 37U;
	int8_t x136 = INT8_MAX;
	int32_t t33 = -26;

	t33 = (x133==((x134&x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 1U;
	uint8_t x138 = 1U;
	int16_t x139 = 10634;
	volatile int32_t x140 = -1;
	int32_t t34 = 245783275;

	t34 = (x137==((x138&x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = 507308808632LLU;
	volatile int64_t x144 = INT64_MIN;
	int32_t t35 = 128103;

	t35 = (x141==((x142&x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -209;
	volatile int16_t x146 = INT16_MIN;
	volatile int32_t t36 = -91;

	t36 = (x145==((x146&x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = 2027;
	int8_t x150 = 3;
	int16_t x151 = 204;
	uint32_t x152 = 492319337U;
	volatile int32_t t37 = -205;

	t37 = (x149==((x150&x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 1;
	uint16_t x154 = 7U;
	int16_t x156 = INT16_MIN;
	static int32_t t38 = 20178;

	t38 = (x153==((x154&x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x158 = -1;
	volatile uint16_t x160 = 13U;

	t39 = (x157==((x158&x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -10;
	static uint64_t x162 = 105239LLU;
	volatile uint16_t x163 = UINT16_MAX;

	t40 = (x161==((x162&x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = 2U;
	int32_t x166 = INT32_MAX;
	uint64_t x167 = 1653LLU;
	uint8_t x168 = 2U;
	static int32_t t41 = 362872148;

	t41 = (x165==((x166&x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	volatile uint64_t x171 = 22LLU;
	static int8_t x172 = INT8_MIN;
	int32_t t42 = -1048187;

	t42 = (x169==((x170&x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -4;
	uint32_t x174 = 12965U;
	int16_t x176 = 2;

	t43 = (x173==((x174&x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	volatile int32_t x178 = INT32_MAX;
	uint8_t x179 = 29U;
	volatile uint8_t x180 = 0U;
	int32_t t44 = 12;

	t44 = (x177==((x178&x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = 124U;
	volatile uint32_t x182 = UINT32_MAX;
	volatile int64_t x183 = 18033LL;
	volatile uint64_t x184 = UINT64_MAX;
	volatile int32_t t45 = -16;

	t45 = (x181==((x182&x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 912567U;
	int16_t x186 = 3058;
	static uint16_t x187 = UINT16_MAX;
	volatile uint16_t x188 = 16120U;
	volatile int32_t t46 = -112686493;

	t46 = (x185==((x186&x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	volatile int8_t x190 = 22;
	int32_t x191 = INT32_MIN;
	volatile uint64_t x192 = 104959LLU;
	volatile int32_t t47 = 2197;

	t47 = (x189==((x190&x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x194 = UINT16_MAX;
	int32_t x195 = INT32_MAX;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -1191199;

	t48 = (x193==((x194&x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 10U;
	static int64_t x198 = 3540058792058LL;
	int32_t x199 = 24534439;
	volatile int16_t x200 = -11;
	volatile int32_t t49 = 926835;

	t49 = (x197==((x198&x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int32_t x202 = -1;
	volatile int64_t x203 = INT64_MIN;
	int16_t x204 = -1;
	volatile int32_t t50 = 1;

	t50 = (x201==((x202&x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = -1;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -1007;

	t51 = (x205==((x206&x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int16_t x210 = INT16_MAX;
	uint32_t x211 = 3354492U;
	int32_t t52 = -872404992;

	t52 = (x209==((x210&x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	volatile int32_t x214 = INT32_MIN;
	volatile int16_t x215 = -79;
	static int16_t x216 = -1436;
	volatile int32_t t53 = -225394354;

	t53 = (x213==((x214&x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 13833U;
	static int8_t x218 = INT8_MIN;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = 62;
	volatile int32_t t54 = -54423198;

	t54 = (x217==((x218&x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int32_t x222 = -43644419;
	int16_t x223 = INT16_MIN;
	uint8_t x224 = 35U;
	volatile int32_t t55 = 97;

	t55 = (x221==((x222&x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = -22;
	static int32_t x227 = 260788249;
	int64_t x228 = INT64_MIN;

	t56 = (x225==((x226&x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	static uint32_t x230 = UINT32_MAX;
	volatile int16_t x231 = 14580;
	static int32_t t57 = -5964;

	t57 = (x229==((x230&x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = 12178308953481LL;
	uint32_t x235 = UINT32_MAX;
	static int16_t x236 = 74;

	t58 = (x233==((x234&x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	volatile uint64_t x238 = 1LLU;
	uint16_t x239 = UINT16_MAX;
	int16_t x240 = -1;
	volatile int32_t t59 = 255128165;

	t59 = (x237==((x238&x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	int8_t x242 = 0;
	int64_t x243 = -1LL;
	volatile int32_t t60 = -1;

	t60 = (x241==((x242&x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	static uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -1;
	int32_t t61 = -1;

	t61 = (x245==((x246&x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 227;
	volatile int32_t x250 = 2;
	int32_t x251 = -8822;
	volatile uint64_t x252 = UINT64_MAX;
	int32_t t62 = 2054;

	t62 = (x249==((x250&x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	volatile uint64_t x254 = 138115237532934LLU;
	int8_t x255 = -1;
	volatile int32_t t63 = 7;

	t63 = (x253==((x254&x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	uint32_t x258 = 53279U;
	static volatile uint64_t x259 = UINT64_MAX;
	int32_t t64 = -508134700;

	t64 = (x257==((x258&x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = 3011;
	int32_t x263 = INT32_MIN;
	static int8_t x264 = -1;
	int32_t t65 = -30;

	t65 = (x261==((x262&x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MAX;
	volatile uint16_t x268 = UINT16_MAX;
	static volatile int32_t t66 = 3377042;

	t66 = (x265==((x266&x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x270 = 1214U;
	static volatile int32_t x272 = INT32_MAX;
	static int32_t t67 = 7762624;

	t67 = (x269==((x270&x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = -1LL;
	uint16_t x276 = UINT16_MAX;
	int32_t t68 = 7817;

	t68 = (x273==((x274&x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 424;
	uint16_t x278 = UINT16_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int32_t x280 = -1;
	int32_t t69 = 8;

	t69 = (x277==((x278&x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x283 = 0U;

	t70 = (x281==((x282&x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t t71 = -3;

	t71 = (x285==((x286&x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	uint8_t x290 = UINT8_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	int16_t x292 = 0;
	volatile int32_t t72 = -7089;

	t72 = (x289==((x290&x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	uint64_t x294 = UINT64_MAX;
	int64_t x295 = INT64_MIN;
	static int64_t x296 = 641LL;
	volatile int32_t t73 = -4;

	t73 = (x293==((x294&x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static uint16_t x298 = 30084U;
	int16_t x299 = INT16_MIN;
	static int32_t x300 = -80086;
	int32_t t74 = 6;

	t74 = (x297==((x298&x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MIN;
	volatile uint8_t x303 = 63U;
	int64_t x304 = INT64_MIN;
	int32_t t75 = 223;

	t75 = (x301==((x302&x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MAX;
	volatile uint32_t x307 = 751641U;
	volatile int32_t t76 = -238;

	t76 = (x305==((x306&x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int16_t x310 = INT16_MIN;
	static uint8_t x311 = 53U;
	int16_t x312 = -1;
	int32_t t77 = -18687;

	t77 = (x309==((x310&x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	int16_t x315 = 6363;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 795196549;

	t78 = (x313==((x314&x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	static uint16_t x318 = UINT16_MAX;
	int16_t x319 = -1;
	int16_t x320 = -1;
	volatile int32_t t79 = 3;

	t79 = (x317==((x318&x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	volatile int64_t x322 = -477780556728835017LL;
	int16_t x323 = -1;
	int32_t t80 = -7188;

	t80 = (x321==((x322&x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = -1;
	volatile int64_t x327 = -1LL;
	static int8_t x328 = INT8_MAX;

	t81 = (x325==((x326&x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	volatile uint64_t x330 = 409LLU;
	int32_t x331 = -1037357981;
	int32_t x332 = INT32_MIN;

	t82 = (x329==((x330&x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x333 = INT32_MIN;
	uint16_t x334 = 2468U;
	int8_t x335 = INT8_MIN;
	volatile int32_t x336 = INT32_MIN;

	t83 = (x333==((x334&x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int32_t x339 = INT32_MIN;
	int32_t x340 = -4084;

	t84 = (x337==((x338&x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 32U;
	int64_t x342 = INT64_MAX;
	volatile int64_t x343 = INT64_MIN;
	int32_t t85 = -7850759;

	t85 = (x341==((x342&x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = -1;
	static int16_t x347 = 31;
	static int8_t x348 = INT8_MIN;
	static volatile int32_t t86 = 1;

	t86 = (x345==((x346&x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MIN;
	volatile uint8_t x351 = 12U;
	static int16_t x352 = INT16_MAX;

	t87 = (x349==((x350&x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	volatile int64_t x354 = INT64_MIN;
	static uint64_t x355 = 100633115LLU;
	static int32_t t88 = 14482;

	t88 = (x353==((x354&x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MAX;
	int16_t x359 = INT16_MIN;
	static int16_t x360 = INT16_MAX;
	static volatile int32_t t89 = -1;

	t89 = (x357==((x358&x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 232LLU;
	uint16_t x362 = 0U;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -1566;
	static volatile int32_t t90 = 1164071;

	t90 = (x361==((x362&x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = UINT8_MAX;
	volatile int8_t x366 = INT8_MAX;
	int16_t x367 = 81;
	int32_t x368 = -2;

	t91 = (x365==((x366&x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x370 = UINT8_MAX;
	static int8_t x371 = -1;
	int32_t x372 = -1;
	int32_t t92 = 498;

	t92 = (x369==((x370&x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	volatile int16_t x374 = -1;
	uint8_t x375 = 27U;
	int32_t x376 = INT32_MIN;
	int32_t t93 = -92762066;

	t93 = (x373==((x374&x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -29400321266LL;
	int32_t t94 = -13340;

	t94 = (x377==((x378&x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 22U;
	int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	static int8_t x384 = -1;
	int32_t t95 = 349685422;

	t95 = (x381==((x382&x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 1LL;
	int64_t x386 = -1LL;
	int16_t x387 = -1;
	int8_t x388 = -9;
	int32_t t96 = 0;

	t96 = (x385==((x386&x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = 63112235LL;
	int32_t t97 = 328282;

	t97 = (x389==((x390&x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	volatile uint64_t x394 = 14644906524928458LLU;
	int32_t x395 = -1;
	int16_t x396 = 196;

	t98 = (x393==((x394&x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MAX;
	int32_t x399 = -1;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = 1449784;

	t99 = (x397==((x398&x399)<x400));

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

