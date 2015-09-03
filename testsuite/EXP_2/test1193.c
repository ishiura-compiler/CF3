#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x6 = UINT64_MAX;
int16_t x13 = 3;
int32_t x17 = INT32_MAX;
int16_t x22 = INT16_MAX;
int64_t x24 = -58378735410LL;
static uint16_t x30 = UINT16_MAX;
int32_t x36 = -668104;
int32_t t10 = -592;
uint32_t x54 = 9253588U;
volatile int16_t x55 = INT16_MIN;
volatile int8_t x60 = 1;
volatile uint64_t x66 = 3LLU;
uint8_t x68 = UINT8_MAX;
volatile uint32_t x72 = 1973U;
static int16_t x73 = INT16_MAX;
int8_t x89 = INT8_MAX;
uint16_t x91 = 27U;
int32_t x92 = -14573;
static uint16_t x99 = 32U;
int32_t t24 = 9921928;
volatile int32_t x106 = INT32_MAX;
int32_t x108 = INT32_MIN;
volatile int32_t t27 = -35117;
uint64_t x115 = 72689LLU;
uint16_t x119 = UINT16_MAX;
int8_t x125 = INT8_MIN;
int8_t x132 = INT8_MIN;
uint8_t x133 = 106U;
int16_t x135 = 11048;
int64_t x136 = 1150154725215LL;
int64_t x145 = -1LL;
volatile int32_t t36 = -1177;
int8_t x151 = 1;
volatile int32_t x160 = 47416;
static volatile int64_t x164 = 7LL;
static int16_t x165 = INT16_MIN;
uint16_t x180 = 949U;
int32_t t44 = -1;
uint8_t x192 = 32U;
int32_t t49 = -6;
int64_t x205 = 495304LL;
static int32_t x208 = -1;
int64_t x213 = INT64_MAX;
int32_t x218 = 22365;
static int32_t t54 = -3;
int8_t x228 = INT8_MIN;
static int64_t x229 = INT64_MAX;
int16_t x233 = -1;
volatile uint8_t x234 = 5U;
uint32_t x240 = 30015U;
int32_t t59 = 538;
volatile int32_t t61 = -228283426;
int32_t t64 = -107;
uint32_t x265 = UINT32_MAX;
uint8_t x266 = 30U;
int32_t x274 = INT32_MAX;
volatile uint8_t x278 = 1U;
volatile int64_t x279 = INT64_MIN;
volatile int16_t x283 = -1;
static volatile int64_t x284 = INT64_MIN;
int32_t t70 = 6905;
static volatile int32_t t71 = 15;
uint64_t x289 = 1301275123694885LLU;
int16_t x293 = 5208;
int64_t x315 = 91LL;
int16_t x323 = INT16_MIN;
int32_t x331 = INT32_MIN;
volatile int16_t x333 = INT16_MIN;
volatile int32_t t86 = 1767;
volatile uint16_t x349 = UINT16_MAX;
volatile int32_t t87 = 537;
uint8_t x353 = UINT8_MAX;
int16_t x355 = INT16_MIN;
static volatile int32_t t88 = -35;
static int32_t x357 = 0;
int64_t x362 = 35142521066525LL;
volatile int32_t t90 = -112688125;
static int32_t x373 = 61;
static uint8_t x374 = UINT8_MAX;
volatile int8_t x377 = INT8_MAX;
uint8_t x381 = UINT8_MAX;
int32_t t96 = 2512;
uint32_t x390 = UINT32_MAX;
int16_t x394 = INT16_MIN;
int64_t x399 = INT64_MAX;
int64_t x400 = -1LL;
static int32_t t99 = -1;


