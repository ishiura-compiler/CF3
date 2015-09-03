#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
uint64_t x11 = 2059651LLU;
static volatile uint64_t t2 = 6302793231115354310LLU;
static int16_t x13 = -754;
int64_t x14 = INT64_MAX;
uint32_t x21 = 57735159U;
int32_t x22 = -1;
int8_t x24 = INT8_MAX;
volatile int64_t x29 = INT64_MIN;
volatile int32_t x31 = -1;
static int8_t x42 = INT8_MAX;
int8_t x43 = -62;
int16_t x44 = 2;
int8_t x46 = INT8_MAX;
volatile int64_t x47 = INT64_MAX;
int32_t t12 = 511340226;
static int32_t x57 = -25273424;
int8_t x61 = INT8_MIN;
int16_t x62 = 15;
int16_t x65 = -9424;
uint64_t x66 = 3336334539327898LLU;
static int64_t x75 = INT64_MIN;
static uint8_t x77 = 1U;
static int8_t x78 = INT8_MIN;
volatile int8_t x87 = -1;
uint32_t x94 = UINT32_MAX;
static uint8_t x102 = 1U;
static int32_t x103 = 10698;
static int16_t x105 = INT16_MIN;
int64_t x106 = INT64_MAX;
uint64_t x109 = 1441389579957LLU;
int16_t x111 = -2323;
volatile uint32_t t25 = 3957U;
static int64_t x118 = -5LL;
volatile int16_t x125 = -1;
volatile int32_t t27 = -6453;
static volatile uint16_t x138 = UINT16_MAX;
volatile int16_t x140 = 0;
int16_t x147 = -5073;
int8_t x150 = INT8_MAX;
volatile uint64_t x152 = 5865259982LLU;
uint64_t t32 = 284LLU;
int8_t x156 = -1;
int32_t x163 = INT32_MIN;
volatile uint32_t x169 = 331U;
static volatile int16_t x173 = INT16_MIN;
uint32_t x175 = 1295329385U;
int64_t x179 = 153LL;
uint8_t x182 = UINT8_MAX;
uint8_t x183 = 96U;
int32_t t39 = 32452546;
int8_t x185 = -1;
static uint16_t x186 = UINT16_MAX;
volatile int64_t t40 = -20107LL;
uint8_t x190 = UINT8_MAX;
int64_t t41 = 11509673238980LL;
uint8_t x216 = UINT8_MAX;
volatile int8_t x218 = -1;
static int16_t x226 = -1;
static int64_t x229 = -1LL;
volatile int32_t t50 = 1;
volatile uint8_t x237 = UINT8_MAX;
static int64_t x240 = -2LL;
volatile int16_t x243 = INT16_MIN;
static int32_t x245 = INT32_MIN;
int16_t x249 = INT16_MIN;
static int64_t x250 = INT64_MIN;
int32_t x253 = -1;
int32_t x255 = 762077261;
int8_t x256 = INT8_MIN;
int64_t t56 = 27411490913274LL;
static int64_t t57 = 15LL;
int16_t x273 = INT16_MIN;
int64_t x280 = INT64_MIN;
static int32_t x282 = INT32_MIN;
static int32_t t62 = -174250;
int8_t x285 = 56;
static int8_t x287 = INT8_MIN;
int16_t x301 = 3;
int64_t x307 = INT64_MAX;
volatile uint64_t t67 = 3569504977876367LLU;
int64_t x313 = INT64_MIN;
int32_t x315 = -3819;
uint64_t x323 = 222589543631LLU;
int16_t x334 = INT16_MIN;
volatile int64_t x340 = -1LL;
int64_t t74 = 3567582LL;
uint32_t x342 = 592771U;
uint32_t x345 = UINT32_MAX;
volatile uint32_t t76 = 5U;
int8_t x353 = INT8_MIN;
int8_t x375 = -17;
int8_t x376 = -1;
int32_t x381 = -1935413;
uint8_t x388 = 38U;
int16_t x397 = 768;
volatile uint64_t x400 = 143589295267LLU;
int64_t x404 = -13802LL;
int32_t x405 = 47176;
volatile int32_t t88 = 146680;
uint64_t x410 = UINT64_MAX;
int8_t x411 = INT8_MAX;
uint32_t x412 = UINT32_MAX;
static volatile uint64_t t89 = 437581923935LLU;
volatile uint8_t x418 = UINT8_MAX;
int32_t x421 = INT32_MIN;
volatile int8_t x428 = 0;
static int8_t x432 = 1;
static uint32_t x434 = 129497U;
static int8_t x441 = 0;
static int64_t t97 = -193LL;
static uint32_t x451 = 227612U;
int64_t t99 = -128483856860LL;


