#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = 29;
static volatile int32_t t2 = 26;
static int32_t x16 = -1;
volatile int32_t x20 = -410299;
uint32_t x34 = UINT32_MAX;
int64_t x42 = INT64_MIN;
uint8_t x46 = UINT8_MAX;
static int64_t x49 = INT64_MIN;
volatile int64_t x53 = INT64_MIN;
volatile int64_t x63 = -2623067LL;
static uint32_t x66 = 65137U;
uint8_t x67 = UINT8_MAX;
volatile int16_t x69 = INT16_MIN;
int32_t x73 = 250;
uint16_t x76 = 11U;
int32_t x82 = 548507303;
volatile int32_t x96 = INT32_MAX;
uint64_t x100 = 930LLU;
volatile int8_t x103 = 52;
static int32_t x104 = 23048;
volatile int32_t t26 = -133;
volatile int32_t t27 = -109496407;
int64_t x113 = -5930679699885060LL;
int8_t x116 = INT8_MIN;
volatile int8_t x119 = -19;
static int16_t x121 = INT16_MAX;
int8_t x126 = -1;
int16_t x129 = INT16_MIN;
int8_t x132 = 0;
volatile int8_t x133 = -1;
int64_t x135 = INT64_MIN;
int16_t x138 = INT16_MAX;
volatile int32_t t34 = 30094;
int32_t x142 = INT32_MIN;
int8_t x144 = -39;
uint16_t x146 = UINT16_MAX;
int32_t t36 = -28;
int16_t x151 = INT16_MAX;
volatile int32_t x166 = INT32_MIN;
int32_t x169 = INT32_MAX;
int16_t x172 = 0;
int32_t x178 = INT32_MAX;
volatile uint16_t x179 = UINT16_MAX;
uint8_t x186 = UINT8_MAX;
uint64_t x187 = 466675359462651LLU;
static volatile uint64_t x193 = 47635528LLU;
int32_t t49 = 510270316;
volatile int64_t x217 = 320865LL;
int8_t x227 = -1;
int32_t t54 = 2574640;
static int64_t t55 = INT64_MIN;
int32_t t56 = 1;
int16_t x239 = INT16_MIN;
int8_t x240 = INT8_MIN;
volatile int8_t x248 = INT8_MIN;
volatile int32_t t59 = -26572;
uint8_t x250 = 1U;
int64_t x258 = INT64_MAX;
uint64_t x260 = 1025960LLU;
uint64_t t62 = 706434551943LLU;
int16_t x266 = INT16_MIN;
uint16_t x267 = 3616U;
int32_t x272 = INT32_MIN;
static volatile int32_t t66 = -36554;
int64_t x280 = INT64_MIN;
int64_t x285 = 62989942LL;
volatile uint16_t x287 = 14590U;
int16_t x291 = INT16_MIN;
int8_t x296 = -1;
int16_t x299 = INT16_MAX;
int16_t x318 = INT16_MAX;
int32_t x320 = INT32_MIN;
static int64_t x321 = INT64_MAX;
volatile int64_t t80 = INT64_MIN;
uint64_t t81 = UINT64_MAX;
int32_t x342 = -78706797;
static uint16_t x347 = 13U;
int64_t x348 = 1LL;
int32_t x352 = 113;
int8_t x354 = -1;
static uint64_t t86 = UINT64_MAX;
volatile int32_t t87 = 253;
volatile int8_t x365 = INT8_MIN;
int32_t t89 = 130;
static int32_t x369 = 481753964;
static uint64_t x377 = UINT64_MAX;
static int16_t x382 = INT16_MIN;
static volatile uint32_t t94 = UINT32_MAX;
uint16_t x395 = 118U;
int32_t t96 = 761015542;
volatile int8_t x398 = INT8_MAX;
static int64_t x404 = -418879167471426LL;
uint8_t x408 = 70U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint64_t x2 = 34550776027782575LLU;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = 98387;
	volatile int32_t t0 = 599378086;

	t0 = ((x1==(x2/x3))+x4);

	if (t0 != 98387) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	volatile uint64_t x6 = 522246612002LLU;
	int32_t x7 = 37424;
	int64_t x8 = INT64_MIN;
	int64_t t1 = INT64_MIN;

	t1 = ((x5==(x6/x7))+x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -1;
	volatile int16_t x11 = INT16_MAX;
	int16_t x12 = INT16_MIN;

	t2 = ((x9==(x10/x11))+x12);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 40U;
	uint8_t x14 = 3U;
	int16_t x15 = INT16_MIN;
	int32_t t3 = -66927;

	t3 = ((x13==(x14/x15))+x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 10641254U;
	int16_t x18 = INT16_MAX;
	int8_t x19 = -1;
	int32_t t4 = -1337;

	t4 = ((x17==(x18/x19))+x20);

	if (t4 != -410299) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	volatile int16_t x22 = 905;
	volatile int64_t x23 = INT64_MIN;
	uint32_t x24 = 46U;
	volatile uint32_t t5 = 14625U;

	t5 = ((x21==(x22/x23))+x24);

	if (t5 != 46U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 39U;
	volatile uint8_t x26 = UINT8_MAX;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -1665941;

	t6 = ((x25==(x26/x27))+x28);

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	uint32_t x30 = 327U;
	int64_t x31 = 26091695591843LL;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = INT64_MIN;

	t7 = ((x29==(x30/x31))+x32);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 0U;
	volatile uint8_t x35 = 9U;
	uint64_t x36 = UINT64_MAX;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x33==(x34/x35))+x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 6940U;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 7767U;
	static volatile int16_t x40 = -42;
	int32_t t9 = 8;

	t9 = ((x37==(x38/x39))+x40);

	if (t9 != -42) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -618809134909LL;
	uint64_t x43 = UINT64_MAX;
	int32_t x44 = -1;
	int32_t t10 = -28513;

	t10 = ((x41==(x42/x43))+x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 735434632851601LLU;
	static int8_t x47 = 1;
	static int8_t x48 = -1;
	static volatile int32_t t11 = 186;

	t11 = ((x45==(x46/x47))+x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MIN;
	int64_t x52 = -545015006793410LL;
	int64_t t12 = 117615LL;

	t12 = ((x49==(x50/x51))+x52);

	if (t12 != -545015006793410LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = INT32_MIN;
	int32_t x55 = -36;
	uint64_t x56 = 2158507074036LLU;
	uint64_t t13 = 20613892327014LLU;

	t13 = ((x53==(x54/x55))+x56);

	if (t13 != 2158507074036LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = -1269535LL;
	int32_t x58 = INT32_MAX;
	int64_t x59 = INT64_MIN;
	int32_t x60 = -1;
	volatile int32_t t14 = 5709591;

	t14 = ((x57==(x58/x59))+x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = -7850676LL;
	static uint32_t x64 = 7U;
	uint32_t t15 = 257U;

	t15 = ((x61==(x62/x63))+x64);

	if (t15 != 7U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int64_t x68 = INT64_MAX;
	volatile int64_t t16 = INT64_MAX;

	t16 = ((x65==(x66/x67))+x68);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 1090656201894515373LLU;
	int8_t x71 = INT8_MIN;
	volatile uint32_t x72 = 53135U;
	volatile uint32_t t17 = 259006U;

	t17 = ((x69==(x70/x71))+x72);

	if (t17 != 53135U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x74 = -1;
	uint64_t x75 = 1951381442353422264LLU;
	volatile int32_t t18 = -17973229;

	t18 = ((x73==(x74/x75))+x76);

	if (t18 != 11) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = 0;
	int16_t x79 = INT16_MAX;
	static volatile int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = 67261550;

	t19 = ((x77==(x78/x79))+x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int32_t x83 = -1;
	int16_t x84 = INT16_MAX;
	static int32_t t20 = -846;

	t20 = ((x81==(x82/x83))+x84);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	uint8_t x86 = UINT8_MAX;
	static int32_t x87 = INT32_MIN;
	uint32_t x88 = 12U;
	uint32_t t21 = 7298U;

	t21 = ((x85==(x86/x87))+x88);

	if (t21 != 12U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 10U;
	volatile int8_t x90 = -1;
	int16_t x91 = -1;
	int64_t x92 = 2LL;
	volatile int64_t t22 = -21072661998LL;

	t22 = ((x89==(x90/x91))+x92);

	if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = -3;
	static int8_t x94 = 0;
	int64_t x95 = INT64_MIN;
	volatile int32_t t23 = INT32_MAX;

	t23 = ((x93==(x94/x95))+x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint16_t x98 = UINT16_MAX;
	int8_t x99 = INT8_MIN;
	volatile uint64_t t24 = 12LLU;

	t24 = ((x97==(x98/x99))+x100);

	if (t24 != 930LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -62;
	static uint64_t x102 = UINT64_MAX;
	volatile int32_t t25 = 24845414;

	t25 = ((x101==(x102/x103))+x104);

	if (t25 != 23048) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	uint8_t x106 = UINT8_MAX;
	int16_t x107 = 7;
	uint16_t x108 = UINT16_MAX;

	t26 = ((x105==(x106/x107))+x108);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 2954U;
	uint16_t x110 = UINT16_MAX;
	int64_t x111 = INT64_MAX;
	int16_t x112 = INT16_MIN;

	t27 = ((x109==(x110/x111))+x112);

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x114 = 40910U;
	uint16_t x115 = 3909U;
	volatile int32_t t28 = -1;

	t28 = ((x113==(x114/x115))+x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	static uint32_t x118 = 857U;
	int16_t x120 = -1;
	volatile int32_t t29 = 1491547;

	t29 = ((x117==(x118/x119))+x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = 39113473519LLU;
	static int64_t x123 = -3045945598211LL;
	int64_t x124 = -2628555281210187470LL;
	int64_t t30 = 29752679766402LL;

	t30 = ((x121==(x122/x123))+x124);

	if (t30 != -2628555281210187470LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	uint8_t x127 = 33U;
	int16_t x128 = 1;
	static volatile int32_t t31 = -13287014;

	t31 = ((x125==(x126/x127))+x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -125484455902LL;
	int16_t x131 = -1;
	volatile int32_t t32 = -7985555;

	t32 = ((x129==(x130/x131))+x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = INT8_MIN;
	uint32_t x136 = 4U;
	uint32_t t33 = 241738U;

	t33 = ((x133==(x134/x135))+x136);

	if (t33 != 4U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	static volatile uint64_t x139 = 1237563875751754LLU;
	int8_t x140 = INT8_MIN;

	t34 = ((x137==(x138/x139))+x140);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x143 = 1052U;
	int32_t t35 = 0;

	t35 = ((x141==(x142/x143))+x144);

	if (t35 != -39) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -2344;

	t36 = ((x145==(x146/x147))+x148);

	if (t36 != -2343) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 88U;
	uint32_t x150 = 631688471U;
	int16_t x152 = INT16_MAX;
	int32_t t37 = 473066;

	t37 = ((x149==(x150/x151))+x152);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 3583369330380676269LLU;
	int16_t x154 = 1;
	int32_t x155 = -2;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = 225855019;

	t38 = ((x153==(x154/x155))+x156);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	int8_t x158 = 6;
	static int16_t x159 = INT16_MIN;
	static int8_t x160 = 33;
	static int32_t t39 = -15;

	t39 = ((x157==(x158/x159))+x160);

	if (t39 != 33) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	volatile int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	static int8_t x164 = -2;
	static int32_t t40 = 79120160;

	t40 = ((x161==(x162/x163))+x164);

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 21643546490590LLU;
	uint8_t x167 = UINT8_MAX;
	int16_t x168 = INT16_MAX;
	int32_t t41 = -13;

	t41 = ((x165==(x166/x167))+x168);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = -1;
	static int16_t x171 = INT16_MAX;
	static volatile int32_t t42 = 55300463;

	t42 = ((x169==(x170/x171))+x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 258;
	int64_t x180 = INT64_MAX;
	volatile int64_t t43 = INT64_MAX;

	t43 = ((x177==(x178/x179))+x180);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x185 = INT64_MIN;
	uint16_t x188 = 168U;
	static int32_t t44 = 423986694;

	t44 = ((x185==(x186/x187))+x188);

	if (t44 != 168) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x189 = 1152LLU;
	static int8_t x190 = INT8_MAX;
	static uint8_t x191 = 1U;
	int8_t x192 = -1;
	volatile int32_t t45 = 4143598;

	t45 = ((x189==(x190/x191))+x192);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x194 = -7374;
	static uint64_t x195 = 13243LLU;
	int64_t x196 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = ((x193==(x194/x195))+x196);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = INT16_MAX;
	static uint8_t x200 = 13U;
	volatile int32_t t47 = -3408308;

	t47 = ((x197==(x198/x199))+x200);

	if (t47 != 13) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x201 = UINT16_MAX;
	volatile uint32_t x202 = 230935U;
	uint64_t x203 = UINT64_MAX;
	static int32_t x204 = INT32_MIN;
	int32_t t48 = INT32_MIN;

	t48 = ((x201==(x202/x203))+x204);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -13164222;
	int8_t x206 = -1;
	int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MAX;

	t49 = ((x205==(x206/x207))+x208);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	uint16_t x210 = 8445U;
	volatile uint8_t x211 = 4U;
	int64_t x212 = 15482558626398LL;
	volatile int64_t t50 = -798590512673325LL;

	t50 = ((x209==(x210/x211))+x212);

	if (t50 != 15482558626398LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 127U;
	static uint16_t x214 = 48U;
	uint8_t x215 = 53U;
	int8_t x216 = -1;
	volatile int32_t t51 = 0;

	t51 = ((x213==(x214/x215))+x216);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x218 = 47U;
	int16_t x219 = -12;
	int32_t x220 = -9635;
	int32_t t52 = -663109024;

	t52 = ((x217==(x218/x219))+x220);

	if (t52 != -9635) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -1LL;
	static uint64_t x222 = UINT64_MAX;
	static int16_t x223 = -578;
	int32_t x224 = 15703773;
	static int32_t t53 = 229167;

	t53 = ((x221==(x222/x223))+x224);

	if (t53 != 15703773) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	uint8_t x226 = 0U;
	int8_t x228 = INT8_MIN;

	t54 = ((x225==(x226/x227))+x228);

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = -1;
	int16_t x230 = 6596;
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MIN;

	t55 = ((x229==(x230/x231))+x232);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x233 = -1;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 2U;
	int32_t x236 = -1;

	t56 = ((x233==(x234/x235))+x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	static uint32_t x238 = UINT32_MAX;
	static volatile int32_t t57 = 1;

	t57 = ((x237==(x238/x239))+x240);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = INT32_MIN;
	int32_t x242 = 15;
	int32_t x243 = -65498075;
	static int32_t x244 = 7246369;
	static int32_t t58 = 1905;

	t58 = ((x241==(x242/x243))+x244);

	if (t58 != 7246369) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -28;
	volatile int16_t x246 = INT16_MAX;
	int8_t x247 = INT8_MIN;

	t59 = ((x245==(x246/x247))+x248);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x249 = 725450293263LLU;
	volatile int32_t x251 = INT32_MIN;
	int64_t x252 = -39704LL;
	int64_t t60 = -2206911315497LL;

	t60 = ((x249==(x250/x251))+x252);

	if (t60 != -39704LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 28558U;
	int8_t x254 = 7;
	static uint16_t x255 = UINT16_MAX;
	int32_t x256 = -1;
	int32_t t61 = 36074;

	t61 = ((x253==(x254/x255))+x256);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	int16_t x259 = INT16_MIN;

	t62 = ((x257==(x258/x259))+x260);

	if (t62 != 1025960LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = 0;
	int64_t x262 = INT64_MAX;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MIN;
	int32_t t63 = 10063;

	t63 = ((x261==(x262/x263))+x264);

	if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = -1LL;
	static int16_t x268 = 14;
	volatile int32_t t64 = 1217;

	t64 = ((x265==(x266/x267))+x268);

	if (t64 != 14) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 61107844741LLU;
	static int32_t x270 = INT32_MAX;
	int32_t x271 = INT32_MAX;
	int32_t t65 = INT32_MIN;

	t65 = ((x269==(x270/x271))+x272);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	static volatile int64_t x274 = INT64_MIN;
	volatile uint16_t x275 = 526U;
	int8_t x276 = INT8_MIN;

	t66 = ((x273==(x274/x275))+x276);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = UINT8_MAX;
	int8_t x278 = INT8_MIN;
	uint8_t x279 = 18U;
	static int64_t t67 = INT64_MIN;

	t67 = ((x277==(x278/x279))+x280);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = -1;
	uint8_t x283 = 22U;
	static uint16_t x284 = UINT16_MAX;
	int32_t t68 = 59892993;

	t68 = ((x281==(x282/x283))+x284);

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x286 = 7219U;
	static volatile uint16_t x288 = 3269U;
	int32_t t69 = 1;

	t69 = ((x285==(x286/x287))+x288);

	if (t69 != 3269) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MAX;
	int8_t x290 = 10;
	volatile int64_t x292 = 28040467LL;
	volatile int64_t t70 = 49209959039LL;

	t70 = ((x289==(x290/x291))+x292);

	if (t70 != 28040467LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = UINT64_MAX;
	static int64_t x294 = 238963268590711LL;
	volatile uint32_t x295 = 1U;
	int32_t t71 = 4948414;

	t71 = ((x293==(x294/x295))+x296);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x297 = UINT16_MAX;
	static int32_t x298 = -1;
	uint8_t x300 = 0U;
	int32_t t72 = -701669445;

	t72 = ((x297==(x298/x299))+x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -61;
	uint16_t x302 = 30U;
	uint32_t x303 = 984984428U;
	int32_t x304 = INT32_MAX;
	volatile int32_t t73 = INT32_MAX;

	t73 = ((x301==(x302/x303))+x304);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	static uint8_t x307 = 3U;
	int8_t x308 = INT8_MIN;
	volatile int32_t t74 = 61;

	t74 = ((x305==(x306/x307))+x308);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = 3724U;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t75 = 504846;

	t75 = ((x309==(x310/x311))+x312);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x313 = UINT16_MAX;
	volatile int8_t x314 = 0;
	uint64_t x315 = 11LLU;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t76 = -50;

	t76 = ((x313==(x314/x315))+x316);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MAX;
	int8_t x319 = INT8_MIN;
	int32_t t77 = INT32_MIN;

	t77 = ((x317==(x318/x319))+x320);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = INT64_MAX;
	int64_t x323 = INT64_MAX;
	int16_t x324 = INT16_MAX;
	volatile int32_t t78 = -463572044;

	t78 = ((x321==(x322/x323))+x324);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x325 = 107U;
	volatile uint64_t x326 = 15553680487169LLU;
	int32_t x327 = INT32_MIN;
	static int8_t x328 = -1;
	volatile int32_t t79 = -13575765;

	t79 = ((x325==(x326/x327))+x328);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MIN;

	t80 = ((x329==(x330/x331))+x332);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	int8_t x334 = -27;
	int32_t x335 = -1;
	uint64_t x336 = UINT64_MAX;

	t81 = ((x333==(x334/x335))+x336);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = -1;
	int8_t x338 = -27;
	static int64_t x339 = INT64_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x337==(x338/x339))+x340);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = -1;
	volatile uint8_t x343 = 18U;
	static int64_t x344 = INT64_MIN;
	int64_t t83 = INT64_MIN;

	t83 = ((x341==(x342/x343))+x344);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x345 = 26U;
	int32_t x346 = INT32_MIN;
	static int64_t t84 = -4LL;

	t84 = ((x345==(x346/x347))+x348);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = -1LL;
	int32_t x350 = -11;
	uint32_t x351 = UINT32_MAX;
	int32_t t85 = 4145;

	t85 = ((x349==(x350/x351))+x352);

	if (t85 != 113) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = UINT16_MAX;
	volatile uint32_t x355 = 4447U;
	uint64_t x356 = UINT64_MAX;

	t86 = ((x353==(x354/x355))+x356);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	int8_t x359 = 62;
	static uint16_t x360 = 5037U;

	t87 = ((x357==(x358/x359))+x360);

	if (t87 != 5037) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = -584177740699LL;
	int64_t x362 = 20970710958439LL;
	static volatile uint8_t x363 = 2U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t88 = 28063303;

	t88 = ((x361==(x362/x363))+x364);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x366 = UINT32_MAX;
	uint8_t x367 = 14U;
	uint8_t x368 = 37U;

	t89 = ((x365==(x366/x367))+x368);

	if (t89 != 37) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x370 = -1;
	uint8_t x371 = 1U;
	int64_t x372 = 353961218LL;
	int64_t t90 = 3945873LL;

	t90 = ((x369==(x370/x371))+x372);

	if (t90 != 353961218LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = INT64_MIN;
	volatile uint32_t x374 = 12U;
	int32_t x375 = -6477;
	int8_t x376 = -1;
	int32_t t91 = -68636;

	t91 = ((x373==(x374/x375))+x376);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x378 = 476U;
	int32_t x379 = INT32_MIN;
	uint16_t x380 = UINT16_MAX;
	int32_t t92 = 710;

	t92 = ((x377==(x378/x379))+x380);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x381 = 46U;
	uint32_t x383 = 12455170U;
	static uint8_t x384 = UINT8_MAX;
	volatile int32_t t93 = 1;

	t93 = ((x381==(x382/x383))+x384);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x385 = UINT16_MAX;
	int32_t x386 = INT32_MAX;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = UINT32_MAX;

	t94 = ((x385==(x386/x387))+x388);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = -1;
	uint64_t x390 = 2042120489LLU;
	int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MAX;
	int32_t t95 = -273716000;

	t95 = ((x389==(x390/x391))+x392);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = 22149366U;
	int16_t x394 = INT16_MAX;
	volatile int8_t x396 = INT8_MIN;

	t96 = ((x393==(x394/x395))+x396);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x397 = INT64_MIN;
	static int64_t x399 = 981338183501368430LL;
	static volatile int16_t x400 = -3;
	int32_t t97 = 81800469;

	t97 = ((x397==(x398/x399))+x400);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x401 = 1654U;
	uint8_t x402 = 5U;
	uint32_t x403 = 42414346U;
	int64_t t98 = 99LL;

	t98 = ((x401==(x402/x403))+x404);

	if (t98 != -418879167471426LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 1U;
	uint64_t x406 = 520490407LLU;
	int32_t x407 = -1;
	volatile int32_t t99 = 49;

	t99 = ((x405==(x406/x407))+x408);

	if (t99 != 70) { NG(); } else { ; }
	
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