void f0(void) {
	int8_t x1 = -26;
	int16_t x2 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	static uint64_t x4 = 454188577591LLU;
	int32_t t0 = 3448;

	t0 = ((x1+(x2==x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile int64_t x7 = INT64_MAX;
	uint8_t x8 = 44U;
	volatile int32_t t1 = -934;

	t1 = ((x5+(x6==x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 3;
	int16_t x10 = -1;
	volatile uint32_t x11 = 1739U;
	static uint32_t x12 = 44U;
	int32_t t2 = 226711074;

	t2 = ((x9+(x10==x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 6686U;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MIN;
	int32_t t3 = 10;

	t3 = ((x13+(x14==x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = INT8_MAX;
	int16_t x19 = INT16_MIN;
	static int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -5;

	t4 = ((x17+(x18==x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -12LL;
	uint16_t x23 = 1U;
	volatile int32_t t5 = 1;

	t5 = ((x21+(x22==x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = UINT16_MAX;
	int16_t x27 = INT16_MIN;
	static int8_t x28 = -11;
	volatile int32_t t6 = 63614236;

	t6 = ((x25+(x26==x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -728;
	int8_t x31 = -1;
	volatile int32_t x32 = 7174616;
	volatile int32_t t7 = -22467;

	t7 = ((x29+(x30==x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static int16_t x34 = -1;
	int16_t x35 = INT16_MIN;
	volatile int32_t t8 = 8069;

	t8 = ((x33+(x34==x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -25;
	int16_t x38 = -130;
	static volatile int32_t x39 = INT32_MAX;
	volatile uint64_t x40 = 2921LLU;
	int32_t t9 = 2;

	t9 = ((x37+(x38==x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	uint64_t x42 = UINT64_MAX;
	static int16_t x43 = INT16_MAX;
	static int16_t x44 = INT16_MAX;

	t10 = ((x41+(x42==x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 75538329U;
	int64_t x46 = -4192866160380LL;
	static int8_t x47 = 5;
	volatile int64_t x48 = INT64_MIN;
	volatile int32_t t11 = -291605034;

	t11 = ((x45+(x46==x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	static volatile uint64_t x51 = 41142LLU;
	int16_t x52 = 14;
	int32_t t12 = -96921945;

	t12 = ((x49+(x50==x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MAX;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -14593;

	t13 = ((x53+(x54==x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	uint16_t x58 = 656U;
	uint32_t x59 = 4748U;
	int32_t t14 = 0;

	t14 = ((x57+(x58==x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	int8_t x62 = INT8_MAX;
	int16_t x63 = -20;
	int32_t x64 = -1;
	static volatile int32_t t15 = 53;

	t15 = ((x61+(x62==x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	static int64_t x67 = -1LL;
	volatile int32_t t16 = 1509;

	t16 = ((x65+(x66==x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	static uint32_t x70 = UINT32_MAX;
	volatile uint8_t x71 = 27U;
	static volatile int32_t t17 = -120133;

	t17 = ((x69+(x70==x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = UINT8_MAX;
	static int64_t x75 = 16308265385116496LL;
	static volatile uint16_t x76 = 364U;
	volatile int32_t t18 = 0;

	t18 = ((x73+(x74==x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint32_t x78 = UINT32_MAX;
	static int32_t x79 = -7754564;
	static volatile int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = 11;

	t19 = ((x77+(x78==x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MIN;
	static int16_t x83 = INT16_MIN;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = -47;

	t20 = ((x81+(x82==x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 8225;
	static int16_t x86 = INT16_MIN;
	uint64_t x87 = 41768283LLU;
	int16_t x88 = -1;
	volatile int32_t t21 = -15320;

	t21 = ((x85+(x86==x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x90 = 954U;
	int32_t t22 = 54502;

	t22 = ((x89+(x90==x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 6U;
	volatile int16_t x94 = -1;
	uint8_t x95 = UINT8_MAX;
	static int16_t x96 = INT16_MAX;
	int32_t t23 = -3;

	t23 = ((x93+(x94==x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MAX;
	int8_t x98 = INT8_MIN;
	int16_t x100 = INT16_MAX;

	t24 = ((x97+(x98==x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -1;
	uint8_t x102 = 73U;
	int32_t x103 = -1;
	static volatile uint64_t x104 = 10420035297287LLU;
	int32_t t25 = 144191858;

	t25 = ((x101+(x102==x103))<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 8U;
	int64_t x107 = INT64_MIN;
	static int32_t t26 = -787;

	t26 = ((x105+(x106==x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 1LLU;
	int16_t x110 = INT16_MIN;
	int64_t x111 = 253041LL;
	uint32_t x112 = 651424706U;

	t27 = ((x109+(x110==x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	uint32_t x114 = 2077052308U;
	int8_t x116 = -1;
	int32_t t28 = 937;

	t28 = ((x113+(x114==x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 24;
	uint32_t x118 = UINT32_MAX;
	int64_t x120 = -91281783256LL;
	volatile int32_t t29 = 14527095;

	t29 = ((x117+(x118==x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MIN;
	int16_t x123 = -490;
	volatile int16_t x124 = INT16_MAX;
	int32_t t30 = 1629543;

	t30 = ((x121+(x122==x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x126 = INT16_MIN;
	static volatile int64_t x127 = INT64_MAX;
	static uint32_t x128 = 24311U;
	volatile int32_t t31 = -244472331;

	t31 = ((x125+(x126==x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -54;
	static int16_t x130 = -1;
	static volatile uint16_t x131 = 5U;
	int32_t t32 = 749;

	t32 = ((x129+(x130==x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 11623;
	volatile int32_t t33 = -22498;

	t33 = ((x133+(x134==x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -19LL;
	uint32_t x138 = 2U;
	int8_t x139 = 1;
	int64_t x140 = INT64_MIN;
	int32_t t34 = -1;

	t34 = ((x137+(x138==x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 375U;
	static int32_t x142 = INT32_MIN;
	static volatile uint64_t x143 = UINT64_MAX;
	static uint64_t x144 = 396973662927LLU;
	int32_t t35 = 32719200;

	t35 = ((x141+(x142==x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x146 = 1301989869261LLU;
	volatile uint16_t x147 = 29385U;
	volatile int8_t x148 = 26;

	t36 = ((x145+(x146==x147))<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	volatile uint32_t x150 = 7U;
	static int64_t x152 = INT64_MIN;
	int32_t t37 = -86134655;

	t37 = ((x149+(x150==x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 16;
	uint16_t x154 = UINT16_MAX;
	volatile int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t38 = 190630;

	t38 = ((x153+(x154==x155))<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int16_t x158 = -1;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t t39 = -19476095;

	t39 = ((x157+(x158==x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = -1;
	uint64_t x163 = UINT64_MAX;
	static volatile int32_t t40 = 1;

	t40 = ((x161+(x162==x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x166 = -1;
	volatile int8_t x167 = -15;
	volatile int64_t x168 = -1100805455191091808LL;
	int32_t t41 = 64786;

	t41 = ((x165+(x166==x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MAX;
	int8_t x170 = 0;
	volatile int32_t x171 = INT32_MIN;
	int64_t x172 = -7118396783992LL;
	static volatile int32_t t42 = 0;

	t42 = ((x169+(x170==x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int64_t x174 = 1187475LL;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = -11836;
	volatile int32_t t43 = 99285;

	t43 = ((x173+(x174==x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = -2897509967942LL;
	int8_t x179 = INT8_MIN;

	t44 = ((x177+(x178==x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	static int32_t x182 = INT32_MAX;
	int64_t x183 = -9LL;
	static uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 1371;

	t45 = ((x181+(x182==x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 28;
	static int64_t x186 = -88924839600LL;
	int64_t x187 = -38046LL;
	int16_t x188 = 374;
	int32_t t46 = 21;

	t46 = ((x185+(x186==x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = 3;
	int8_t x190 = -43;
	volatile int16_t x191 = INT16_MAX;
	int32_t t47 = -208583;

	t47 = ((x189+(x190==x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = UINT32_MAX;
	int64_t x194 = INT64_MIN;
	int16_t x195 = -1;
	int32_t x196 = -1;
	volatile int32_t t48 = 0;

	t48 = ((x193+(x194==x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 420437240866LLU;
	int64_t x198 = INT64_MIN;
	uint32_t x199 = UINT32_MAX;
	int16_t x200 = INT16_MAX;

	t49 = ((x197+(x198==x199))<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 209U;
	uint32_t x202 = 10U;
	uint8_t x203 = 67U;
	uint64_t x204 = 9289756421LLU;
	int32_t t50 = -199;

	t50 = ((x201+(x202==x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x206 = -1;
	uint8_t x207 = 35U;
	int32_t t51 = 1159;

	t51 = ((x205+(x206==x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -230094;
	uint64_t x210 = 525844016980389743LLU;
	volatile int16_t x211 = INT16_MIN;
	volatile uint32_t x212 = 22745562U;
	volatile int32_t t52 = -644;

	t52 = ((x209+(x210==x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x214 = 24854353LL;
	int8_t x215 = INT8_MAX;
	uint64_t x216 = 173LLU;
	static int32_t t53 = -5;

	t53 = ((x213+(x214==x215))<=x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	volatile int16_t x219 = 1;
	volatile int8_t x220 = 50;

	t54 = ((x217+(x218==x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	volatile uint32_t x222 = 742249U;
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = -1;
	static volatile int32_t t55 = 3670;

	t55 = ((x221+(x222==x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	int64_t x226 = INT64_MIN;
	int8_t x227 = -1;
	volatile int32_t t56 = 0;

	t56 = ((x225+(x226==x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x230 = 87776757860LL;
	uint64_t x231 = 164608918465619187LLU;
	uint64_t x232 = 1318LLU;
	static volatile int32_t t57 = -1199;

	t57 = ((x229+(x230==x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x235 = -30571557373825679LL;
	int64_t x236 = -1LL;
	static volatile int32_t t58 = -41;

	t58 = ((x233+(x234==x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -15600;
	uint32_t x238 = 192U;
	static int64_t x239 = -6521LL;

	t59 = ((x237+(x238==x239))<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	volatile int64_t x242 = INT64_MAX;
	volatile int16_t x243 = INT16_MIN;
	int32_t x244 = -92;
	volatile int32_t t60 = -3991958;

	t60 = ((x241+(x242==x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int64_t x246 = INT64_MIN;
	static volatile int16_t x247 = INT16_MIN;
	volatile uint64_t x248 = 19707441475447LLU;

	t61 = ((x245+(x246==x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 40U;
	int64_t x250 = 5527630563LL;
	volatile uint32_t x251 = 804819U;
	uint16_t x252 = 28074U;
	int32_t t62 = 44358;

	t62 = ((x249+(x250==x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	int32_t x255 = -6;
	volatile int64_t x256 = 1322166998LL;
	int32_t t63 = -536057;

	t63 = ((x253+(x254==x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MAX;
	int64_t x258 = INT64_MAX;
	uint32_t x259 = 13175364U;
	uint8_t x260 = 1U;

	t64 = ((x257+(x258==x259))<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 0U;
	uint16_t x262 = 229U;
	uint8_t x263 = UINT8_MAX;
	static int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = -232;

	t65 = ((x261+(x262==x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x267 = INT32_MAX;
	static int8_t x268 = -1;
	int32_t t66 = -15707772;

	t66 = ((x265+(x266==x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -100LL;
	int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MIN;
	int64_t x272 = 297707LL;
	int32_t t67 = 8982363;

	t67 = ((x269+(x270==x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	uint8_t x275 = 0U;
	volatile uint8_t x276 = 0U;
	volatile int32_t t68 = 3554;

	t68 = ((x273+(x274==x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	uint32_t x280 = 0U;
	volatile int32_t t69 = -1;

	t69 = ((x277+(x278==x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x282 = -1;

	t70 = ((x281+(x282==x283))<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1LL;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 31956U;
	static int8_t x288 = -31;

	t71 = ((x285+(x286==x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = 10141U;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;
	int32_t t72 = -218375801;

	t72 = ((x289+(x290==x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 6U;
	static int16_t x295 = 1;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -472256;

	t73 = ((x293+(x294==x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MIN;
	volatile uint64_t x298 = 50788LLU;
	int32_t x299 = INT32_MAX;
	int8_t x300 = 15;
	volatile int32_t t74 = 1783;

	t74 = ((x297+(x298==x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = -267;
	int64_t x303 = INT64_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t75 = -440;

	t75 = ((x301+(x302==x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	int16_t x306 = -2;
	int16_t x307 = INT16_MIN;
	static uint64_t x308 = UINT64_MAX;
	int32_t t76 = 3;

	t76 = ((x305+(x306==x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -1;
	static int8_t x310 = INT8_MAX;
	int32_t x311 = INT32_MIN;
	volatile int16_t x312 = 0;
	volatile int32_t t77 = 71;

	t77 = ((x309+(x310==x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	uint64_t x316 = 9042978161080290291LLU;
	int32_t t78 = -1287077;

	t78 = ((x313+(x314==x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 26682129U;
	static uint16_t x318 = UINT16_MAX;
	int64_t x319 = 473529LL;
	int32_t x320 = 1;
	int32_t t79 = 1;

	t79 = ((x317+(x318==x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	uint64_t x322 = 54650512404619LLU;
	uint8_t x324 = 54U;
	int32_t t80 = 8056;

	t80 = ((x321+(x322==x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -661;
	int64_t x326 = 442641639874LL;
	uint64_t x327 = 17LLU;
	volatile int32_t x328 = INT32_MIN;
	int32_t t81 = 26641;

	t81 = ((x325+(x326==x327))<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MIN;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = -162;

	t82 = ((x329+(x330==x331))<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 1465U;
	static int16_t x335 = INT16_MIN;
	int64_t x336 = -166584279LL;
	int32_t t83 = 0;

	t83 = ((x333+(x334==x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -5804382868091606LL;
	uint32_t x338 = UINT32_MAX;
	uint8_t x339 = 1U;
	int64_t x340 = -2791LL;
	volatile int32_t t84 = 250439925;

	t84 = ((x337+(x338==x339))<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = 14;
	volatile int16_t x343 = 0;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 185182;

	t85 = ((x341+(x342==x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 782761U;
	volatile int64_t x346 = -6464980849LL;
	int8_t x347 = INT8_MAX;
	uint64_t x348 = UINT64_MAX;

	t86 = ((x345+(x346==x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -4;
	int64_t x351 = 1695143LL;
	int32_t x352 = 4375;

	t87 = ((x349+(x350==x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = 26;
	int32_t x356 = -1;

	t88 = ((x353+(x354==x355))<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = -27817356135508LL;
	int64_t x359 = INT64_MIN;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t89 = 118;

	t89 = ((x357+(x358==x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -87;
	volatile uint8_t x363 = 51U;
	int16_t x364 = 19;

	t90 = ((x361+(x362==x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 3;
	int16_t x366 = -1;
	uint32_t x367 = 1U;
	volatile uint8_t x368 = 116U;
	volatile int32_t t91 = -201562;

	t91 = ((x365+(x366==x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = 7404;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = 493;

	t92 = ((x369+(x370==x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x375 = INT16_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t93 = -115477368;

	t93 = ((x373+(x374==x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x378 = INT32_MIN;
	int64_t x379 = 112355709LL;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = -189053229;

	t94 = ((x377+(x378==x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = 816LLU;
	int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MAX;
	static int32_t t95 = 4143;

	t95 = ((x381+(x382==x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -1LL;
	int16_t x386 = INT16_MIN;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = 804U;

	t96 = ((x385+(x386==x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x389 = -1;
	int8_t x391 = INT8_MIN;
	int8_t x392 = -29;
	int32_t t97 = -55994;

	t97 = ((x389+(x390==x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 2;
	volatile int8_t x395 = INT8_MIN;
	uint16_t x396 = 4030U;
	static volatile int32_t t98 = 38608794;

	t98 = ((x393+(x394==x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 19593242230LLU;
	volatile int32_t x398 = -1;

	t99 = ((x397+(x398==x399))<=x400);

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

