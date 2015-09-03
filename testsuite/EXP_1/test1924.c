#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = -520671791114783245LL;
uint64_t x10 = 7220864223997083596LLU;
volatile uint64_t t2 = 7101180418500LLU;
static int64_t x14 = INT64_MIN;
int16_t x18 = INT16_MIN;
int64_t t6 = 52794416LL;
int16_t x34 = -106;
uint64_t x35 = 372LLU;
uint8_t x37 = 71U;
volatile int16_t x44 = -2611;
volatile uint64_t t10 = 62004627LLU;
static int32_t x57 = -1;
int64_t x58 = -1LL;
int64_t t13 = -7956LL;
static volatile int64_t t14 = 18944LL;
static uint32_t x67 = UINT32_MAX;
uint16_t x68 = 1032U;
int16_t x70 = -10;
static volatile int16_t x71 = -239;
int32_t x76 = 445;
static uint64_t t20 = 2181602757529LLU;
static int64_t x94 = 108230225837LL;
static int64_t x96 = 4836532862LL;
volatile int32_t x98 = INT32_MIN;
uint32_t x109 = UINT32_MAX;
int32_t x115 = 813520826;
uint8_t x117 = 0U;
int16_t x118 = -7008;
static int16_t x122 = INT16_MIN;
uint16_t x123 = 11343U;
uint16_t x135 = 213U;
volatile int16_t x138 = INT16_MIN;
static int16_t x141 = INT16_MIN;
uint16_t x142 = UINT16_MAX;
int16_t x145 = 2386;
uint16_t x147 = 231U;
volatile uint16_t x148 = 3U;
int8_t x160 = INT8_MIN;
uint64_t x162 = 3026079767469382LLU;
uint8_t x169 = 57U;
int64_t x174 = INT64_MAX;
static volatile int32_t t43 = -3684;
static volatile int64_t t45 = 4345302LL;
volatile int64_t x189 = INT64_MIN;
static int16_t x191 = INT16_MIN;
static uint64_t t48 = 1450322136738153016LLU;
static int64_t x203 = INT64_MIN;
int16_t x204 = INT16_MIN;
int64_t t50 = 577603996879797LL;
int64_t t51 = -421LL;
volatile int32_t x222 = -1;
uint32_t x224 = 39497U;
volatile int64_t x231 = INT64_MIN;
int8_t x236 = INT8_MIN;
uint16_t x237 = 1354U;
static volatile int32_t t58 = 14;
int16_t x259 = 117;
int64_t x275 = INT64_MAX;
static volatile int32_t x279 = INT32_MIN;
volatile int8_t x285 = INT8_MIN;
volatile int64_t t74 = 256695798LL;
int8_t x308 = 3;
static uint32_t x315 = UINT32_MAX;
int64_t x318 = -1LL;
int64_t x319 = INT64_MAX;
static int16_t x324 = -1;
int16_t x325 = INT16_MIN;
uint8_t x332 = 0U;
static uint32_t x333 = 93354U;
int16_t x335 = INT16_MIN;
uint32_t x338 = 973689134U;
volatile int64_t x341 = -298068369303487149LL;
volatile int64_t x346 = -1LL;
static int32_t x349 = 810;
int64_t t86 = -3564249245489LL;
int64_t t87 = 9962LL;
volatile int64_t t88 = -1151305552669LL;
uint32_t x371 = 809188U;
int32_t x377 = INT32_MAX;
volatile int64_t x388 = -1LL;
static volatile int64_t t96 = INT64_MAX;
int64_t x393 = INT64_MAX;
static volatile int8_t x394 = 0;
volatile int64_t t97 = 196423173464LL;
int32_t x401 = -1;
volatile int8_t x403 = INT8_MIN;


