#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
int32_t t0 = 455;
int16_t x6 = 424;
volatile int32_t t1 = 212;
volatile int64_t x14 = -69LL;
volatile int32_t t3 = 1;
int32_t x21 = INT32_MAX;
static int32_t x29 = INT32_MIN;
uint32_t x35 = 28718U;
static volatile int32_t t8 = 70540;
uint8_t x38 = 1U;
uint16_t x39 = UINT16_MAX;
int8_t x42 = INT8_MIN;
int16_t x45 = -1;
uint8_t x48 = 4U;
static int8_t x52 = 0;
int16_t x60 = INT16_MAX;
volatile int32_t t14 = 111;
uint8_t x66 = UINT8_MAX;
volatile int32_t t16 = 3;
static volatile uint64_t x79 = 5971920554141455LLU;
uint8_t x81 = 101U;
int64_t x86 = -1LL;
int64_t x87 = -1070073119816LL;
volatile int32_t t21 = 2979;
static int32_t x89 = 1922285;
volatile uint8_t x92 = 44U;
static int16_t x93 = 33;
uint64_t x95 = UINT64_MAX;
int32_t x103 = INT32_MIN;
int16_t x106 = INT16_MIN;
static volatile int32_t x109 = INT32_MAX;
int64_t x111 = INT64_MIN;
int64_t x112 = -1LL;
static int64_t x119 = -1LL;
static int64_t x120 = INT64_MAX;
int16_t x123 = INT16_MIN;
volatile int8_t x124 = -1;
volatile int32_t t30 = 130;
static uint64_t x129 = 3645263057LLU;
int64_t x134 = INT64_MAX;
int16_t x149 = INT16_MIN;
int64_t x153 = 3763875379LL;
uint16_t x155 = 20U;
uint64_t x159 = 3196631160238LLU;
int32_t x161 = INT32_MIN;
int8_t x162 = INT8_MIN;
int8_t x167 = INT8_MIN;
volatile int32_t t41 = -4;
uint64_t x169 = 0LLU;
int32_t x175 = 292981;
volatile int16_t x181 = -495;
static int32_t t48 = 21922;
static uint64_t x197 = 6424326399543614LLU;
int8_t x202 = INT8_MIN;
uint64_t x204 = 8374566621045191LLU;
int16_t x210 = 949;
static int32_t x213 = 131936435;
static int64_t x220 = INT64_MIN;
int16_t x226 = -60;
int16_t x227 = -103;
volatile uint16_t x238 = 1975U;
int64_t x242 = INT64_MAX;
int32_t t60 = 785365;
uint16_t x245 = 759U;
int8_t x246 = -1;
volatile int16_t x256 = INT16_MAX;
int16_t x261 = -1;
int8_t x262 = INT8_MAX;
int32_t x267 = INT32_MAX;
int64_t x269 = INT64_MAX;
int8_t x276 = 16;
volatile uint32_t x278 = UINT32_MAX;
volatile int32_t t69 = -103406;
volatile int32_t t70 = 518777;
int64_t x296 = -57749726885830665LL;
int32_t x299 = -1;
static int32_t x301 = INT32_MAX;
volatile int32_t t75 = -132476012;
volatile int8_t x307 = INT8_MIN;
static int8_t x308 = INT8_MIN;
uint64_t x314 = 3626371031410148LLU;
static int16_t x317 = 14;
static volatile int16_t x318 = INT16_MIN;
volatile int32_t x321 = INT32_MIN;
static int8_t x325 = -1;
int32_t t83 = -113248502;
int32_t t84 = 14;
int32_t t86 = 387609776;
int32_t t89 = 4;
int32_t x366 = -24162802;
volatile int16_t x367 = INT16_MAX;
int64_t x373 = INT64_MIN;
static int64_t x380 = -1LL;
volatile uint32_t x383 = UINT32_MAX;
int16_t x384 = -73;
uint32_t x386 = UINT32_MAX;
volatile int32_t t97 = 1244415;
int8_t x393 = -8;
volatile int32_t t98 = 41115;
uint64_t x397 = UINT64_MAX;
int8_t x398 = INT8_MAX;
int32_t x399 = INT32_MIN;