void f0(void) {
	static volatile uint16_t x1 = 180U;
	static int64_t x3 = -6759126912LL;
	int16_t x4 = -1;
	int64_t t0 = 14LL;

	t0 = (((x1%x2)%x3)*x4);

	if (t0 != -180LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = -3580;
	int16_t x7 = -9628;
	volatile int8_t x8 = INT8_MIN;
	volatile int64_t t1 = 20389307LL;

	t1 = (((x5%x6)%x7)*x8);

	if (t1 != 328704LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int32_t x10 = -1;
	int64_t x12 = INT64_MIN;

	t2 = (((x9%x10)%x11)*x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = -1;
	int64_t x16 = INT64_MIN;
	static int64_t t3 = -5965343LL;

	t3 = (((x13%x14)%x15)*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static int8_t x18 = -1;
	uint64_t x19 = 7690LLU;
	int8_t x20 = INT8_MIN;
	uint64_t t4 = 4789306466LLU;

	t4 = (((x17%x18)%x19)*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = 1;
	static volatile uint32_t t5 = 13U;

	t5 = (((x21%x22)%x23)*x24);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MIN;
	int8_t x26 = 61;
	int32_t x27 = -15991318;
	volatile int32_t x28 = -24658;
	int32_t t6 = -8974693;

	t6 = (((x25%x26)%x27)*x28);

	if (t6 != 271238) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	int16_t x32 = 1;
	static int64_t t7 = 37334528140320678LL;

	t7 = (((x29%x30)%x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -268341946LL;
	uint8_t x34 = UINT8_MAX;
	uint8_t x35 = 7U;
	int32_t x36 = 3530289;
	int64_t t8 = -11747288217309055LL;

	t8 = (((x33%x34)%x35)*x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = -1;
	static volatile int32_t x39 = 14;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = 266613349;

	t9 = (((x37%x38)%x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 61U;
	volatile int32_t t10 = -243792;

	t10 = (((x41%x42)%x43)*x44);

	if (t10 != 122) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static uint16_t x48 = 253U;
	int64_t t11 = 440539195169478435LL;

	t11 = (((x45%x46)%x47)*x48);

	if (t11 != 253LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x53 = 0U;
	int16_t x54 = INT16_MIN;
	volatile int32_t x55 = -281719559;
	int16_t x56 = INT16_MIN;

	t12 = (((x53%x54)%x55)*x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 3161U;
	int64_t x59 = INT64_MIN;
	static uint64_t x60 = 126380082822172LLU;
	uint64_t t13 = 2122398LLU;

	t13 = (((x57%x58)%x59)*x60);

	if (t13 != 198543110113632212LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x63 = INT64_MIN;
	uint64_t x64 = 8005LLU;
	uint64_t t14 = 552691400916235457LLU;

	t14 = (((x61%x62)%x63)*x64);

	if (t14 != 18446744073709487576LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x67 = UINT64_MAX;
	static volatile int16_t x68 = INT16_MIN;
	volatile uint64_t t15 = 12299LLU;

	t15 = (((x65%x66)%x67)*x68);

	if (t15 != 13518247946720444416LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 0;
	int64_t x74 = INT64_MAX;
	static int32_t x76 = -5;
	volatile int64_t t16 = -86896LL;

	t16 = (((x73%x74)%x75)*x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x79 = 15;
	volatile uint8_t x80 = 8U;
	int32_t t17 = -1;

	t17 = (((x77%x78)%x79)*x80);

	if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -15;
	uint64_t x82 = 35LLU;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = 9850587398322LL;
	volatile uint64_t t18 = 323148593589160675LLU;

	t18 = (((x81%x82)%x83)*x84);

	if (t18 != 9850587398322LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 0U;
	int32_t x86 = INT32_MAX;
	static volatile uint32_t x88 = UINT32_MAX;
	static uint32_t t19 = 2961U;

	t19 = (((x85%x86)%x87)*x88);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	volatile int32_t x90 = INT32_MAX;
	volatile int32_t x91 = INT32_MAX;
	int8_t x92 = INT8_MAX;
	static volatile int64_t t20 = -19915266977794LL;

	t20 = (((x89%x90)%x91)*x92);

	if (t20 != -254LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 14U;
	volatile int16_t x95 = -16064;
	uint16_t x96 = UINT16_MAX;
	volatile uint32_t t21 = 17U;

	t21 = (((x93%x94)%x95)*x96);

	if (t21 != 917490U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	static volatile uint16_t x104 = 53U;
	volatile int32_t t22 = 674649;

	t22 = (((x101%x102)%x103)*x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x107 = -1;
	int8_t x108 = INT8_MIN;
	int64_t t23 = 2379396686483211427LL;

	t23 = (((x105%x106)%x107)*x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x110 = 69LL;
	int16_t x112 = INT16_MIN;
	static uint64_t t24 = 78787270939511459LLU;

	t24 = (((x109%x110)%x111)*x112);

	if (t24 != 18446744073708765184LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = 3867956U;
	int16_t x114 = INT16_MIN;
	int32_t x115 = 211643;
	int32_t x116 = INT32_MAX;

	t25 = (((x113%x114)%x115)*x116);

	if (t25 != 4294908914U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x117 = 6U;
	volatile uint8_t x119 = 1U;
	int8_t x120 = 0;
	volatile int64_t t26 = 31904176395LL;

	t26 = (((x117%x118)%x119)*x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x126 = INT16_MIN;
	int8_t x127 = -1;
	int32_t x128 = 211865841;

	t27 = (((x125%x126)%x127)*x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x133 = 0LLU;
	int64_t x134 = INT64_MIN;
	int32_t x135 = 150219;
	volatile uint16_t x136 = 82U;
	uint64_t t28 = 3293722129LLU;

	t28 = (((x133%x134)%x135)*x136);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	static uint8_t x139 = 3U;
	volatile uint32_t t29 = 6U;

	t29 = (((x137%x138)%x139)*x140);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = -1;
	int64_t t30 = -132922865189LL;

	t30 = (((x141%x142)%x143)*x144);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x146 = -15;
	static uint32_t x148 = 1789U;
	uint32_t t31 = 173463U;

	t31 = (((x145%x146)%x147)*x148);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x149 = 2U;
	uint16_t x151 = 26U;

	t32 = (((x149%x150)%x151)*x152);

	if (t32 != 11730519964LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = 0U;
	int64_t x154 = -4572910012038367617LL;
	int64_t x155 = -1401544942844LL;
	volatile int64_t t33 = 1639638LL;

	t33 = (((x153%x154)%x155)*x156);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 27U;
	static int32_t x158 = INT32_MAX;
	uint16_t x159 = UINT16_MAX;
	uint64_t x160 = 9318828LLU;
	static uint64_t t34 = 3851863022LLU;

	t34 = (((x157%x158)%x159)*x160);

	if (t34 != 251608356LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -1348LL;
	volatile uint8_t x162 = 4U;
	static int64_t x164 = -1LL;
	int64_t t35 = 110212767353LL;

	t35 = (((x161%x162)%x163)*x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x170 = 2220;
	uint64_t x171 = 417908506677856872LLU;
	int32_t x172 = -282;
	static volatile uint64_t t36 = 1422LLU;

	t36 = (((x169%x170)%x171)*x172);

	if (t36 != 18446744073709458274LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x174 = INT64_MIN;
	int64_t x176 = -220405002588515LL;
	int64_t t37 = 5139359LL;

	t37 = (((x173%x174)%x175)*x176);

	if (t37 != 7222231124820459520LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 87227830175701938LLU;
	int8_t x178 = INT8_MAX;
	static volatile int32_t x180 = 71117;
	uint64_t t38 = 31142311975204834LLU;

	t38 = (((x177%x178)%x179)*x180);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x184 = -1;

	t39 = (((x181%x182)%x183)*x184);

	if (t39 != 32) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x187 = INT64_MAX;
	volatile int32_t x188 = -3984;

	t40 = (((x185%x186)%x187)*x188);

	if (t40 != 3984LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = 723725415747957LL;
	int8_t x191 = INT8_MAX;
	static uint32_t x192 = 639U;

	t41 = (((x189%x190)%x191)*x192);

	if (t41 != 17253LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = 125821U;
	int64_t x198 = 47040104882782LL;
	uint16_t x199 = 347U;
	static uint16_t x200 = 967U;
	int64_t t42 = 9749627LL;

	t42 = (((x197%x198)%x199)*x200);

	if (t42 != 200169LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = 8549LL;
	uint16_t x202 = 30U;
	volatile int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MAX;
	int64_t t43 = 12617262LL;

	t43 = (((x201%x202)%x203)*x204);

	if (t43 != 62277025763LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 63U;
	static int16_t x210 = -1;
	uint32_t x211 = 63183035U;
	volatile uint16_t x212 = UINT16_MAX;
	volatile uint32_t t44 = 5699535U;

	t44 = (((x209%x210)%x211)*x212);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x213 = 882481U;
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = -1LL;
	int64_t t45 = 2LL;

	t45 = (((x213%x214)%x215)*x216);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x217 = 99935593957LL;
	int16_t x219 = -13;
	volatile int32_t x220 = 5;
	int64_t t46 = 56702833435299LL;

	t46 = (((x217%x218)%x219)*x220);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = INT16_MIN;
	static uint32_t x223 = 253U;
	int16_t x224 = INT16_MIN;
	uint32_t t47 = 491U;

	t47 = (((x221%x222)%x223)*x224);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MIN;
	static int16_t x227 = -1;
	uint16_t x228 = 1717U;
	volatile int64_t t48 = -516094336627137071LL;

	t48 = (((x225%x226)%x227)*x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x230 = -1;
	int8_t x231 = 6;
	uint64_t x232 = UINT64_MAX;
	volatile uint64_t t49 = 291894009226294246LLU;

	t49 = (((x229%x230)%x231)*x232);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -1;
	uint16_t x234 = UINT16_MAX;
	static int16_t x235 = INT16_MAX;
	volatile int16_t x236 = 0;

	t50 = (((x233%x234)%x235)*x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x238 = -1;
	int8_t x239 = 9;
	volatile int64_t t51 = 58168101753590394LL;

	t51 = (((x237%x238)%x239)*x240);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x241 = -1LL;
	int32_t x242 = INT32_MIN;
	int8_t x244 = INT8_MIN;
	static int64_t t52 = -5522646LL;

	t52 = (((x241%x242)%x243)*x244);

	if (t52 != 128LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x246 = INT64_MAX;
	volatile int8_t x247 = -58;
	uint16_t x248 = 9U;
	int64_t t53 = -3110293LL;

	t53 = (((x245%x246)%x247)*x248);

	if (t53 != -72LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x251 = -10350169066831LL;
	int16_t x252 = INT16_MAX;
	volatile int64_t t54 = -1000795566541LL;

	t54 = (((x249%x250)%x251)*x252);

	if (t54 != -1073709056LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x254 = UINT32_MAX;
	volatile uint32_t t55 = 264U;

	t55 = (((x253%x254)%x255)*x256);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = -14322LL;
	static int8_t x258 = INT8_MAX;
	int32_t x259 = -1;
	uint8_t x260 = UINT8_MAX;

	t56 = (((x257%x258)%x259)*x260);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = 12;
	int8_t x262 = INT8_MIN;
	int32_t x263 = -17717;
	volatile int64_t x264 = -1LL;

	t57 = (((x261%x262)%x263)*x264);

	if (t57 != -12LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = 1;
	int16_t x266 = INT16_MIN;
	int32_t x267 = 215596;
	uint16_t x268 = 3452U;
	volatile int32_t t58 = 228479;

	t58 = (((x265%x266)%x267)*x268);

	if (t58 != 3452) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = -122;
	uint8_t x270 = 4U;
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 61044U;
	static volatile uint32_t t59 = 1357U;

	t59 = (((x269%x270)%x271)*x272);

	if (t59 != 4294845208U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x274 = 125U;
	int32_t x275 = -1;
	volatile uint32_t x276 = 1U;
	volatile uint32_t t60 = 4U;

	t60 = (((x273%x274)%x275)*x276);

	if (t60 != 28U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = 29946;
	uint64_t x279 = 61789LLU;
	uint64_t t61 = 911205555LLU;

	t61 = (((x277%x278)%x279)*x280);

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x281 = 164;
	volatile int32_t x283 = INT32_MIN;
	volatile int8_t x284 = INT8_MAX;

	t62 = (((x281%x282)%x283)*x284);

	if (t62 != 20828) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x286 = -967;
	uint32_t x288 = 19943827U;
	static volatile uint32_t t63 = 1003U;

	t63 = (((x285%x286)%x287)*x288);

	if (t63 != 1116854312U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MIN;
	static int32_t x290 = 3861738;
	int32_t x291 = INT32_MIN;
	uint8_t x292 = UINT8_MAX;
	int64_t t64 = -199107665653484698LL;

	t64 = (((x289%x290)%x291)*x292);

	if (t64 != -408328440LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = 1937753LLU;
	uint64_t x294 = 6197624LLU;
	int64_t x295 = INT64_MAX;
	uint32_t x296 = UINT32_MAX;
	uint64_t t65 = 57133255308958LLU;

	t65 = (((x293%x294)%x295)*x296);

	if (t65 != 8322585760788135LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 4U;
	static uint32_t x304 = 1153984U;
	volatile uint32_t t66 = 2968U;

	t66 = (((x301%x302)%x303)*x304);

	if (t66 != 3461952U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x305 = 3LLU;
	uint16_t x306 = UINT16_MAX;
	volatile uint64_t x308 = 15116549297606017LLU;

	t67 = (((x305%x306)%x307)*x308);

	if (t67 != 45349647892818051LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x314 = -1;
	int32_t x316 = INT32_MIN;
	static int64_t t68 = 3166565LL;

	t68 = (((x313%x314)%x315)*x316);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x317 = INT32_MAX;
	volatile int64_t x318 = -999998LL;
	static uint8_t x319 = 32U;
	uint32_t x320 = 77775U;
	int64_t t69 = 241071408151LL;

	t69 = (((x317%x318)%x319)*x320);

	if (t69 != 388875LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = 4;
	int32_t x322 = -1;
	int64_t x324 = -1LL;
	volatile uint64_t t70 = 958LLU;

	t70 = (((x321%x322)%x323)*x324);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x325 = -1;
	uint32_t x326 = UINT32_MAX;
	static int32_t x327 = -442709;
	uint32_t x328 = UINT32_MAX;
	uint32_t t71 = 33406613U;

	t71 = (((x325%x326)%x327)*x328);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = INT32_MAX;
	volatile uint64_t x330 = 6459546445LLU;
	int8_t x331 = INT8_MIN;
	static int32_t x332 = INT32_MAX;
	volatile uint64_t t72 = 30LLU;

	t72 = (((x329%x330)%x331)*x332);

	if (t72 != 4611686014132420609LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x333 = 11;
	uint64_t x335 = UINT64_MAX;
	uint8_t x336 = 45U;
	static uint64_t t73 = 104LLU;

	t73 = (((x333%x334)%x335)*x336);

	if (t73 != 495LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = 1090LL;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -1;

	t74 = (((x337%x338)%x339)*x340);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x341 = UINT8_MAX;
	static int32_t x343 = INT32_MAX;
	uint8_t x344 = 6U;
	static volatile uint32_t t75 = 265824604U;

	t75 = (((x341%x342)%x343)*x344);

	if (t75 != 1530U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	int8_t x348 = INT8_MIN;

	t76 = (((x345%x346)%x347)*x348);

	if (t76 != 4290773120U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x354 = 22916LLU;
	uint32_t x355 = 649116U;
	static int32_t x356 = -241599342;
	uint64_t t77 = 0LLU;

	t77 = (((x353%x354)%x355)*x356);

	if (t77 != 18446743615637199184LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x357 = -416366677877LL;
	int32_t x358 = -11521;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = UINT64_MAX;
	uint64_t t78 = 2838930682033713LLU;

	t78 = (((x357%x358)%x359)*x360);

	if (t78 != 7514LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x361 = UINT16_MAX;
	uint32_t x362 = 806U;
	static uint8_t x363 = 16U;
	int8_t x364 = INT8_MIN;
	volatile uint32_t t79 = 4726726U;

	t79 = (((x361%x362)%x363)*x364);

	if (t79 != 4294966144U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = -1;
	int64_t t80 = 762827395769864LL;

	t80 = (((x373%x374)%x375)*x376);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x377 = 915507796505196883LLU;
	int16_t x378 = 40;
	static int32_t x379 = INT32_MIN;
	static volatile int64_t x380 = INT64_MIN;
	volatile uint64_t t81 = 13643058626346472LLU;

	t81 = (((x377%x378)%x379)*x380);

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x382 = INT64_MAX;
	volatile int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MIN;
	static int64_t t82 = -493529624LL;

	t82 = (((x381%x382)%x383)*x384);

	if (t82 != 247732864LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x385 = 299LLU;
	int32_t x386 = 81789414;
	int8_t x387 = -7;
	volatile uint64_t t83 = 1996815039230058LLU;

	t83 = (((x385%x386)%x387)*x388);

	if (t83 != 11362LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x389 = -61130206250LL;
	int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	static int16_t x392 = INT16_MIN;
	static int64_t t84 = 7078508673LL;

	t84 = (((x389%x390)%x391)*x392);

	if (t84 != 907345920LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x393 = -1;
	int32_t x394 = -1;
	volatile int16_t x395 = -1;
	static int64_t x396 = INT64_MAX;
	static int64_t t85 = -535LL;

	t85 = (((x393%x394)%x395)*x396);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x398 = -1LL;
	volatile uint16_t x399 = UINT16_MAX;
	static volatile uint64_t t86 = 80034832844347LLU;

	t86 = (((x397%x398)%x399)*x400);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = INT8_MIN;
	volatile uint16_t x403 = 42U;
	volatile int64_t t87 = -5054917LL;

	t87 = (((x401%x402)%x403)*x404);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x406 = 76;
	int32_t x407 = INT32_MIN;
	int32_t x408 = -13;

	t88 = (((x405%x406)%x407)*x408);

	if (t88 != -728) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x409 = UINT16_MAX;

	t89 = (((x409%x410)%x411)*x412);

	if (t89 != 12884901885LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = -1;
	int8_t x414 = 1;
	static int16_t x415 = -31;
	volatile uint16_t x416 = 1734U;
	static int32_t t90 = -5;

	t90 = (((x413%x414)%x415)*x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = -1;
	uint32_t x419 = 53U;
	int64_t x420 = -1LL;
	volatile int64_t t91 = 35LL;

	t91 = (((x417%x418)%x419)*x420);

	if (t91 != -41LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x422 = UINT16_MAX;
	int8_t x423 = INT8_MAX;
	int32_t x424 = -28403;
	int32_t t92 = 193;

	t92 = (((x421%x422)%x423)*x424);

	if (t92 != 56806) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x425 = 147U;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	int32_t t93 = -2285354;

	t93 = (((x425%x426)%x427)*x428);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = 7205;
	static int64_t x430 = -1LL;
	int8_t x431 = 5;
	volatile int64_t t94 = 4592754004054356LL;

	t94 = (((x429%x430)%x431)*x432);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = INT32_MAX;
	static volatile int8_t x435 = INT8_MAX;
	static int32_t x436 = -1;
	volatile uint32_t t95 = 3946909U;

	t95 = (((x433%x434)%x435)*x436);

	if (t95 != 4294967198U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x437 = 59904U;
	int16_t x438 = 16;
	static uint64_t x439 = 1400350082LLU;
	int64_t x440 = INT64_MAX;
	static uint64_t t96 = 2137876073118324386LLU;

	t96 = (((x437%x438)%x439)*x440);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x442 = INT64_MIN;
	int8_t x443 = INT8_MIN;
	int16_t x444 = INT16_MIN;

	t97 = (((x441%x442)%x443)*x444);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x449 = 17U;
	uint16_t x450 = UINT16_MAX;
	volatile int32_t x452 = INT32_MIN;
	volatile uint32_t t98 = 199137893U;

	t98 = (((x449%x450)%x451)*x452);

	if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x453 = INT32_MIN;
	volatile int32_t x454 = -1;
	int8_t x455 = -1;
	int64_t x456 = INT64_MIN;

	t99 = (((x453%x454)%x455)*x456);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