void f0(void) {
	int16_t x2 = -1;
	uint64_t x3 = UINT64_MAX;
	int32_t x4 = INT32_MAX;
	uint64_t t0 = 61741139157LLU;

	t0 = (((x1|x2)%x3)^x4);

	if (t0 != 2147483647LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	volatile int32_t x6 = INT32_MIN;
	volatile int64_t x7 = 49004080274882LL;
	int8_t x8 = -1;
	static volatile int64_t t1 = -1LL;

	t1 = (((x5|x6)%x7)^x8);

	if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 3;
	int32_t x11 = INT32_MAX;
	int64_t x12 = -1LL;

	t2 = (((x9|x10)%x11)^x12);

	if (t2 != 18446744072449715373LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int16_t x15 = INT16_MIN;
	int64_t x16 = -7503496LL;
	volatile int64_t t3 = 1280318807662522126LL;

	t3 = (((x13|x14)%x15)^x16);

	if (t3 != 7503495LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	int64_t x19 = 33511462538LL;
	int32_t x20 = INT32_MIN;
	static volatile int64_t t4 = 238259070LL;

	t4 = (((x17|x18)%x19)^x20);

	if (t4 != 2147451135LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = 22685155;
	int32_t x23 = INT32_MIN;
	int16_t x24 = -40;
	volatile int32_t t5 = -2;

	t5 = (((x21|x22)%x23)^x24);

	if (t5 != 23099) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	int32_t x26 = 8;
	uint8_t x27 = UINT8_MAX;
	int8_t x28 = -1;

	t6 = (((x25|x26)%x27)^x28);

	if (t6 != 119LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x29 = 0U;
	int32_t x30 = INT32_MAX;
	static int64_t x31 = INT64_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile int64_t t7 = -423798484LL;

	t7 = (((x29|x30)%x31)^x32);

	if (t7 != -2147450881LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	volatile int16_t x36 = INT16_MAX;
	volatile uint64_t t8 = 269492552634LLU;

	t8 = (((x33|x34)%x35)^x36);

	if (t8 != 32752LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = UINT64_MAX;
	int64_t x39 = -1LL;
	int8_t x40 = -1;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = (((x37|x38)%x39)^x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -102;
	uint64_t x42 = 5669600LLU;
	uint32_t x43 = 1U;

	t10 = (((x41|x42)%x43)^x44);

	if (t10 != 18446744073709549005LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 26365309U;
	int64_t x47 = 517LL;
	int32_t x48 = INT32_MIN;
	volatile int64_t t11 = 7070140654LL;

	t11 = (((x45|x46)%x47)^x48);

	if (t11 != -2147483586LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = UINT8_MAX;
	uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MIN;
	static uint64_t x56 = 267801156288299LLU;
	uint64_t t12 = 14722276LLU;

	t12 = (((x53|x54)%x55)^x56);

	if (t12 != 9223104235698487508LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x59 = -1020;
	int8_t x60 = INT8_MIN;

	t13 = (((x57|x58)%x59)^x60);

	if (t13 != 127LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int64_t x62 = INT64_MAX;
	int64_t x63 = -1LL;
	int64_t x64 = 280160518959621LL;

	t14 = (((x61|x62)%x63)^x64);

	if (t14 != 280160518959621LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = INT32_MAX;
	uint8_t x66 = 81U;
	uint32_t t15 = 56095440U;

	t15 = (((x65|x66)%x67)^x68);

	if (t15 != 2147482615U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t16 = 1392501;

	t16 = (((x69|x70)%x71)^x72);

	if (t16 != -256) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	int16_t x74 = INT16_MIN;
	uint64_t x75 = 7675672LLU;
	uint64_t t17 = 1519603148469LLU;

	t17 = (((x73|x74)%x75)^x76);

	if (t17 != 1333010LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x77 = UINT8_MAX;
	int8_t x78 = INT8_MIN;
	int32_t x79 = 1;
	volatile int8_t x80 = INT8_MIN;
	int32_t t18 = -15;

	t18 = (((x77|x78)%x79)^x80);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = 1030U;
	volatile int16_t x82 = INT16_MIN;
	uint8_t x83 = 8U;
	static int8_t x84 = 5;
	volatile uint32_t t19 = 1314631751U;

	t19 = (((x81|x82)%x83)^x84);

	if (t19 != 3U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	volatile uint64_t x86 = UINT64_MAX;
	static volatile int16_t x87 = INT16_MIN;
	static uint64_t x88 = 779652LLU;

	t20 = (((x85|x86)%x87)^x88);

	if (t20 != 760443LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MIN;
	uint16_t x90 = 1393U;
	static int32_t x91 = INT32_MIN;
	int8_t x92 = 19;
	static volatile int32_t t21 = 378323;

	t21 = (((x89|x90)%x91)^x92);

	if (t21 != -31390) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -51;
	static volatile int16_t x95 = -1;
	int64_t t22 = -469535365257794LL;

	t22 = (((x93|x94)%x95)^x96);

	if (t22 != 4836532862LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	int64_t x99 = -65267429642LL;
	volatile int32_t x100 = 200342;
	int64_t t23 = -281151850032906514LL;

	t23 = (((x97|x98)%x99)^x100);

	if (t23 != -200343LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	int64_t x103 = 186211284398104939LL;
	int16_t x104 = INT16_MIN;
	static volatile int64_t t24 = 700945726974LL;

	t24 = (((x101|x102)%x103)^x104);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = INT32_MIN;
	int64_t x106 = INT64_MAX;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = 3;
	static int64_t t25 = -1LL;

	t25 = (((x105|x106)%x107)^x108);

	if (t25 != -4LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x110 = 205U;
	int64_t x111 = INT64_MIN;
	uint32_t x112 = 7159339U;
	static int64_t t26 = -4678138141LL;

	t26 = (((x109|x110)%x111)^x112);

	if (t26 != 4287807956LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 33LL;
	static volatile int64_t x114 = INT64_MAX;
	uint16_t x116 = 3961U;
	int64_t t27 = -1964LL;

	t27 = (((x113|x114)%x115)^x116);

	if (t27 != 731204714LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	int64_t t28 = -5011293564056LL;

	t28 = (((x117|x118)%x119)^x120);

	if (t28 != 9223372036854768800LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -717021881721LL;
	uint32_t x124 = 73661U;
	volatile int64_t t29 = -134420497256470913LL;

	t29 = (((x121|x122)%x123)^x124);

	if (t29 != -80582LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MAX;
	uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = 2850U;
	static int64_t t30 = -41075651925887737LL;

	t30 = (((x125|x126)%x127)^x128);

	if (t30 != 29917LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x129 = 154U;
	uint16_t x130 = 28697U;
	int16_t x131 = -16047;
	int64_t x132 = -11248927769652416LL;
	volatile int64_t t31 = -4638956526LL;

	t31 = (((x129|x130)%x131)^x132);

	if (t31 != -11248927769648468LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int8_t x134 = INT8_MIN;
	static volatile uint32_t x136 = UINT32_MAX;
	static int64_t t32 = 126087922996LL;

	t32 = (((x133|x134)%x135)^x136);

	if (t32 != -4294967296LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = 7U;
	int64_t x139 = -155556280635202035LL;
	volatile int16_t x140 = -52;
	volatile int64_t t33 = -8929010228LL;

	t33 = (((x137|x138)%x139)^x140);

	if (t33 != 32715LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x143 = INT16_MAX;
	uint64_t x144 = 2745365622403319LLU;
	volatile uint64_t t34 = 68752107738294LLU;

	t34 = (((x141|x142)%x143)^x144);

	if (t34 != 18443998708087148296LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x146 = 1;
	static volatile int32_t t35 = -58937;

	t35 = (((x145|x146)%x147)^x148);

	if (t35 != 78) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 113LLU;
	volatile int64_t x150 = INT64_MIN;
	static uint32_t x151 = UINT32_MAX;
	static int16_t x152 = 9687;
	uint64_t t36 = 136262495493375608LLU;

	t36 = (((x149|x150)%x151)^x152);

	if (t36 != 2147493286LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	volatile int16_t x154 = -1;
	static volatile int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	static int32_t t37 = -14298;

	t37 = (((x153|x154)%x155)^x156);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = -1;
	static uint16_t x158 = 31071U;
	int16_t x159 = INT16_MAX;
	int32_t t38 = -5;

	t38 = (((x157|x158)%x159)^x160);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -6;
	uint16_t x163 = 2479U;
	int8_t x164 = INT8_MIN;
	volatile uint64_t t39 = 59886813LLU;

	t39 = (((x161|x162)%x163)^x164);

	if (t39 != 18446744073709551137LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1LL;
	int64_t x166 = -1LL;
	static int32_t x167 = -1;
	int16_t x168 = -7;
	int64_t t40 = -25694921633LL;

	t40 = (((x165|x166)%x167)^x168);

	if (t40 != -7LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x170 = 0U;
	int8_t x171 = INT8_MAX;
	uint16_t x172 = 6U;
	volatile int32_t t41 = 49770;

	t41 = (((x169|x170)%x171)^x172);

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	volatile int64_t t42 = 222707125763LL;

	t42 = (((x173|x174)%x175)^x176);

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MAX;
	volatile int32_t x178 = INT32_MIN;
	static int16_t x179 = -1;
	int8_t x180 = -1;

	t43 = (((x177|x178)%x179)^x180);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x181 = 0U;
	uint64_t x182 = 61026123LLU;
	int32_t x183 = INT32_MAX;
	int64_t x184 = INT64_MIN;
	uint64_t t44 = 868789757413816563LLU;

	t44 = (((x181|x182)%x183)^x184);

	if (t44 != 9223372036915801931LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 266;
	int64_t x186 = INT64_MIN;
	static int32_t x187 = -17491227;
	uint32_t x188 = 18860411U;

	t45 = (((x185|x186)%x187)^x188);

	if (t45 != -21747642LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x190 = UINT64_MAX;
	static uint64_t x192 = 1741022158427447751LLU;
	volatile uint64_t t46 = 154523LLU;

	t46 = (((x189|x190)%x191)^x192);

	if (t46 != 1741022158427430456LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MAX;
	int8_t x194 = 4;
	static uint8_t x195 = 49U;
	volatile int32_t x196 = -1;
	volatile int32_t t47 = 1;

	t47 = (((x193|x194)%x195)^x196);

	if (t47 != -36) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = UINT16_MAX;
	volatile int16_t x198 = INT16_MAX;
	uint64_t x199 = 3482680662LLU;
	uint8_t x200 = 15U;

	t48 = (((x197|x198)%x199)^x200);

	if (t48 != 65520LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x201 = UINT16_MAX;
	static int8_t x202 = 1;
	int64_t t49 = -3534803LL;

	t49 = (((x201|x202)%x203)^x204);

	if (t49 != -32769LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 1U;
	static int64_t x206 = INT64_MIN;
	volatile int16_t x207 = INT16_MAX;
	int64_t x208 = -181853586310308LL;

	t50 = (((x205|x206)%x207)^x208);

	if (t50 != 181853586310309LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MAX;
	int16_t x210 = 2273;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -2;

	t51 = (((x209|x210)%x211)^x212);

	if (t51 != -2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	static volatile int64_t x215 = INT64_MIN;
	uint32_t x216 = 215226128U;
	int64_t t52 = 1558032539362263183LL;

	t52 = (((x213|x214)%x215)^x216);

	if (t52 != -215226224LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x217 = 613U;
	uint16_t x218 = 2U;
	uint32_t x219 = 1019401U;
	int64_t x220 = INT64_MAX;
	int64_t t53 = -1031700889518268LL;

	t53 = (((x217|x218)%x219)^x220);

	if (t53 != 9223372036854775192LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x221 = 116U;
	uint8_t x223 = 3U;
	volatile uint32_t t54 = 1U;

	t54 = (((x221|x222)%x223)^x224);

	if (t54 != 4294927798U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MIN;
	int32_t x226 = -312610039;
	int64_t x227 = -167229047LL;
	uint16_t x228 = 1787U;
	static int64_t t55 = -177345830382496LL;

	t55 = (((x225|x226)%x227)^x228);

	if (t55 != -145379461LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x229 = INT32_MAX;
	uint16_t x230 = 13278U;
	volatile uint16_t x232 = UINT16_MAX;
	int64_t t56 = 55538884LL;

	t56 = (((x229|x230)%x231)^x232);

	if (t56 != 2147418112LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = INT32_MIN;
	uint16_t x234 = 8U;
	volatile int16_t x235 = INT16_MAX;
	volatile int32_t t57 = -3;

	t57 = (((x233|x234)%x235)^x236);

	if (t57 != 32647) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x238 = 26;
	int16_t x239 = INT16_MIN;
	int16_t x240 = -1;

	t58 = (((x237|x238)%x239)^x240);

	if (t58 != -1371) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = 10;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;
	static uint32_t x244 = UINT32_MAX;
	int64_t t59 = 44781468160922LL;

	t59 = (((x241|x242)%x243)^x244);

	if (t59 != -4294967179LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = UINT16_MAX;
	uint16_t x246 = 4330U;
	int64_t x247 = -1LL;
	int8_t x248 = -2;
	volatile int64_t t60 = -14LL;

	t60 = (((x245|x246)%x247)^x248);

	if (t60 != -2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = 5761;
	static int16_t x250 = INT16_MIN;
	volatile int8_t x251 = -1;
	static int8_t x252 = -1;
	static int32_t t61 = -32701;

	t61 = (((x249|x250)%x251)^x252);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x253 = INT8_MIN;
	uint8_t x254 = UINT8_MAX;
	int16_t x255 = 1226;
	int32_t x256 = INT32_MIN;
	int32_t t62 = INT32_MAX;

	t62 = (((x253|x254)%x255)^x256);

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -4;
	int64_t x258 = -103886326441LL;
	int64_t x260 = INT64_MIN;
	static volatile int64_t t63 = INT64_MAX;

	t63 = (((x257|x258)%x259)^x260);

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x261 = -6;
	int64_t x262 = -1LL;
	uint64_t x263 = 53LLU;
	int32_t x264 = 55660;
	static volatile uint64_t t64 = 147558LLU;

	t64 = (((x261|x262)%x263)^x264);

	if (t64 != 55650LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	uint16_t x268 = 8U;
	static int32_t t65 = 403021235;

	t65 = (((x265|x266)%x267)^x268);

	if (t65 != -9) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x270 = 572U;
	int8_t x271 = INT8_MIN;
	int32_t x272 = -1;
	volatile uint64_t t66 = 28531656023810747LLU;

	t66 = (((x269|x270)%x271)^x272);

	if (t66 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = 17363LL;
	int64_t x276 = INT64_MAX;
	static int64_t t67 = 22205LL;

	t67 = (((x273|x274)%x275)^x276);

	if (t67 != -17364LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	uint16_t x280 = 1U;
	int32_t t68 = 4;

	t68 = (((x277|x278)%x279)^x280);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = -1;
	static int64_t x282 = -7405870LL;
	static volatile uint64_t x283 = 1954LLU;
	uint64_t x284 = 1LLU;
	static uint64_t t69 = 67375974434870LLU;

	t69 = (((x281|x282)%x283)^x284);

	if (t69 != 1556LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x286 = 4U;
	uint16_t x287 = UINT16_MAX;
	uint32_t x288 = 1731425U;
	volatile uint32_t t70 = 396320944U;

	t70 = (((x285|x286)%x287)^x288);

	if (t70 != 1742053U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = UINT64_MAX;
	int16_t x290 = INT16_MIN;
	uint16_t x291 = 11U;
	int32_t x292 = -1;
	volatile uint64_t t71 = 71657631186186LLU;

	t71 = (((x289|x290)%x291)^x292);

	if (t71 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x293 = UINT16_MAX;
	int8_t x294 = -3;
	static uint8_t x295 = 47U;
	static int64_t x296 = -1027852LL;
	volatile int64_t t72 = 10421751833766LL;

	t72 = (((x293|x294)%x295)^x296);

	if (t72 != 1027851LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x297 = INT32_MIN;
	uint32_t x298 = 37802U;
	static volatile int32_t x299 = -1;
	int32_t x300 = -1;
	uint32_t t73 = 1159872U;

	t73 = (((x297|x298)%x299)^x300);

	if (t73 != 2147445845U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x301 = INT64_MIN;
	static int8_t x302 = -1;
	volatile int32_t x303 = INT32_MIN;
	int8_t x304 = -5;

	t74 = (((x301|x302)%x303)^x304);

	if (t74 != 4LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x305 = -1;
	static uint64_t x306 = 41LLU;
	uint64_t x307 = 8565LLU;
	volatile uint64_t t75 = 116LLU;

	t75 = (((x305|x306)%x307)^x308);

	if (t75 != 5009LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MAX;
	static volatile int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t76 = 28995917;

	t76 = (((x309|x310)%x311)^x312);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 10U;
	static uint64_t x314 = 3286470239LLU;
	int8_t x316 = 0;
	volatile uint64_t t77 = 2036054LLU;

	t77 = (((x313|x314)%x315)^x316);

	if (t77 != 3286470239LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x317 = 32U;
	int32_t x320 = INT32_MAX;
	static int64_t t78 = 48562LL;

	t78 = (((x317|x318)%x319)^x320);

	if (t78 != -2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	static uint64_t x322 = 1798LLU;
	volatile int8_t x323 = 7;
	static volatile uint64_t t79 = 29LLU;

	t79 = (((x321|x322)%x323)^x324);

	if (t79 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x326 = 3102572868239877LLU;
	uint16_t x327 = 357U;
	uint16_t x328 = 46U;
	volatile uint64_t t80 = 191677136674898402LLU;

	t80 = (((x325|x326)%x327)^x328);

	if (t80 != 122LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x329 = 1U;
	int32_t x330 = -1;
	int16_t x331 = INT16_MIN;
	int32_t t81 = -29705281;

	t81 = (((x329|x330)%x331)^x332);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x334 = -55;
	volatile int64_t x336 = -1LL;
	volatile int64_t t82 = 4LL;

	t82 = (((x333|x334)%x335)^x336);

	if (t82 != -32748LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x337 = INT64_MIN;
	volatile int16_t x339 = INT16_MIN;
	volatile int8_t x340 = INT8_MIN;
	volatile int64_t t83 = 17515609314486LL;

	t83 = (((x337|x338)%x339)^x340);

	if (t83 != 11950LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x342 = 24U;
	uint16_t x343 = 3U;
	int8_t x344 = 2;
	volatile int64_t t84 = 65776913469822427LL;

	t84 = (((x341|x342)%x343)^x344);

	if (t84 != -3LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = 1569;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MIN;
	uint64_t t85 = 858LLU;

	t85 = (((x345|x346)%x347)^x348);

	if (t85 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x350 = -1LL;
	volatile uint16_t x351 = 356U;
	int16_t x352 = 13;

	t86 = (((x349|x350)%x351)^x352);

	if (t86 != -14LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = -1LL;
	int8_t x354 = -43;
	static int8_t x355 = 23;
	int8_t x356 = INT8_MIN;

	t87 = (((x353|x354)%x355)^x356);

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = INT32_MAX;
	int16_t x358 = INT16_MAX;
	int64_t x359 = -1LL;
	int64_t x360 = -2135564LL;

	t88 = (((x357|x358)%x359)^x360);

	if (t88 != -2135564LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x361 = 4817U;
	int8_t x362 = -1;
	static int64_t x363 = INT64_MIN;
	static int16_t x364 = INT16_MAX;
	volatile int64_t t89 = -1LL;

	t89 = (((x361|x362)%x363)^x364);

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MAX;
	int8_t x366 = -10;
	uint8_t x367 = 89U;
	volatile int8_t x368 = INT8_MIN;
	volatile int64_t t90 = -30302LL;

	t90 = (((x365|x366)%x367)^x368);

	if (t90 != 127LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = INT32_MAX;
	int64_t x370 = INT64_MIN;
	int64_t x372 = -1LL;
	int64_t t91 = -53169887LL;

	t91 = (((x369|x370)%x371)^x372);

	if (t91 != 48516LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x373 = 143;
	static uint8_t x374 = UINT8_MAX;
	static int16_t x375 = -4;
	int16_t x376 = -1;
	int32_t t92 = -19009;

	t92 = (((x373|x374)%x375)^x376);

	if (t92 != -4) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x378 = -1LL;
	volatile int16_t x379 = INT16_MAX;
	uint8_t x380 = UINT8_MAX;
	volatile int64_t t93 = -20171LL;

	t93 = (((x377|x378)%x379)^x380);

	if (t93 != -256LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = 113383;
	static int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	volatile uint64_t x384 = 7983371131874193757LLU;
	uint64_t t94 = 145414746443927LLU;

	t94 = (((x381|x382)%x383)^x384);

	if (t94 != 10463372941079448506LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = 34;
	int16_t x386 = -1;
	uint32_t x387 = 104318636U;
	volatile int64_t t95 = -7703LL;

	t95 = (((x385|x386)%x387)^x388);

	if (t95 != -17903220LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x389 = -1LL;
	static int8_t x390 = INT8_MAX;
	uint8_t x391 = 126U;
	int64_t x392 = INT64_MIN;

	t96 = (((x389|x390)%x391)^x392);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x395 = INT8_MIN;
	int16_t x396 = 313;

	t97 = (((x393|x394)%x395)^x396);

	if (t97 != 326LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x397 = UINT32_MAX;
	int64_t x398 = -1364032788290LL;
	int64_t x399 = INT64_MIN;
	int32_t x400 = 31812;
	int64_t t98 = 16373LL;

	t98 = (((x397|x398)%x399)^x400);

	if (t98 != -1361504664645LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x402 = INT8_MAX;
	static volatile int32_t x404 = -365392667;
	volatile int32_t t99 = 3928;

	t99 = (((x401|x402)%x403)^x404);

	if (t99 != 365392666) { NG(); } else { ; }
	
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