void f0(void) {
	int8_t x1 = -1;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MAX;

	t0 = (((x1<=x2)^x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -54;
	int8_t x7 = INT8_MAX;
	int32_t x8 = -1;

	t1 = (((x5<=x6)^x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	int32_t x10 = INT32_MAX;
	uint8_t x11 = 3U;
	uint8_t x12 = 5U;
	volatile int32_t t2 = 3;

	t2 = (((x9<=x10)^x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	volatile int64_t x15 = INT64_MIN;
	uint64_t x16 = 126480990572LLU;

	t3 = (((x13<=x14)^x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = UINT8_MAX;
	static int16_t x18 = 1;
	static volatile int8_t x19 = INT8_MIN;
	volatile int64_t x20 = INT64_MAX;
	volatile int32_t t4 = 71878;

	t4 = (((x17<=x18)^x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = -1;
	int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -1376231;

	t5 = (((x21<=x22)^x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	int64_t x27 = -163976551253543LL;
	static uint8_t x28 = 25U;
	int32_t t6 = -13;

	t6 = (((x25<=x26)^x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 4085U;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = UINT32_MAX;
	static int32_t t7 = -1;

	t7 = (((x29<=x30)^x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1868767685037LLU;
	volatile int32_t x34 = INT32_MIN;
	uint16_t x36 = UINT16_MAX;

	t8 = (((x33<=x34)^x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	static uint16_t x40 = UINT16_MAX;
	int32_t t9 = -591378719;

	t9 = (((x37<=x38)^x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x43 = 9975452396LLU;
	static uint32_t x44 = 348295647U;
	static volatile int32_t t10 = 238;

	t10 = (((x41<=x42)^x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = INT16_MIN;
	uint32_t x47 = UINT32_MAX;
	volatile int32_t t11 = -448053197;

	t11 = (((x45<=x46)^x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 101U;
	static volatile int32_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int32_t t12 = -1507;

	t12 = (((x49<=x50)^x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = 0;
	static uint32_t x55 = 1U;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = -2215;

	t13 = (((x53<=x54)^x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int32_t x58 = INT32_MAX;
	int16_t x59 = 10889;

	t14 = (((x57<=x58)^x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	static volatile int16_t x62 = -3265;
	static volatile int16_t x63 = -13;
	int16_t x64 = -1;
	volatile int32_t t15 = -2685;

	t15 = (((x61<=x62)^x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 864549U;
	uint8_t x67 = 11U;
	volatile uint32_t x68 = 85440U;

	t16 = (((x65<=x66)^x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -2475004625959886LL;
	int32_t x70 = -3745;
	uint8_t x71 = 1U;
	static int8_t x72 = -1;
	volatile int32_t t17 = -3;

	t17 = (((x69<=x70)^x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x74 = -1;
	int16_t x75 = INT16_MAX;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = 108048;

	t18 = (((x73<=x74)^x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 11188U;
	int8_t x78 = -1;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = -114441316;

	t19 = (((x77<=x78)^x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -1;
	volatile uint8_t x83 = 13U;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = -1;

	t20 = (((x81<=x82)^x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -1;
	int16_t x88 = -1961;

	t21 = (((x85<=x86)^x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x90 = 3U;
	static int8_t x91 = INT8_MIN;
	int32_t t22 = 234;

	t22 = (((x89<=x90)^x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 3874806506774796503LLU;
	volatile int64_t x96 = -257871865525020LL;
	volatile int32_t t23 = 74555;

	t23 = (((x93<=x94)^x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 18019LLU;
	int8_t x98 = 9;
	uint16_t x99 = 28002U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 23126450;

	t24 = (((x97<=x98)^x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 213328U;
	static int64_t x102 = INT64_MAX;
	static uint16_t x104 = 1661U;
	volatile int32_t t25 = -835564;

	t25 = (((x101<=x102)^x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int8_t x107 = 8;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -2615852;

	t26 = (((x105<=x106)^x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MIN;
	static int32_t t27 = 135241;

	t27 = (((x109<=x110)^x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -18;
	volatile uint32_t x114 = UINT32_MAX;
	volatile int8_t x115 = INT8_MIN;
	volatile uint32_t x116 = 17002U;
	int32_t t28 = 30;

	t28 = (((x113<=x114)^x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile uint64_t x118 = 1168681725LLU;
	volatile int32_t t29 = 658;

	t29 = (((x117<=x118)^x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 0;
	int32_t x122 = INT32_MAX;

	t30 = (((x121<=x122)^x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 2U;
	volatile int8_t x126 = INT8_MAX;
	volatile int8_t x127 = -1;
	static int64_t x128 = INT64_MIN;
	int32_t t31 = 1;

	t31 = (((x125<=x126)^x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 62U;
	int16_t x131 = 9772;
	volatile int64_t x132 = INT64_MAX;
	static volatile int32_t t32 = 7581;

	t32 = (((x129<=x130)^x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int8_t x135 = -1;
	int16_t x136 = INT16_MAX;
	int32_t t33 = 2783;

	t33 = (((x133<=x134)^x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 3U;
	volatile uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t34 = -500;

	t34 = (((x137<=x138)^x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	volatile int8_t x142 = INT8_MIN;
	int16_t x143 = INT16_MAX;
	int16_t x144 = 9274;
	int32_t t35 = -19094992;

	t35 = (((x141<=x142)^x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 18303888LLU;
	static volatile int8_t x146 = INT8_MAX;
	volatile int8_t x147 = INT8_MIN;
	static int32_t x148 = INT32_MAX;
	int32_t t36 = 144674;

	t36 = (((x145<=x146)^x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	static uint16_t x151 = 26U;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -1;

	t37 = (((x149<=x150)^x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = UINT8_MAX;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = 63921;

	t38 = (((x153<=x154)^x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int32_t x158 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	int32_t t39 = -810671;

	t39 = (((x157<=x158)^x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x163 = INT64_MIN;
	uint16_t x164 = 14567U;
	int32_t t40 = 511778381;

	t40 = (((x161<=x162)^x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	static uint8_t x166 = 30U;
	volatile int32_t x168 = INT32_MIN;

	t41 = (((x165<=x166)^x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	int8_t x172 = 6;
	volatile int32_t t42 = 173462;

	t42 = (((x169<=x170)^x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = 90;
	int64_t x176 = 2512LL;
	volatile int32_t t43 = 1;

	t43 = (((x173<=x174)^x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MAX;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -9988019;

	t44 = (((x177<=x178)^x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x182 = 466U;
	int64_t x183 = 6302975607460LL;
	volatile int8_t x184 = -1;
	volatile int32_t t45 = -764;

	t45 = (((x181<=x182)^x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -206;
	int8_t x186 = -7;
	uint64_t x187 = 0LLU;
	int8_t x188 = 5;
	volatile int32_t t46 = 325450;

	t46 = (((x185<=x186)^x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MAX;
	static int64_t x190 = -1LL;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MAX;
	volatile int32_t t47 = 780;

	t47 = (((x189<=x190)^x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 9LL;
	int8_t x194 = INT8_MAX;
	int32_t x195 = -1;
	int16_t x196 = INT16_MIN;

	t48 = (((x193<=x194)^x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 739758608776970515LLU;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = -1;
	static volatile int32_t t49 = 65125369;

	t49 = (((x197<=x198)^x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 5199082762708167315LLU;
	static volatile int64_t x203 = -1LL;
	static int32_t t50 = 25;

	t50 = (((x201<=x202)^x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 7;
	static volatile uint8_t x206 = UINT8_MAX;
	static int32_t x207 = INT32_MIN;
	volatile uint16_t x208 = UINT16_MAX;
	int32_t t51 = 0;

	t51 = (((x205<=x206)^x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	volatile int32_t x211 = 10138606;
	uint32_t x212 = 223197478U;
	int32_t t52 = 2;

	t52 = (((x209<=x210)^x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	static volatile int32_t t53 = 2;

	t53 = (((x213<=x214)^x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = UINT16_MAX;
	volatile int32_t x219 = INT32_MIN;
	int32_t t54 = -108;

	t54 = (((x217<=x218)^x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 39U;
	int64_t x222 = INT64_MIN;
	volatile int8_t x223 = INT8_MIN;
	uint64_t x224 = 13114190945235LLU;
	volatile int32_t t55 = -16920;

	t55 = (((x221<=x222)^x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 27131884LLU;
	uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 4479;

	t56 = (((x225<=x226)^x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint16_t x230 = UINT16_MAX;
	int16_t x231 = -2;
	volatile uint32_t x232 = 6U;
	int32_t t57 = -16666818;

	t57 = (((x229<=x230)^x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -111133387117727LL;
	int64_t x234 = -1LL;
	int16_t x235 = 61;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 9614;

	t58 = (((x233<=x234)^x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = UINT8_MAX;
	static int16_t x239 = 1;
	uint32_t x240 = UINT32_MAX;
	int32_t t59 = -262;

	t59 = (((x237<=x238)^x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	int8_t x243 = INT8_MIN;
	static int8_t x244 = INT8_MAX;

	t60 = (((x241<=x242)^x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x247 = INT8_MIN;
	static uint8_t x248 = 0U;
	volatile int32_t t61 = -223048830;

	t61 = (((x245<=x246)^x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -5;
	static uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 55U;
	uint32_t x252 = 0U;
	int32_t t62 = -335;

	t62 = (((x249<=x250)^x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 0U;
	int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MIN;
	volatile int32_t t63 = -485403;

	t63 = (((x253<=x254)^x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = -23;
	uint32_t x258 = 2U;
	uint16_t x259 = 3U;
	int64_t x260 = 109696635162LL;
	volatile int32_t t64 = -218450779;

	t64 = (((x257<=x258)^x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = -4035;
	volatile int64_t x264 = -8642LL;
	int32_t t65 = 10046;

	t65 = (((x261<=x262)^x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 2U;
	uint8_t x266 = 45U;
	uint8_t x268 = UINT8_MAX;
	static int32_t t66 = -37;

	t66 = (((x265<=x266)^x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = 342214;
	static int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 470939969;

	t67 = (((x269<=x270)^x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = 558;
	int32_t x274 = INT32_MIN;
	int64_t x275 = -11092672LL;
	int32_t t68 = -833843;

	t68 = (((x273<=x274)^x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -582;
	int64_t x279 = 491479327946744LL;
	static volatile uint16_t x280 = 8104U;

	t69 = (((x277<=x278)^x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	int16_t x283 = -1;
	int64_t x284 = INT64_MAX;

	t70 = (((x281<=x282)^x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 1LL;
	int32_t x286 = INT32_MAX;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = 192457LLU;
	int32_t t71 = 57;

	t71 = (((x285<=x286)^x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	int64_t x290 = INT64_MIN;
	volatile int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 475;

	t72 = (((x289<=x290)^x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	volatile uint64_t x294 = 247870842600195542LLU;
	int8_t x295 = 50;
	volatile int32_t t73 = -3126;

	t73 = (((x293<=x294)^x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	static int32_t x298 = INT32_MAX;
	uint64_t x300 = 520361599499270956LLU;
	volatile int32_t t74 = -22;

	t74 = (((x297<=x298)^x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 30056691U;
	static volatile uint8_t x303 = 83U;
	uint64_t x304 = 12970LLU;

	t75 = (((x301<=x302)^x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -12512;
	volatile int64_t x306 = INT64_MIN;
	int32_t t76 = 359051;

	t76 = (((x305<=x306)^x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MAX;
	int16_t x310 = INT16_MIN;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = 31;
	volatile int32_t t77 = 24240546;

	t77 = (((x309<=x310)^x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = 1U;
	int64_t x315 = INT64_MIN;
	int64_t x316 = -1LL;
	volatile int32_t t78 = 15;

	t78 = (((x313<=x314)^x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x319 = -298965807657195LL;
	static uint8_t x320 = 1U;
	static int32_t t79 = -2375;

	t79 = (((x317<=x318)^x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = -1;
	int16_t x323 = INT16_MIN;
	static uint64_t x324 = 218626971LLU;
	volatile int32_t t80 = 3669635;

	t80 = (((x321<=x322)^x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -1LL;
	static int16_t x327 = -7532;
	static uint32_t x328 = UINT32_MAX;
	int32_t t81 = -1692572;

	t81 = (((x325<=x326)^x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	int8_t x330 = INT8_MIN;
	uint32_t x331 = 7731U;
	int8_t x332 = INT8_MIN;
	int32_t t82 = -720;

	t82 = (((x329<=x330)^x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = INT32_MIN;
	static int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	int16_t x336 = 189;

	t83 = (((x333<=x334)^x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = -1LL;
	volatile int32_t x339 = -7614340;
	volatile int32_t x340 = -1;

	t84 = (((x337<=x338)^x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -17;
	static volatile int32_t x342 = 1;
	int16_t x343 = -1;
	int32_t x344 = INT32_MAX;
	volatile int32_t t85 = -1;

	t85 = (((x341<=x342)^x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	int16_t x348 = INT16_MIN;

	t86 = (((x345<=x346)^x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 3235988U;
	static uint32_t x350 = UINT32_MAX;
	uint16_t x351 = 7U;
	int16_t x352 = INT16_MAX;
	int32_t t87 = -508;

	t87 = (((x349<=x350)^x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = INT64_MAX;
	static volatile uint8_t x354 = 59U;
	volatile int32_t x355 = INT32_MIN;
	volatile uint16_t x356 = UINT16_MAX;
	int32_t t88 = 69623;

	t88 = (((x353<=x354)^x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	static uint8_t x358 = 27U;
	int32_t x359 = -7626374;
	int64_t x360 = INT64_MIN;

	t89 = (((x357<=x358)^x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = INT16_MIN;
	int32_t x362 = 400579697;
	volatile int64_t x363 = INT64_MIN;
	uint8_t x364 = 4U;
	int32_t t90 = -2247044;

	t90 = (((x361<=x362)^x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -25;

	t91 = (((x365<=x366)^x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -1;
	volatile uint64_t x370 = UINT64_MAX;
	int8_t x371 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = 577;

	t92 = (((x369<=x370)^x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x374 = INT32_MIN;
	int64_t x375 = -1LL;
	uint32_t x376 = 8023167U;
	static int32_t t93 = -67;

	t93 = (((x373<=x374)^x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int8_t x378 = -1;
	static int8_t x379 = -1;
	volatile int32_t t94 = -286;

	t94 = (((x377<=x378)^x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = UINT8_MAX;
	static volatile int8_t x382 = INT8_MAX;
	int32_t t95 = 341034;

	t95 = (((x381<=x382)^x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	uint8_t x387 = UINT8_MAX;
	int64_t x388 = -1LL;
	int32_t t96 = -13117524;

	t96 = (((x385<=x386)^x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 10U;
	int32_t x390 = INT32_MAX;
	uint16_t x391 = 1U;
	volatile int32_t x392 = INT32_MAX;

	t97 = (((x389<=x390)^x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 1795607697LLU;
	int16_t x395 = -6480;
	uint32_t x396 = 255296053U;

	t98 = (((x393<=x394)^x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x400 = -683234568483164LL;
	int32_t t99 = 3434;

	t99 = (((x397<=x398)^x399)<x400);

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

