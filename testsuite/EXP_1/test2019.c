#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = -2;
uint64_t x8 = UINT64_MAX;
int64_t x11 = -1LL;
uint64_t x14 = 32801871183754LLU;
static uint32_t x17 = 2850U;
int8_t x19 = INT8_MIN;
static volatile uint64_t t5 = 389327805426311LLU;
int32_t x37 = INT32_MIN;
volatile uint32_t x43 = 6220910U;
uint16_t x50 = 5688U;
int16_t x53 = INT16_MIN;
volatile int16_t x58 = INT16_MIN;
uint64_t t21 = 99847342835937LLU;
static int32_t x102 = INT32_MIN;
volatile int8_t x103 = 59;
uint16_t x108 = 3335U;
int8_t x115 = -1;
static volatile int64_t x119 = -622638238LL;
int64_t x126 = INT64_MIN;
int8_t x129 = INT8_MIN;
static volatile int32_t t31 = -6125016;
int8_t x135 = 8;
uint64_t t36 = 3124LLU;
uint32_t x153 = UINT32_MAX;
static int16_t x158 = INT16_MAX;
uint8_t x164 = 11U;
uint64_t t39 = 3758801965LLU;
uint32_t x167 = 14648024U;
static volatile int64_t t40 = -174LL;
int32_t x171 = 2015036;
volatile int8_t x177 = 11;
static volatile int64_t x180 = -1511LL;
volatile uint16_t x181 = 1592U;
int32_t x187 = INT32_MIN;
static uint32_t x195 = UINT32_MAX;
int64_t t47 = 1LL;
int32_t x207 = INT32_MIN;
uint16_t x209 = UINT16_MAX;
int64_t x214 = 299LL;
int64_t t52 = -43676LL;
int8_t x218 = 13;
uint64_t x219 = UINT64_MAX;
uint64_t t53 = 4514070LLU;
volatile int32_t x221 = INT32_MIN;
volatile int64_t x224 = INT64_MIN;
static int16_t x234 = INT16_MIN;
static uint64_t x245 = 258158463339353LLU;
static int32_t x248 = INT32_MIN;
volatile int8_t x250 = -1;
uint32_t x260 = 449U;
int8_t x267 = INT8_MIN;
int32_t x270 = -143004;
int32_t x271 = INT32_MAX;
int32_t x273 = 6318045;
uint32_t x274 = 2751U;
int8_t x275 = INT8_MAX;
int64_t x276 = INT64_MIN;
int64_t t65 = 63190614LL;
static int64_t x287 = INT64_MIN;
volatile int64_t t68 = 2155328306924LL;
int16_t x289 = 912;
int32_t x303 = INT32_MIN;
static int8_t x309 = -6;
uint32_t x323 = 12366031U;
volatile uint32_t t76 = 30U;
uint8_t x326 = 20U;
int16_t x328 = INT16_MAX;
uint16_t x348 = 2203U;
static uint64_t t83 = 27160252944827396LLU;
static volatile int32_t x355 = 129;
int8_t x356 = INT8_MIN;
static int32_t x358 = INT32_MAX;
int64_t x359 = INT64_MAX;
int8_t x361 = INT8_MIN;
static volatile int32_t t86 = 0;
uint16_t x372 = UINT16_MAX;
uint32_t x378 = UINT32_MAX;
static int64_t x380 = -1LL;
uint8_t x381 = UINT8_MAX;
int64_t x387 = -1328291180431LL;
volatile int32_t x391 = INT32_MAX;
int32_t x392 = INT32_MAX;
uint8_t x401 = 0U;
int64_t x405 = 12128LL;
int16_t x413 = 11133;
volatile uint64_t t99 = 257521144658953LLU;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int16_t x2 = -4;
	uint16_t x3 = UINT16_MAX;
	static uint8_t x4 = 5U;
	volatile int64_t t0 = -376305446LL;

	t0 = (((x1|x2)^x3)/x4);

	if (t0 != -13107LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = 21431U;
	volatile int64_t x7 = -1LL;
	uint64_t t1 = 96378504950159895LLU;

	t1 = (((x5|x6)^x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int8_t x10 = -1;
	volatile int16_t x12 = -5121;
	int64_t t2 = -1231953LL;

	t2 = (((x9|x10)^x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	volatile int64_t x15 = INT64_MIN;
	uint8_t x16 = 23U;
	volatile uint64_t t3 = 511916168667LLU;

	t3 = (((x13|x14)^x15)/x16);

	if (t3 != 401017601818042724LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 162298U;
	int16_t x20 = INT16_MIN;
	uint32_t t4 = 510594U;

	t4 = (((x17|x18)^x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 61709LLU;
	int16_t x22 = -1;
	static uint32_t x23 = 355660120U;
	int8_t x24 = INT8_MAX;

	t5 = (((x21|x22)^x23)/x24);

	if (t5 != 145249953333495208LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = UINT8_MAX;
	int32_t x26 = INT32_MIN;
	static volatile int32_t x27 = INT32_MAX;
	static volatile int64_t x28 = -1LL;
	volatile int64_t t6 = -2LL;

	t6 = (((x25|x26)^x27)/x28);

	if (t6 != 256LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 7842319338LL;
	volatile uint16_t x30 = 3U;
	static volatile uint8_t x31 = 17U;
	int8_t x32 = INT8_MAX;
	static int64_t t7 = 2072269142317LL;

	t7 = (((x29|x30)^x31)/x32);

	if (t7 != 61750546LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint32_t x34 = 50753U;
	int8_t x35 = INT8_MAX;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 60LL;

	t8 = (((x33|x34)^x35)/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	int8_t x39 = -12;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 31667;

	t9 = (((x37|x38)^x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 199437674U;
	volatile int16_t x42 = -48;
	static uint32_t x44 = 3477646U;
	uint32_t t10 = 254604U;

	t10 = (((x41|x42)^x43)/x44);

	if (t10 != 1233U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	volatile int32_t x48 = 72;
	volatile int32_t t11 = 1227;

	t11 = (((x45|x46)^x47)/x48);

	if (t11 != -453) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static int8_t x51 = INT8_MAX;
	static int8_t x52 = -1;
	int32_t t12 = -29;

	t12 = (((x49|x50)^x51)/x52);

	if (t12 != -2147483520) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = 195742661;

	t13 = (((x53|x54)^x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int32_t x59 = INT32_MIN;
	int32_t x60 = 28979769;
	int32_t t14 = -66477;

	t14 = (((x57|x58)^x59)/x60);

	if (t14 != 74) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	volatile uint16_t x62 = 6U;
	uint8_t x63 = 1U;
	uint8_t x64 = 1U;
	volatile int64_t t15 = -817467713LL;

	t15 = (((x61|x62)^x63)/x64);

	if (t15 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	int64_t x68 = -1LL;
	int64_t t16 = 5481385638516LL;

	t16 = (((x65|x66)^x67)/x68);

	if (t16 != -32767LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 1U;
	uint64_t x70 = 8164095005040LLU;
	int32_t x71 = INT32_MAX;
	int8_t x72 = INT8_MIN;
	static volatile uint64_t t17 = 11LLU;

	t17 = (((x69|x70)^x71)/x72);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 1;
	int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MIN;
	static uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 67778;

	t18 = (((x73|x74)^x75)/x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	int8_t x79 = INT8_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t19 = -38421159LL;

	t19 = (((x77|x78)^x79)/x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	volatile uint32_t x82 = 9U;
	uint8_t x83 = 28U;
	volatile int16_t x84 = -1;
	volatile uint32_t t20 = 234U;

	t20 = (((x81|x82)^x83)/x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	int8_t x86 = INT8_MIN;
	volatile int16_t x87 = 2880;
	static uint64_t x88 = UINT64_MAX;

	t21 = (((x85|x86)^x87)/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	static int16_t x90 = INT16_MAX;
	int64_t x91 = INT64_MIN;
	uint64_t x92 = 4229424164LLU;
	volatile uint64_t t22 = 6061103488685744209LLU;

	t22 = (((x89|x90)^x91)/x92);

	if (t22 != 2180763072LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 436954889753100LLU;
	int8_t x98 = INT8_MIN;
	int16_t x99 = -1;
	int8_t x100 = INT8_MIN;
	uint64_t t23 = 2398640635LLU;

	t23 = (((x97|x98)^x99)/x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int16_t x104 = INT16_MAX;
	int64_t t24 = -2677982480991LL;

	t24 = (((x101|x102)^x103)/x104);

	if (t24 != -65537LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1;
	uint8_t x106 = 2U;
	static uint8_t x107 = 1U;
	volatile int32_t t25 = -19;

	t25 = (((x105|x106)^x107)/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 5621858906494745LL;
	uint8_t x110 = 13U;
	static int8_t x111 = INT8_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t26 = -38789LL;

	t26 = (((x109|x110)^x111)/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -2645;
	int64_t x114 = -4428292748922716358LL;
	int32_t x116 = -1;
	static int64_t t27 = -311648134LL;

	t27 = (((x113|x114)^x115)/x116);

	if (t27 != -68LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x117 = 3LLU;
	volatile uint32_t x118 = 7076U;
	static int32_t x120 = INT32_MIN;
	uint64_t t28 = 35296686721LLU;

	t28 = (((x117|x118)^x119)/x120);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = 1708191U;
	static uint64_t x122 = 921435886822826LLU;
	int16_t x123 = INT16_MIN;
	static int8_t x124 = INT8_MIN;
	static uint64_t t29 = 29LLU;

	t29 = (((x121|x122)^x123)/x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x127 = UINT8_MAX;
	uint8_t x128 = 3U;
	int64_t t30 = -9775685374LL;

	t30 = (((x125|x126)^x127)/x128);

	if (t30 != -10837LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x130 = UINT8_MAX;
	int16_t x131 = -1;
	volatile uint16_t x132 = UINT16_MAX;

	t31 = (((x129|x130)^x131)/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 4374302668216LL;
	volatile int8_t x134 = 33;
	int16_t x136 = -65;
	volatile int64_t t32 = 882349041339742LL;

	t32 = (((x133|x134)^x135)/x136);

	if (t32 != -67296964126LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MAX;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MAX;
	volatile int64_t t33 = -6184LL;

	t33 = (((x137|x138)^x139)/x140);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = -1LL;
	int16_t x143 = -1;
	int8_t x144 = INT8_MIN;
	volatile int64_t t34 = 3574772711791858792LL;

	t34 = (((x141|x142)^x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = -1;
	uint8_t x146 = 3U;
	int32_t x147 = INT32_MIN;
	int64_t x148 = INT64_MIN;
	volatile int64_t t35 = 419322867391255LL;

	t35 = (((x145|x146)^x147)/x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = 110723528;
	static int32_t x150 = -1;
	int16_t x151 = 0;
	volatile uint64_t x152 = 7714982063190987LLU;

	t36 = (((x149|x150)^x151)/x152);

	if (t36 != 2391LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x154 = UINT8_MAX;
	uint16_t x155 = UINT16_MAX;
	volatile int64_t x156 = INT64_MAX;
	int64_t t37 = 5LL;

	t37 = (((x153|x154)^x155)/x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x157 = 1117U;
	static volatile uint8_t x159 = 0U;
	volatile uint32_t x160 = 12113500U;
	static volatile uint32_t t38 = 25448U;

	t38 = (((x157|x158)^x159)/x160);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = UINT16_MAX;
	int32_t x162 = INT32_MIN;
	volatile uint64_t x163 = 251518LLU;

	t39 = (((x161|x162)^x163)/x164);

	if (t39 != 1676976733778388654LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = INT64_MAX;
	uint16_t x166 = UINT16_MAX;
	static int64_t x168 = -1346LL;

	t40 = (((x165|x166)^x167)/x168);

	if (t40 != -6852430933759381LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -1;
	int64_t x170 = -1LL;
	uint64_t x172 = 46205LLU;
	uint64_t t41 = 3924388944188356791LLU;

	t41 = (((x169|x170)^x171)/x172);

	if (t41 != 399236967291581LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	uint16_t x174 = 10120U;
	uint32_t x175 = 861U;
	int32_t x176 = INT32_MIN;
	uint32_t t42 = 64335U;

	t42 = (((x173|x174)^x175)/x176);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x178 = -1;
	volatile uint64_t x179 = 4LLU;
	volatile uint64_t t43 = 1LLU;

	t43 = (((x177|x178)^x179)/x180);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	volatile int8_t x184 = -9;
	int64_t t44 = -27089LL;

	t44 = (((x181|x182)^x183)/x184);

	if (t44 != -1024819115206086022LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 0U;
	uint64_t x186 = 0LLU;
	static uint32_t x188 = UINT32_MAX;
	uint64_t t45 = 7852625690103LLU;

	t45 = (((x185|x186)^x187)/x188);

	if (t45 != 4294967296LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 6262U;
	int8_t x190 = 1;
	volatile uint64_t x191 = 4198766578LLU;
	volatile int32_t x192 = INT32_MIN;
	uint64_t t46 = 15540930722272458LLU;

	t46 = (((x189|x190)^x191)/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x194 = INT64_MIN;
	int8_t x196 = INT8_MAX;

	t47 = (((x193|x194)^x195)/x196);

	if (t47 != -33818382LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = -344LL;
	uint32_t x199 = 32598U;
	uint64_t x200 = 274973953LLU;
	volatile uint64_t t48 = 327450418226LLU;

	t48 = (((x197|x198)^x199)/x200);

	if (t48 != 67085423446LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 27308906U;
	int32_t x202 = 68557;
	int32_t x203 = INT32_MIN;
	volatile uint16_t x204 = 332U;
	uint32_t t49 = 1514007499U;

	t49 = (((x201|x202)^x203)/x204);

	if (t49 != 6550783U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = 14;
	int16_t x206 = INT16_MIN;
	volatile int32_t x208 = -368779574;
	static volatile int32_t t50 = -821264;

	t50 = (((x205|x206)^x207)/x208);

	if (t50 != -5) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = INT32_MAX;
	uint8_t x211 = 24U;
	int16_t x212 = -6;
	int32_t t51 = -27776121;

	t51 = (((x209|x210)^x211)/x212);

	if (t51 != -357913937) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = INT32_MAX;
	int8_t x215 = -1;
	uint8_t x216 = 91U;

	t52 = (((x213|x214)^x215)/x216);

	if (t52 != -23598721LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int32_t x220 = -43824083;

	t53 = (((x217|x218)^x219)/x220);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x222 = INT32_MIN;
	uint16_t x223 = 4629U;
	static int64_t t54 = 2478105643789LL;

	t54 = (((x221|x222)^x223)/x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = -1;
	uint32_t x226 = UINT32_MAX;
	uint8_t x227 = UINT8_MAX;
	volatile int32_t x228 = -1;
	static uint32_t t55 = 1535331U;

	t55 = (((x225|x226)^x227)/x228);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = -1;
	static int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	volatile int64_t t56 = 155638660820LL;

	t56 = (((x233|x234)^x235)/x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -41;
	static int8_t x238 = 12;
	uint16_t x239 = 1150U;
	uint8_t x240 = 1U;
	int32_t t57 = 16;

	t57 = (((x237|x238)^x239)/x240);

	if (t57 != -1119) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x246 = INT64_MIN;
	int16_t x247 = -1;
	volatile uint64_t t58 = 352689089LLU;

	t58 = (((x245|x246)^x247)/x248);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x249 = 1635053462LLU;
	uint16_t x251 = UINT16_MAX;
	int64_t x252 = -1LL;
	volatile uint64_t t59 = 3122978049LLU;

	t59 = (((x249|x250)^x251)/x252);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -16;
	volatile int16_t x254 = 2153;
	volatile int64_t x255 = 13693887642LL;
	int64_t x256 = INT64_MIN;
	volatile int64_t t60 = 14LL;

	t60 = (((x253|x254)^x255)/x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x257 = INT32_MIN;
	uint32_t x258 = 4613U;
	int16_t x259 = INT16_MIN;
	uint32_t t61 = 0U;

	t61 = (((x257|x258)^x259)/x260);

	if (t61 != 4782751U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x261 = 786LLU;
	int32_t x262 = -10;
	int16_t x263 = -1;
	static int16_t x264 = -1;
	static uint64_t t62 = 16138394641626009LLU;

	t62 = (((x261|x262)^x263)/x264);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x265 = 106U;
	int32_t x266 = INT32_MIN;
	static int32_t x268 = INT32_MAX;
	volatile int32_t t63 = 10840724;

	t63 = (((x265|x266)^x267)/x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 6303U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t64 = 185894574;

	t64 = (((x269|x270)^x271)/x272);

	if (t64 != 16776116) { NG(); } else { ; }
	
}

void f65(void) {


	t65 = (((x273|x274)^x275)/x276);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x277 = INT64_MAX;
	uint8_t x278 = 8U;
	int32_t x279 = INT32_MIN;
	int64_t x280 = 12564008LL;
	int64_t t66 = 8552897LL;

	t66 = (((x277|x278)^x279)/x280);

	if (t66 != -734110646436LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x281 = INT16_MIN;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = -1;
	volatile int64_t x284 = -1LL;
	volatile uint64_t t67 = 485174LLU;

	t67 = (((x281|x282)^x283)/x284);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x285 = INT16_MAX;
	volatile int8_t x286 = INT8_MIN;
	volatile int16_t x288 = INT16_MIN;

	t68 = (((x285|x286)^x287)/x288);

	if (t68 != -281474976710655LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x290 = 2088111832LLU;
	static uint8_t x291 = 1U;
	int16_t x292 = INT16_MIN;
	uint64_t t69 = 28584292729LLU;

	t69 = (((x289|x290)^x291)/x292);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x293 = 6U;
	static uint8_t x294 = 11U;
	uint32_t x295 = 31U;
	int8_t x296 = -1;
	static volatile uint32_t t70 = 26298U;

	t70 = (((x293|x294)^x295)/x296);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x301 = -22;
	int8_t x302 = INT8_MIN;
	uint64_t x304 = 5880LLU;
	static volatile uint64_t t71 = 272375925LLU;

	t71 = (((x301|x302)^x303)/x304);

	if (t71 != 365218LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = 0LL;
	int16_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = 3171U;
	volatile int64_t t72 = -2512LL;

	t72 = (((x305|x306)^x307)/x308);

	if (t72 != 677226LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x310 = UINT16_MAX;
	uint32_t x311 = 7924342U;
	int8_t x312 = INT8_MIN;
	volatile uint32_t t73 = 98U;

	t73 = (((x309|x310)^x311)/x312);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -1;
	uint32_t x314 = 4878609U;
	uint16_t x315 = UINT16_MAX;
	static int64_t x316 = 1938805648LL;
	int64_t t74 = 18091808273LL;

	t74 = (((x313|x314)^x315)/x316);

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	static volatile uint8_t x320 = 6U;
	volatile int64_t t75 = 134915005354LL;

	t75 = (((x317|x318)^x319)/x320);

	if (t75 != 21LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = 3733;
	int8_t x322 = -1;
	int32_t x324 = INT32_MAX;

	t76 = (((x321|x322)^x323)/x324);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x325 = -1;
	int32_t x327 = INT32_MIN;
	static int32_t t77 = 260110;

	t77 = (((x325|x326)^x327)/x328);

	if (t77 != 65538) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MIN;
	volatile int8_t x330 = INT8_MIN;
	volatile uint32_t x331 = UINT32_MAX;
	static int64_t x332 = -17805207098646633LL;
	volatile int64_t t78 = 54641597950941600LL;

	t78 = (((x329|x330)^x331)/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x333 = 0U;
	int16_t x334 = INT16_MIN;
	static uint64_t x335 = 9LLU;
	int32_t x336 = INT32_MIN;
	volatile uint64_t t79 = 75323LLU;

	t79 = (((x333|x334)^x335)/x336);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MAX;
	int16_t x338 = 120;
	static int16_t x339 = INT16_MIN;
	static uint16_t x340 = 962U;
	int64_t t80 = -221797230505LL;

	t80 = (((x337|x338)^x339)/x340);

	if (t80 != -9587704820015325LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x341 = 11099U;
	int32_t x342 = -1;
	static int32_t x343 = -1;
	uint8_t x344 = 2U;
	volatile uint32_t t81 = 22780U;

	t81 = (((x341|x342)^x343)/x344);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = 851LLU;
	volatile int8_t x346 = -56;
	int16_t x347 = INT16_MIN;
	volatile uint64_t t82 = 293638LLU;

	t82 = (((x345|x346)^x347)/x348);

	if (t82 != 14LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = 6217005421811870LL;
	uint64_t x350 = UINT64_MAX;
	static int64_t x351 = INT64_MAX;
	int8_t x352 = INT8_MIN;

	t83 = (((x349|x350)^x351)/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 0LLU;
	int8_t x354 = INT8_MIN;
	uint64_t t84 = 27061842517LLU;

	t84 = (((x353|x354)^x355)/x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x357 = -1;
	int64_t x360 = INT64_MIN;
	volatile int64_t t85 = 28288LL;

	t85 = (((x357|x358)^x359)/x360);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x362 = INT8_MIN;
	static uint8_t x363 = 1U;
	static uint8_t x364 = 7U;

	t86 = (((x361|x362)^x363)/x364);

	if (t86 != -18) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x369 = 6579U;
	int16_t x370 = -327;
	int64_t x371 = INT64_MIN;
	static volatile int64_t t87 = -822876847LL;

	t87 = (((x369|x370)^x371)/x372);

	if (t87 != 140739635871744LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x373 = -35;
	uint32_t x374 = UINT32_MAX;
	int8_t x375 = -28;
	uint8_t x376 = 1U;
	uint32_t t88 = 94U;

	t88 = (((x373|x374)^x375)/x376);

	if (t88 != 27U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	int64_t t89 = 7464LL;

	t89 = (((x377|x378)^x379)/x380);

	if (t89 != -4294967040LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x382 = INT16_MAX;
	uint8_t x383 = 1U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t90 = -321199054;

	t90 = (((x381|x382)^x383)/x384);

	if (t90 != -255) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x385 = 86061LL;
	volatile int64_t x386 = -1809LL;
	static volatile int32_t x388 = -89738;
	volatile int64_t t91 = -6LL;

	t91 = (((x385|x386)^x387)/x388);

	if (t91 != -14801880LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x389 = 1623U;
	static int16_t x390 = -84;
	int32_t t92 = -57;

	t92 = (((x389|x390)^x391)/x392);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x393 = 7;
	volatile int8_t x394 = INT8_MIN;
	int32_t x395 = -67793;
	uint8_t x396 = 11U;
	int32_t t93 = 985041;

	t93 = (((x393|x394)^x395)/x396);

	if (t93 != 6159) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x397 = 2621U;
	static uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	int32_t x400 = -1;
	static uint32_t t94 = 118U;

	t94 = (((x397|x398)^x399)/x400);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x402 = INT16_MIN;
	uint32_t x403 = 31U;
	int16_t x404 = INT16_MAX;
	volatile uint32_t t95 = 125548564U;

	t95 = (((x401|x402)^x403)/x404);

	if (t95 != 131075U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x406 = 10;
	static uint8_t x407 = UINT8_MAX;
	static volatile uint64_t x408 = 8583441734195242235LLU;
	static uint64_t t96 = 22LLU;

	t96 = (((x405|x406)^x407)/x408);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x409 = UINT64_MAX;
	uint64_t x410 = 85120293828723LLU;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	volatile uint64_t t97 = 2504414027LLU;

	t97 = (((x409|x410)^x411)/x412);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x414 = 371;
	uint64_t x415 = 1800840228LLU;
	int64_t x416 = -1LL;
	static uint64_t t98 = 1926103761711370495LLU;

	t98 = (((x413|x414)^x415)/x416);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x417 = 167470269LL;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = 1780LLU;
	int32_t x420 = INT32_MIN;

	t99 = (((x417|x418)^x419)/x420);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

