#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x7 = INT8_MIN;
int64_t x8 = INT64_MIN;
int32_t t2 = -13;
uint16_t x15 = 13U;
static int16_t x16 = 3595;
volatile int16_t x17 = -1;
uint8_t x19 = 7U;
int16_t x35 = -1;
volatile int32_t x42 = INT32_MAX;
uint32_t x45 = 4551960U;
int64_t x46 = -1LL;
uint16_t x48 = 53U;
int32_t t11 = 37055038;
static volatile int8_t x49 = -1;
int16_t x50 = 285;
uint8_t x54 = UINT8_MAX;
static int32_t x57 = 311852;
uint16_t x64 = 6969U;
static uint32_t x66 = 27823995U;
int16_t x67 = 1383;
int16_t x70 = INT16_MAX;
static uint32_t x76 = 504667U;
int32_t t18 = -105898;
static volatile int32_t x85 = INT32_MIN;
volatile uint8_t x89 = UINT8_MAX;
int32_t x91 = INT32_MIN;
static int32_t x98 = INT32_MIN;
uint16_t x104 = 39U;
int32_t t26 = -11127406;
static uint32_t x111 = 26878U;
volatile int32_t t27 = 1;
volatile int16_t x114 = -5;
static int16_t x116 = -1;
int16_t x123 = INT16_MAX;
uint8_t x127 = 115U;
uint16_t x129 = UINT16_MAX;
uint32_t x130 = 6U;
int8_t x136 = 1;
int64_t x145 = INT64_MIN;
int16_t x150 = INT16_MAX;
int32_t x152 = 91557;
uint8_t x153 = UINT8_MAX;
volatile uint8_t x155 = UINT8_MAX;
uint8_t x158 = 73U;
static uint64_t x160 = UINT64_MAX;
volatile int8_t x167 = INT8_MIN;
static uint32_t x171 = 1385693U;
int32_t t42 = 259983891;
int32_t t45 = 7033;
volatile uint16_t x185 = UINT16_MAX;
int64_t x190 = -697329150LL;
static volatile int32_t x194 = -2;
volatile int32_t t48 = 28489;
static uint32_t x200 = 40U;
uint64_t x201 = 20093253460621LLU;
static int8_t x212 = -1;
static volatile uint64_t x216 = 39918LLU;
uint32_t x224 = UINT32_MAX;
volatile int32_t t56 = -72;
static volatile int8_t x229 = 1;
uint16_t x230 = 1U;
volatile int8_t x233 = -1;
static volatile uint32_t x244 = 25707579U;
volatile uint32_t x251 = 1713617U;
volatile uint8_t x253 = 11U;
volatile int64_t x261 = INT64_MAX;
int16_t x262 = -1;
int16_t x264 = 5;
static int8_t x267 = -1;
int8_t x281 = INT8_MIN;
volatile int8_t x286 = 52;
volatile int16_t x288 = INT16_MAX;
static volatile int64_t x293 = INT64_MAX;
int64_t x301 = -97LL;
static volatile uint32_t x305 = UINT32_MAX;
volatile int8_t x307 = INT8_MIN;
volatile int64_t x309 = 128984LL;
uint16_t x323 = 15941U;
uint8_t x326 = UINT8_MAX;
int8_t x327 = -7;
uint16_t x329 = UINT16_MAX;
int8_t x331 = INT8_MAX;
int16_t x333 = -1;
static uint8_t x336 = 4U;
int64_t x338 = INT64_MAX;
int8_t x351 = INT8_MAX;
int32_t t88 = 23030443;
uint8_t x360 = 8U;
int16_t x367 = 24;
static volatile int32_t t94 = -15950;
volatile int32_t t96 = 15927;
static int16_t x394 = -1;
static uint8_t x396 = UINT8_MAX;


