#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1409846;
uint32_t x5 = UINT32_MAX;
uint16_t x8 = 1509U;
static int64_t x10 = -3114LL;
volatile int64_t t2 = INT64_MAX;
volatile uint64_t x14 = 186714637671LLU;
static int16_t x16 = -16;
volatile int32_t t7 = 40820;
volatile int32_t t9 = -8965319;
uint64_t x44 = 11460148671LLU;
uint16_t x47 = 6U;
int16_t x48 = INT16_MAX;
static uint16_t x50 = UINT16_MAX;
volatile uint64_t x51 = UINT64_MAX;
uint16_t x53 = 11813U;
int64_t x55 = INT64_MAX;
volatile int32_t t14 = 235116251;
uint64_t x61 = UINT64_MAX;
int32_t t17 = 699339;
static int32_t x79 = INT32_MAX;
volatile int8_t x80 = INT8_MIN;
int8_t x82 = -7;
static int8_t x86 = -26;
uint64_t x90 = 673LLU;
uint32_t x100 = 7105427U;
int8_t x101 = 15;
static int32_t x103 = -1527438;
volatile int32_t t25 = -505784185;
volatile uint32_t x111 = UINT32_MAX;
static volatile int64_t t26 = -66049225140934864LL;
uint64_t x120 = 620463LLU;
volatile uint64_t t27 = 7LLU;
volatile int8_t x126 = INT8_MAX;
static volatile int64_t x132 = 979242527784245LL;
static int64_t t30 = 6376LL;
int64_t x133 = -1LL;
static volatile uint32_t x134 = 3057U;
static uint8_t x136 = 1U;
int32_t t33 = 2;
uint64_t x155 = UINT64_MAX;
uint32_t x158 = 15879U;
volatile int32_t x160 = -703577795;
static uint8_t x161 = 0U;
volatile int32_t x163 = 63506757;
static int64_t x168 = 427445899LL;
int64_t x171 = INT64_MIN;
volatile int32_t x175 = -15;
static int32_t x180 = -8;
static int64_t x182 = INT64_MAX;
volatile int8_t x191 = -1;
int32_t x193 = 222531281;
int64_t x195 = -4101876LL;
uint64_t t47 = 666367LLU;
int16_t x202 = INT16_MIN;
int8_t x209 = -1;
int8_t x217 = INT8_MIN;
uint16_t x223 = 2U;
int32_t t58 = 138152;
uint16_t x252 = 1U;
static uint32_t x253 = UINT32_MAX;
volatile int16_t x254 = -1;
uint32_t x257 = 1604397289U;
int16_t x286 = INT16_MIN;
static uint32_t x290 = 405512U;
int64_t x302 = INT64_MIN;
int32_t x308 = -1;
static int32_t t73 = 0;
static int16_t x313 = INT16_MIN;
int8_t x314 = INT8_MIN;
int8_t x316 = -1;
int64_t t76 = -44027058998659204LL;
volatile int32_t t77 = INT32_MIN;
static int64_t x339 = INT64_MIN;
int64_t x348 = -1LL;
uint16_t x352 = 203U;
uint16_t x354 = 22U;
volatile int8_t x360 = 34;
int64_t x362 = INT64_MAX;
static uint64_t x367 = UINT64_MAX;
static volatile int32_t t88 = -487;
int16_t x393 = INT16_MIN;
int32_t t93 = -89242;
volatile int16_t x402 = 5999;
int32_t t95 = 3;
int64_t x407 = INT64_MAX;
uint8_t x410 = UINT8_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint32_t x3 = 91U;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 591;

	t0 = (((x1/x2)<=x3)*x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = 69085020616LLU;
	static int64_t x7 = INT64_MAX;
	int32_t t1 = -3993073;

	t1 = (((x5/x6)<=x7)*x8);

	if (t1 != 1509) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 837687933303LLU;
	int64_t x11 = INT64_MIN;
	static volatile int64_t x12 = INT64_MAX;

	t2 = (((x9/x10)<=x11)*x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	static int32_t x15 = INT32_MIN;
	int32_t t3 = 0;

	t3 = (((x13/x14)<=x15)*x16);

	if (t3 != -16) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	int64_t x18 = -1LL;
	volatile int32_t x19 = INT32_MIN;
	volatile int16_t x20 = -9;
	volatile int32_t t4 = -1;

	t4 = (((x17/x18)<=x19)*x20);

	if (t4 != -9) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 237;
	uint8_t x22 = 41U;
	uint32_t x23 = UINT32_MAX;
	static int16_t x24 = 138;
	int32_t t5 = -170111;

	t5 = (((x21/x22)<=x23)*x24);

	if (t5 != 138) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -6;
	int16_t x26 = INT16_MIN;
	int8_t x27 = -7;
	uint64_t x28 = 5LLU;
	volatile uint64_t t6 = 16LLU;

	t6 = (((x25/x26)<=x27)*x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 1;
	int16_t x30 = INT16_MAX;
	int16_t x31 = -6;
	uint8_t x32 = UINT8_MAX;

	t7 = (((x29/x30)<=x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1456570;
	int8_t x34 = INT8_MAX;
	int32_t x35 = INT32_MAX;
	int32_t x36 = -1;
	volatile int32_t t8 = 141432;

	t8 = (((x33/x34)<=x35)*x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	static int8_t x39 = 0;
	int32_t x40 = 5220;

	t9 = (((x37/x38)<=x39)*x40);

	if (t9 != 5220) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int16_t x42 = -6891;
	volatile uint8_t x43 = 0U;
	uint64_t t10 = 3364232462856719LLU;

	t10 = (((x41/x42)<=x43)*x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 19;
	int64_t x46 = 5436970643116011LL;
	int32_t t11 = -1;

	t11 = (((x45/x46)<=x47)*x48);

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MAX;
	static volatile uint32_t x52 = 918U;
	volatile uint32_t t12 = 891694U;

	t12 = (((x49/x50)<=x51)*x52);

	if (t12 != 918U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 110194446U;
	volatile uint64_t x56 = 58350715154953LLU;
	volatile uint64_t t13 = 54795791108403LLU;

	t13 = (((x53/x54)<=x55)*x56);

	if (t13 != 58350715154953LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = INT8_MAX;
	static volatile uint16_t x58 = 13U;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 14049U;

	t14 = (((x57/x58)<=x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MIN;
	static uint32_t x63 = UINT32_MAX;
	static int16_t x64 = 164;
	int32_t t15 = -408114;

	t15 = (((x61/x62)<=x63)*x64);

	if (t15 != 164) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 15085U;
	uint32_t x66 = 83235U;
	uint32_t x67 = UINT32_MAX;
	static int8_t x68 = -4;
	volatile int32_t t16 = -2871;

	t16 = (((x65/x66)<=x67)*x68);

	if (t16 != -4) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 0U;
	int16_t x70 = 50;
	uint64_t x71 = 8LLU;
	volatile int32_t x72 = -1;

	t17 = (((x69/x70)<=x71)*x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MIN;
	static int8_t x78 = -1;
	volatile int32_t t18 = 5692;

	t18 = (((x77/x78)<=x79)*x80);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -1;
	int8_t x83 = INT8_MAX;
	int8_t x84 = 7;
	int32_t t19 = -540827;

	t19 = (((x81/x82)<=x83)*x84);

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = -1132499;
	int8_t x87 = -1;
	int32_t x88 = INT32_MIN;
	int32_t t20 = -489835;

	t20 = (((x85/x86)<=x87)*x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x89 = -1;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = -35;
	volatile int32_t t21 = -65;

	t21 = (((x89/x90)<=x91)*x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MAX;
	static int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t22 = 52;

	t22 = (((x93/x94)<=x95)*x96);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x97 = -1;
	static uint16_t x98 = UINT16_MAX;
	static volatile int32_t x99 = 57;
	static uint32_t t23 = 46U;

	t23 = (((x97/x98)<=x99)*x100);

	if (t23 != 7105427U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x102 = 5LLU;
	int64_t x104 = -225143794942635LL;
	int64_t t24 = 8489450225LL;

	t24 = (((x101/x102)<=x103)*x104);

	if (t24 != -225143794942635LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 460U;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = 1551;
	int8_t x108 = -1;

	t25 = (((x105/x106)<=x107)*x108);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = -122355LL;
	static int8_t x110 = INT8_MIN;
	volatile int64_t x112 = -41558LL;

	t26 = (((x109/x110)<=x111)*x112);

	if (t26 != -41558LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = INT32_MAX;
	int64_t x118 = INT64_MAX;
	int32_t x119 = INT32_MIN;

	t27 = (((x117/x118)<=x119)*x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	uint8_t x122 = 45U;
	static int8_t x123 = INT8_MIN;
	int16_t x124 = INT16_MAX;
	int32_t t28 = 15746;

	t28 = (((x121/x122)<=x123)*x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t29 = 9;

	t29 = (((x125/x126)<=x127)*x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -882;
	static int8_t x130 = INT8_MIN;
	int64_t x131 = 46964518352LL;

	t30 = (((x129/x130)<=x131)*x132);

	if (t30 != 979242527784245LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x135 = INT32_MIN;
	static volatile int32_t t31 = 165;

	t31 = (((x133/x134)<=x135)*x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = 1014LL;
	uint8_t x138 = UINT8_MAX;
	int8_t x139 = -3;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t32 = 13296678;

	t32 = (((x137/x138)<=x139)*x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 13420826;
	static uint16_t x142 = 31788U;
	static int64_t x143 = 34038487040LL;
	volatile int8_t x144 = 1;

	t33 = (((x141/x142)<=x143)*x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = 3;
	uint32_t x146 = 204990584U;
	int32_t x147 = INT32_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t34 = -1350;

	t34 = (((x145/x146)<=x147)*x148);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x149 = 57376416LLU;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = INT64_MAX;
	static volatile int64_t t35 = INT64_MAX;

	t35 = (((x149/x150)<=x151)*x152);

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x153 = INT16_MIN;
	volatile uint16_t x154 = UINT16_MAX;
	int64_t x156 = 236639LL;
	static volatile int64_t t36 = 538373144769678LL;

	t36 = (((x153/x154)<=x155)*x156);

	if (t36 != 236639LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	int32_t x159 = -7;
	volatile int32_t t37 = 11;

	t37 = (((x157/x158)<=x159)*x160);

	if (t37 != -703577795) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x162 = 95300531975193855LLU;
	static uint64_t x164 = UINT64_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x161/x162)<=x163)*x164);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -41281LL;
	uint16_t x166 = 5023U;
	static uint16_t x167 = UINT16_MAX;
	static int64_t t39 = -50084LL;

	t39 = (((x165/x166)<=x167)*x168);

	if (t39 != 427445899LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -133;
	uint64_t x170 = 117713397118895214LLU;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t40 = 0;

	t40 = (((x169/x170)<=x171)*x172);

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = 531;
	int32_t x174 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	int32_t t41 = -87474;

	t41 = (((x173/x174)<=x175)*x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -1;
	int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	int32_t t42 = 2691;

	t42 = (((x177/x178)<=x179)*x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x181 = 8U;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = UINT16_MAX;
	int32_t t43 = -69074;

	t43 = (((x181/x182)<=x183)*x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = -128806016LL;
	uint32_t x187 = 100U;
	int64_t x188 = -1LL;
	volatile int64_t t44 = 152LL;

	t44 = (((x185/x186)<=x187)*x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 12101U;
	int16_t x190 = -48;
	int64_t x192 = -59681990521225184LL;
	int64_t t45 = -1LL;

	t45 = (((x189/x190)<=x191)*x192);

	if (t45 != -59681990521225184LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x194 = UINT8_MAX;
	volatile int64_t x196 = 26123850831379337LL;
	static volatile int64_t t46 = -32812LL;

	t46 = (((x193/x194)<=x195)*x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	uint64_t x198 = 14941676LLU;
	static uint16_t x199 = UINT16_MAX;
	static uint64_t x200 = UINT64_MAX;

	t47 = (((x197/x198)<=x199)*x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x201 = 5298743LL;
	int64_t x203 = -11LL;
	volatile int32_t x204 = -1;
	int32_t t48 = 1;

	t48 = (((x201/x202)<=x203)*x204);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t49 = -914664;

	t49 = (((x209/x210)<=x211)*x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = -541146128199LL;
	int8_t x214 = 3;
	volatile uint32_t x215 = UINT32_MAX;
	static volatile int8_t x216 = 0;
	static volatile int32_t t50 = -61059035;

	t50 = (((x213/x214)<=x215)*x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x218 = 451U;
	volatile int32_t x219 = -3158;
	static int16_t x220 = INT16_MAX;
	static int32_t t51 = -364982408;

	t51 = (((x217/x218)<=x219)*x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 1657U;
	volatile int16_t x222 = INT16_MAX;
	uint16_t x224 = 217U;
	int32_t t52 = -89;

	t52 = (((x221/x222)<=x223)*x224);

	if (t52 != 217) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	static uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MAX;
	volatile int32_t t53 = 4;

	t53 = (((x225/x226)<=x227)*x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = INT64_MAX;
	int8_t x230 = -5;
	static int8_t x231 = -1;
	int8_t x232 = -1;
	static volatile int32_t t54 = -7765095;

	t54 = (((x229/x230)<=x231)*x232);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1794;
	static volatile uint8_t x234 = 34U;
	int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MAX;
	int64_t t55 = 24LL;

	t55 = (((x233/x234)<=x235)*x236);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x237 = 166248U;
	volatile int8_t x238 = INT8_MIN;
	uint64_t x239 = UINT64_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t56 = 417473;

	t56 = (((x237/x238)<=x239)*x240);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x241 = 343617;
	int8_t x242 = -1;
	uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t57 = -58170;

	t57 = (((x241/x242)<=x243)*x244);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = UINT64_MAX;
	static int64_t x246 = -1LL;
	int64_t x247 = INT64_MAX;
	int16_t x248 = -1;

	t58 = (((x245/x246)<=x247)*x248);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x249 = UINT16_MAX;
	uint8_t x250 = UINT8_MAX;
	volatile int64_t x251 = -67612856LL;
	volatile int32_t t59 = -11;

	t59 = (((x249/x250)<=x251)*x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x255 = INT16_MIN;
	int16_t x256 = -2;
	int32_t t60 = 7845;

	t60 = (((x253/x254)<=x255)*x256);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x258 = INT32_MAX;
	uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MAX;
	int32_t t61 = 3855;

	t61 = (((x257/x258)<=x259)*x260);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = UINT64_MAX;
	uint8_t x266 = 8U;
	static volatile int8_t x267 = -1;
	static int32_t x268 = -1014;
	static volatile int32_t t62 = -64;

	t62 = (((x265/x266)<=x267)*x268);

	if (t62 != -1014) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int16_t x270 = 127;
	int64_t x271 = -5740224487761LL;
	uint64_t x272 = 58970425264900LLU;
	uint64_t t63 = 193871884LLU;

	t63 = (((x269/x270)<=x271)*x272);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 16;
	uint32_t x274 = 337U;
	int8_t x275 = INT8_MAX;
	static uint16_t x276 = UINT16_MAX;
	int32_t t64 = 0;

	t64 = (((x273/x274)<=x275)*x276);

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x277 = 12487U;
	int8_t x278 = INT8_MIN;
	volatile uint32_t x279 = 424U;
	volatile int64_t x280 = -4032563691561LL;
	volatile int64_t t65 = -149822642262104LL;

	t65 = (((x277/x278)<=x279)*x280);

	if (t65 != -4032563691561LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x281 = INT32_MIN;
	int32_t x282 = 8;
	volatile int8_t x283 = 11;
	int8_t x284 = INT8_MAX;
	int32_t t66 = -255103;

	t66 = (((x281/x282)<=x283)*x284);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = UINT8_MAX;
	uint16_t x287 = 43U;
	int64_t x288 = -1LL;
	volatile int64_t t67 = 3481LL;

	t67 = (((x285/x286)<=x287)*x288);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x289 = 115U;
	static uint32_t x291 = 175039U;
	int8_t x292 = INT8_MIN;
	int32_t t68 = -793964;

	t68 = (((x289/x290)<=x291)*x292);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = 7U;
	int16_t x294 = INT16_MIN;
	int64_t x295 = INT64_MAX;
	volatile int32_t x296 = -24463;
	int32_t t69 = -470629;

	t69 = (((x293/x294)<=x295)*x296);

	if (t69 != -24463) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = 14U;
	uint64_t x299 = 27099LLU;
	volatile int64_t x300 = INT64_MIN;
	int64_t t70 = 4LL;

	t70 = (((x297/x298)<=x299)*x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MAX;
	static uint8_t x303 = UINT8_MAX;
	uint32_t x304 = 199584U;
	static uint32_t t71 = 398718U;

	t71 = (((x301/x302)<=x303)*x304);

	if (t71 != 199584U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = -1LL;
	uint8_t x306 = 28U;
	int8_t x307 = INT8_MIN;
	volatile int32_t t72 = -405723498;

	t72 = (((x305/x306)<=x307)*x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x309 = -8529686LL;
	int16_t x310 = 44;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -3904;

	t73 = (((x309/x310)<=x311)*x312);

	if (t73 != -3904) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x315 = INT32_MIN;
	int32_t t74 = -1831313;

	t74 = (((x313/x314)<=x315)*x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = 1;
	volatile int16_t x318 = -1;
	volatile uint32_t x319 = 5885U;
	static int16_t x320 = -1;
	volatile int32_t t75 = -3;

	t75 = (((x317/x318)<=x319)*x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = 6698403750846503LL;
	volatile int64_t x322 = INT64_MIN;
	static uint16_t x323 = UINT16_MAX;
	int64_t x324 = 58457756LL;

	t76 = (((x321/x322)<=x323)*x324);

	if (t76 != 58457756LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x325 = UINT16_MAX;
	static int8_t x326 = -1;
	int8_t x327 = INT8_MAX;
	int32_t x328 = INT32_MIN;

	t77 = (((x325/x326)<=x327)*x328);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = -1;
	int64_t x330 = INT64_MIN;
	uint16_t x331 = 7U;
	volatile int16_t x332 = 0;
	int32_t t78 = -53;

	t78 = (((x329/x330)<=x331)*x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 31693848U;
	int32_t x335 = INT32_MIN;
	volatile int64_t x336 = -1LL;
	volatile int64_t t79 = -247370433634558808LL;

	t79 = (((x333/x334)<=x335)*x336);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x337 = 1U;
	static volatile int16_t x338 = -1;
	int16_t x340 = INT16_MAX;
	volatile int32_t t80 = -34155369;

	t80 = (((x337/x338)<=x339)*x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x341 = INT64_MAX;
	uint32_t x342 = UINT32_MAX;
	static volatile int8_t x343 = -3;
	int64_t x344 = -1LL;
	volatile int64_t t81 = -62848956LL;

	t81 = (((x341/x342)<=x343)*x344);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = 10;
	int16_t x346 = 10;
	volatile int8_t x347 = -25;
	int64_t t82 = -171729426706455LL;

	t82 = (((x345/x346)<=x347)*x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x349 = 14375U;
	int64_t x350 = INT64_MIN;
	int64_t x351 = 155568131LL;
	static int32_t t83 = -250954;

	t83 = (((x349/x350)<=x351)*x352);

	if (t83 != 203) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = 1743;
	volatile uint64_t x355 = 52268972LLU;
	uint8_t x356 = 3U;
	volatile int32_t t84 = -1;

	t84 = (((x353/x354)<=x355)*x356);

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x357 = 18U;
	uint8_t x358 = UINT8_MAX;
	static uint16_t x359 = UINT16_MAX;
	int32_t t85 = -49821269;

	t85 = (((x357/x358)<=x359)*x360);

	if (t85 != 34) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -1;
	uint8_t x363 = UINT8_MAX;
	int32_t x364 = -1;
	volatile int32_t t86 = 2;

	t86 = (((x361/x362)<=x363)*x364);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x365 = 494027288U;
	volatile int32_t x366 = -1;
	volatile uint32_t x368 = 106501754U;
	volatile uint32_t t87 = 9U;

	t87 = (((x365/x366)<=x367)*x368);

	if (t87 != 106501754U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x369 = INT16_MIN;
	int64_t x370 = -1LL;
	int32_t x371 = INT32_MIN;
	int8_t x372 = -61;

	t88 = (((x369/x370)<=x371)*x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = INT64_MIN;
	volatile int16_t x375 = INT16_MIN;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t89 = -1353433;

	t89 = (((x373/x374)<=x375)*x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MIN;
	static volatile uint8_t x378 = UINT8_MAX;
	volatile int8_t x379 = 30;
	int32_t x380 = INT32_MIN;
	int32_t t90 = INT32_MIN;

	t90 = (((x377/x378)<=x379)*x380);

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = -1;
	int8_t x386 = 1;
	int8_t x387 = 2;
	int16_t x388 = INT16_MIN;
	volatile int32_t t91 = -1010511962;

	t91 = (((x385/x386)<=x387)*x388);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x389 = 36U;
	uint16_t x390 = 113U;
	int64_t x391 = -26438679790862131LL;
	volatile int16_t x392 = 3;
	volatile int32_t t92 = -11;

	t92 = (((x389/x390)<=x391)*x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x394 = -479LL;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = 5;

	t93 = (((x393/x394)<=x395)*x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MIN;
	uint8_t x399 = 0U;
	static uint8_t x400 = 120U;
	int32_t t94 = -25777;

	t94 = (((x397/x398)<=x399)*x400);

	if (t94 != 120) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = UINT16_MAX;
	static volatile int64_t x403 = -1LL;
	int32_t x404 = -1;

	t95 = (((x401/x402)<=x403)*x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x405 = -7865450889LL;
	uint64_t x406 = 48197543LLU;
	int64_t x408 = 149186744440807LL;
	volatile int64_t t96 = -931621800131787LL;

	t96 = (((x405/x406)<=x407)*x408);

	if (t96 != 149186744440807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = -36;
	uint16_t x411 = 1U;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t97 = 2988047;

	t97 = (((x409/x410)<=x411)*x412);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MIN;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = 218;
	uint8_t x416 = UINT8_MAX;
	int32_t t98 = -482012532;

	t98 = (((x413/x414)<=x415)*x416);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x417 = -30;
	volatile uint16_t x418 = 11396U;
	uint16_t x419 = 50U;
	uint16_t x420 = 11U;
	volatile int32_t t99 = -109460;

	t99 = (((x417/x418)<=x419)*x420);

	if (t99 != 11) { NG(); } else { ; }
	
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