void f0(void) {
	uint64_t x1 = 422041719339767841LLU;
	uint8_t x2 = 36U;
	int64_t x3 = INT64_MIN;
	int32_t x4 = 684;
	static volatile int32_t t0 = 64766;

	t0 = ((x1<=x2)^(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 651220LLU;
	int32_t x6 = INT32_MAX;
	static volatile int32_t t1 = 307900955;

	t1 = ((x5<=x6)^(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int32_t x10 = 284;
	volatile uint16_t x11 = 26155U;
	volatile uint16_t x12 = 3504U;

	t2 = ((x9<=x10)^(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 55752973509LLU;
	int64_t x14 = 1072316888LL;
	volatile int32_t t3 = 275182841;

	t3 = ((x13<=x14)^(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	int8_t x20 = INT8_MAX;
	int32_t t4 = 3461101;

	t4 = ((x17<=x18)^(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 192421774U;
	volatile uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MAX;
	static int8_t x24 = INT8_MAX;
	static volatile int32_t t5 = 22482521;

	t5 = ((x21<=x22)^(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MAX;
	int64_t x26 = -97LL;
	uint8_t x27 = 25U;
	int8_t x28 = -1;
	int32_t t6 = -2743493;

	t6 = ((x25<=x26)^(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -9;
	volatile int32_t x30 = -187743;
	int8_t x31 = 29;
	volatile uint8_t x32 = UINT8_MAX;
	int32_t t7 = -78;

	t7 = ((x29<=x30)^(x31<=x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int16_t x34 = -1;
	static int32_t x36 = INT32_MAX;
	int32_t t8 = -7;

	t8 = ((x33<=x34)^(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 108U;
	static int64_t x39 = INT64_MAX;
	volatile uint64_t x40 = 389824056496LLU;
	volatile int32_t t9 = 73;

	t9 = ((x37<=x38)^(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -586;
	int64_t x43 = -1052625197964968LL;
	int64_t x44 = 212373908LL;
	int32_t t10 = -216;

	t10 = ((x41<=x42)^(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x47 = INT32_MIN;

	t11 = ((x45<=x46)^(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 29052407U;
	volatile int32_t t12 = -24165956;

	t12 = ((x49<=x50)^(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 9;
	uint64_t x55 = 32754776649478441LLU;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = -3570;

	t13 = ((x53<=x54)^(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = 257527LL;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = -1LL;
	int32_t t14 = -236;

	t14 = ((x57<=x58)^(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x62 = 26U;
	int64_t x63 = -1LL;
	volatile int32_t t15 = -673641756;

	t15 = ((x61<=x62)^(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x68 = INT64_MIN;
	static volatile int32_t t16 = 17869663;

	t16 = ((x65<=x66)^(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 111795614U;
	int16_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	static volatile int32_t t17 = 147480;

	t17 = ((x69<=x70)^(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	static uint8_t x74 = 9U;
	int64_t x75 = INT64_MAX;

	t18 = ((x73<=x74)^(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 28220U;
	int8_t x78 = 5;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 2U;
	int32_t t19 = 15;

	t19 = ((x77<=x78)^(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	volatile int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	static int8_t x84 = -1;
	volatile int32_t t20 = 782879;

	t20 = ((x81<=x82)^(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 0U;
	int32_t x87 = -1;
	static int64_t x88 = -1LL;
	volatile int32_t t21 = 843;

	t21 = ((x85<=x86)^(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = -22;
	static uint64_t x92 = 6268060428657161281LLU;
	int32_t t22 = 1385799;

	t22 = ((x89<=x90)^(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1181906;
	static uint16_t x94 = 1158U;
	static int8_t x95 = -1;
	volatile uint64_t x96 = UINT64_MAX;
	static int32_t t23 = 24452;

	t23 = ((x93<=x94)^(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int32_t x99 = INT32_MIN;
	volatile int64_t x100 = INT64_MIN;
	int32_t t24 = -383748594;

	t24 = ((x97<=x98)^(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile uint16_t x102 = UINT16_MAX;
	uint64_t x103 = 704636298363450037LLU;
	volatile int32_t t25 = -1256845;

	t25 = ((x101<=x102)^(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint16_t x106 = 1U;
	static int16_t x107 = 7454;
	int32_t x108 = INT32_MAX;

	t26 = ((x105<=x106)^(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	int64_t x110 = -251856LL;
	uint64_t x112 = 23577211391727LLU;

	t27 = ((x109<=x110)^(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 21U;
	uint8_t x115 = UINT8_MAX;
	int32_t t28 = 3456432;

	t28 = ((x113<=x114)^(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 35200737738690742LL;
	static int32_t x118 = INT32_MIN;
	int64_t x119 = 2LL;
	uint32_t x120 = UINT32_MAX;
	int32_t t29 = -160278028;

	t29 = ((x117<=x118)^(x119<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MAX;
	volatile uint64_t x124 = 15LLU;
	volatile int32_t t30 = 932427;

	t30 = ((x121<=x122)^(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	volatile uint64_t x126 = 3725578898LLU;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -9;

	t31 = ((x125<=x126)^(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x131 = -1;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = 739476129;

	t32 = ((x129<=x130)^(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	int64_t x134 = INT64_MIN;
	static volatile int8_t x135 = 7;
	volatile int32_t t33 = -7103;

	t33 = ((x133<=x134)^(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 33;

	t34 = ((x137<=x138)^(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -853034;

	t35 = ((x141<=x142)^(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = INT16_MIN;
	uint8_t x147 = 35U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -20878;

	t36 = ((x145<=x146)^(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = -1LL;
	volatile int8_t x151 = -1;
	int32_t t37 = -423220825;

	t37 = ((x149<=x150)^(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x154 = UINT8_MAX;
	int16_t x156 = -1;
	volatile int32_t t38 = -945;

	t38 = ((x153<=x154)^(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 2022512114U;
	uint8_t x159 = 7U;
	int32_t t39 = 1642968;

	t39 = ((x157<=x158)^(x159<=x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 66LLU;
	int64_t x163 = -7002470863LL;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -16;

	t40 = ((x161<=x162)^(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 14942U;
	int8_t x168 = INT8_MAX;
	volatile int32_t t41 = -6;

	t41 = ((x165<=x166)^(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 12LLU;
	int16_t x170 = INT16_MIN;
	volatile uint32_t x172 = 1649281U;

	t42 = ((x169<=x170)^(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	uint32_t x175 = 6577U;
	int64_t x176 = 14LL;
	volatile int32_t t43 = 23690809;

	t43 = ((x173<=x174)^(x175<=x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	uint64_t x178 = 39943586547LLU;
	uint16_t x179 = UINT16_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 4669518;

	t44 = ((x177<=x178)^(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 7007;
	uint32_t x182 = 379036871U;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = INT64_MIN;

	t45 = ((x181<=x182)^(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x186 = 116;
	volatile uint8_t x187 = UINT8_MAX;
	int16_t x188 = -199;
	volatile int32_t t46 = 394452330;

	t46 = ((x185<=x186)^(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 376U;
	uint64_t x191 = 41204761840742LLU;
	static uint8_t x192 = 22U;
	int32_t t47 = -28919453;

	t47 = ((x189<=x190)^(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	uint32_t x195 = 199811484U;
	volatile uint16_t x196 = 75U;

	t48 = ((x193<=x194)^(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 9156339769112428LLU;
	static uint16_t x198 = UINT16_MAX;
	static volatile int32_t x199 = INT32_MIN;
	int32_t t49 = 495508503;

	t49 = ((x197<=x198)^(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x202 = INT8_MIN;
	uint64_t x203 = UINT64_MAX;
	uint64_t x204 = 2564226320600868555LLU;
	static volatile int32_t t50 = -95;

	t50 = ((x201<=x202)^(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -350;
	volatile int64_t x206 = INT64_MIN;
	int8_t x207 = -1;
	static int32_t x208 = INT32_MIN;
	int32_t t51 = -7;

	t51 = ((x205<=x206)^(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = 16664320174595LLU;
	int32_t x210 = INT32_MAX;
	static int32_t x211 = -1;
	int32_t t52 = 439095;

	t52 = ((x209<=x210)^(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -102;
	int32_t x214 = -1;
	uint64_t x215 = 158LLU;
	volatile int32_t t53 = -10191;

	t53 = ((x213<=x214)^(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -2;
	uint8_t x218 = 49U;
	uint32_t x219 = 106593U;
	volatile uint32_t x220 = UINT32_MAX;
	volatile int32_t t54 = -14;

	t54 = ((x217<=x218)^(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 862;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	volatile int32_t t55 = 271628845;

	t55 = ((x221<=x222)^(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 44;
	uint64_t x226 = 485372969416LLU;
	uint16_t x227 = UINT16_MAX;
	volatile uint32_t x228 = UINT32_MAX;

	t56 = ((x225<=x226)^(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x231 = -1LL;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = -322018;

	t57 = ((x229<=x230)^(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = 30;
	uint8_t x235 = 0U;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = -3442;

	t58 = ((x233<=x234)^(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 161421438958231886LLU;
	int16_t x238 = INT16_MIN;
	int32_t x239 = -429;
	int16_t x240 = -1192;
	volatile int32_t t59 = 4;

	t59 = ((x237<=x238)^(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 0U;
	static int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MIN;
	volatile int32_t t60 = 9;

	t60 = ((x241<=x242)^(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 493011258769LLU;
	int64_t x246 = -1LL;
	int8_t x247 = -1;
	int32_t x248 = -1;
	volatile int32_t t61 = 1246;

	t61 = ((x245<=x246)^(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = 0U;
	static uint32_t x250 = UINT32_MAX;
	uint8_t x252 = 11U;
	volatile int32_t t62 = -114366548;

	t62 = ((x249<=x250)^(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = INT32_MAX;
	int8_t x255 = INT8_MAX;
	int16_t x256 = -1;
	volatile int32_t t63 = 151482;

	t63 = ((x253<=x254)^(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int32_t x258 = INT32_MAX;
	static int64_t x259 = INT64_MAX;
	static uint8_t x260 = 36U;
	volatile int32_t t64 = -395530;

	t64 = ((x257<=x258)^(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x263 = 12U;
	static int32_t t65 = -1;

	t65 = ((x261<=x262)^(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = 3LL;
	volatile uint64_t x266 = 1234701335LLU;
	int32_t x268 = -1;
	static int32_t t66 = 20249;

	t66 = ((x265<=x266)^(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MAX;
	volatile int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 49283;

	t67 = ((x269<=x270)^(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int8_t x274 = INT8_MAX;
	static int32_t x275 = INT32_MIN;
	int32_t x276 = -964;
	static int32_t t68 = -11;

	t68 = ((x273<=x274)^(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 2U;
	volatile int16_t x278 = INT16_MIN;
	uint16_t x279 = 16379U;
	int8_t x280 = -1;
	static int32_t t69 = -30504708;

	t69 = ((x277<=x278)^(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x282 = 979417U;
	uint64_t x283 = 0LLU;
	int16_t x284 = -1;
	volatile int32_t t70 = 539;

	t70 = ((x281<=x282)^(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	volatile uint8_t x287 = 110U;
	volatile int32_t t71 = -349;

	t71 = ((x285<=x286)^(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	static int32_t x290 = -542324505;
	static int64_t x291 = INT64_MIN;
	uint16_t x292 = 0U;
	volatile int32_t t72 = -506;

	t72 = ((x289<=x290)^(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x294 = 11397576213612LL;
	uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 1U;
	int32_t t73 = -686904778;

	t73 = ((x293<=x294)^(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 20U;
	static int16_t x298 = INT16_MAX;
	int16_t x299 = INT16_MAX;
	int8_t x300 = -26;
	static int32_t t74 = 1;

	t74 = ((x297<=x298)^(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x302 = INT16_MIN;
	int64_t x303 = 8072114419LL;
	static uint32_t x304 = 28754627U;
	static int32_t t75 = 412275729;

	t75 = ((x301<=x302)^(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = -5;
	int16_t x308 = -7;
	volatile int32_t t76 = 31;

	t76 = ((x305<=x306)^(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x310 = UINT8_MAX;
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 784797;

	t77 = ((x309<=x310)^(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int16_t x314 = -1;
	static int8_t x315 = INT8_MIN;
	volatile int8_t x316 = 0;
	volatile int32_t t78 = 161;

	t78 = ((x313<=x314)^(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 2U;
	int16_t x318 = 3;
	static uint32_t x319 = 6U;
	uint64_t x320 = 9293LLU;
	volatile int32_t t79 = -428591;

	t79 = ((x317<=x318)^(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 2089903833LL;
	uint64_t x322 = 710LLU;
	int64_t x324 = INT64_MAX;
	int32_t t80 = -7009584;

	t80 = ((x321<=x322)^(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = 1;

	t81 = ((x325<=x326)^(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MIN;
	uint64_t x332 = UINT64_MAX;
	static int32_t t82 = -141446498;

	t82 = ((x329<=x330)^(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = 63171LL;
	int16_t x335 = INT16_MIN;
	volatile int32_t t83 = -9659365;

	t83 = ((x333<=x334)^(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 66LLU;
	volatile int16_t x339 = INT16_MIN;
	static volatile int8_t x340 = INT8_MIN;
	int32_t t84 = -19780249;

	t84 = ((x337<=x338)^(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -9741240LL;
	volatile int32_t x342 = 578;
	int64_t x343 = -733267352698964LL;
	int16_t x344 = 0;
	int32_t t85 = 10;

	t85 = ((x341<=x342)^(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 4926U;
	uint64_t x346 = UINT64_MAX;
	int64_t x347 = 8011603729LL;
	uint32_t x348 = 16186U;
	int32_t t86 = 54;

	t86 = ((x345<=x346)^(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MAX;
	uint32_t x350 = 987007U;
	int64_t x352 = -2119509966022646020LL;
	static volatile int32_t t87 = -198124;

	t87 = ((x349<=x350)^(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x354 = 1U;
	int64_t x355 = -68599172517087LL;
	volatile int8_t x356 = INT8_MIN;

	t88 = ((x353<=x354)^(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 7U;
	int64_t x358 = 213506544LL;
	int64_t x359 = -1LL;
	static int32_t t89 = -1423;

	t89 = ((x357<=x358)^(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = -1;
	uint8_t x362 = 0U;
	volatile uint32_t x363 = 7318105U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = -9200895;

	t90 = ((x361<=x362)^(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = INT64_MIN;
	int64_t x366 = -3564341801091284951LL;
	int8_t x368 = INT8_MAX;
	int32_t t91 = -26;

	t91 = ((x365<=x366)^(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	uint16_t x370 = 3U;
	static uint16_t x371 = UINT16_MAX;
	static int8_t x372 = INT8_MAX;
	int32_t t92 = -2;

	t92 = ((x369<=x370)^(x371<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MIN;
	uint32_t x374 = 5U;
	static uint64_t x375 = 1LLU;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 143466176;

	t93 = ((x373<=x374)^(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = 57;
	uint8_t x379 = 42U;
	uint64_t x380 = 2LLU;

	t94 = ((x377<=x378)^(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 2U;
	volatile int32_t x382 = INT32_MIN;
	static volatile uint8_t x383 = UINT8_MAX;
	volatile int32_t x384 = -200498358;
	volatile int32_t t95 = -5882705;

	t95 = ((x381<=x382)^(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -13220318LL;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = 1560;
	volatile int16_t x388 = INT16_MIN;

	t96 = ((x385<=x386)^(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	uint8_t x390 = UINT8_MAX;
	uint32_t x391 = 344U;
	uint32_t x392 = 30802U;
	static volatile int32_t t97 = -59025;

	t97 = ((x389<=x390)^(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	uint8_t x395 = 3U;
	static volatile int32_t t98 = 1855483;

	t98 = ((x393<=x394)^(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static int8_t x398 = -1;
	int64_t x399 = INT64_MAX;
	static volatile int64_t x400 = INT64_MAX;
	int32_t t99 = -1512362;

	t99 = ((x397<=x398)^(x399<=x400));

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

