#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = UINT16_MAX;
uint64_t x15 = 6294LLU;
int8_t x18 = INT8_MAX;
int16_t x23 = -97;
int64_t t5 = -1746LL;
uint16_t x30 = 38U;
int8_t x36 = INT8_MIN;
int64_t x39 = INT64_MAX;
uint64_t x42 = 5523046999LLU;
uint32_t x47 = UINT32_MAX;
volatile int32_t x50 = INT32_MIN;
static volatile uint32_t t12 = 14728877U;
int64_t x54 = INT64_MIN;
static int64_t x60 = INT64_MIN;
int64_t t14 = 69539170198894500LL;
uint8_t x62 = 4U;
uint64_t x65 = 26944003591971LLU;
int16_t x67 = -12;
int8_t x69 = INT8_MAX;
static uint16_t x75 = UINT16_MAX;
uint8_t x80 = 65U;
int32_t x98 = -1;
uint64_t t24 = 2498680LLU;
int32_t x114 = INT32_MAX;
int16_t x118 = 0;
int32_t x120 = 63259;
volatile uint32_t x122 = UINT32_MAX;
volatile uint32_t t30 = 4837711U;
int64_t x129 = INT64_MIN;
uint16_t x132 = 1U;
int64_t x134 = -1LL;
volatile uint16_t x141 = UINT16_MAX;
uint64_t t35 = 2013785828895188LLU;
volatile int64_t x147 = -63872096330823LL;
int8_t x150 = INT8_MIN;
int16_t x158 = INT16_MAX;
int16_t x164 = -1;
int16_t x170 = INT16_MIN;
uint32_t t42 = 9296U;
int8_t x173 = INT8_MIN;
static int64_t x174 = -1LL;
static volatile int64_t t44 = 1LL;
uint8_t x182 = 0U;
volatile int32_t x191 = INT32_MIN;
int8_t x193 = -1;
static int8_t x197 = 1;
uint32_t x199 = UINT32_MAX;
int32_t x201 = INT32_MIN;
static int8_t x203 = -1;
volatile int16_t x204 = -31;
int8_t x215 = -13;
volatile int64_t t54 = 132410879204LL;
static int16_t x229 = INT16_MIN;
uint8_t x231 = UINT8_MAX;
static volatile int32_t x234 = -1;
int64_t x239 = INT64_MIN;
uint32_t x240 = UINT32_MAX;
int64_t t59 = 711511LL;
int32_t x241 = -834;
uint8_t x246 = 63U;
volatile int64_t x249 = 209244752200059186LL;
uint16_t x262 = UINT16_MAX;
int16_t x269 = INT16_MAX;
static uint8_t x270 = 11U;
uint16_t x271 = UINT16_MAX;
uint64_t x274 = UINT64_MAX;
static uint64_t t68 = 41584798609722LLU;
int8_t x277 = INT8_MIN;
uint16_t x286 = UINT16_MAX;
volatile int32_t t73 = -781812738;
int8_t x305 = 7;
uint64_t t77 = 776LLU;
uint64_t x313 = 46124731378268LLU;
volatile int64_t t79 = 534043974529791LL;
static int8_t x323 = -1;
uint64_t x324 = 3032750379893361577LLU;
volatile uint64_t t80 = 9382710984273223LLU;
volatile int64_t x331 = INT64_MIN;
volatile int8_t x332 = -24;
volatile uint8_t x338 = 52U;
static int16_t x341 = -14994;
static int64_t x342 = INT64_MAX;
volatile int64_t t85 = 6462736818691419LL;
static volatile int64_t t86 = 1872666305219662965LL;
static int32_t x351 = INT32_MAX;
volatile int32_t x357 = 13198165;
int32_t x359 = 260410;
int16_t x361 = INT16_MIN;
int64_t t92 = 1LL;
volatile uint32_t t93 = 749212082U;
static volatile int32_t x378 = -1;
int16_t x382 = INT16_MIN;
static uint32_t x385 = UINT32_MAX;
volatile int64_t x388 = 6LL;
int64_t x401 = INT64_MIN;
volatile int64_t x403 = INT64_MIN;
volatile uint64_t t99 = 463LLU;


void f0(void) {
	static int16_t x1 = 2;
	int32_t x2 = INT32_MIN;
	volatile uint16_t x3 = 2439U;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = 0LL;

	t0 = (((x1^x2)%x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 68U;
	static volatile int8_t x6 = INT8_MAX;
	static volatile int16_t x7 = -1;
	int64_t x8 = -1LL;
	int64_t t1 = 1890846412248729LL;

	t1 = (((x5^x6)%x7)/x8);

	if (t1 != -59LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	int8_t x11 = INT8_MIN;
	static int8_t x12 = -1;
	int64_t t2 = -370174754LL;

	t2 = (((x9^x10)%x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 901472U;
	uint16_t x14 = UINT16_MAX;
	int8_t x16 = INT8_MAX;
	uint64_t t3 = 2143860917997466LLU;

	t3 = (((x13^x14)%x15)/x16);

	if (t3 != 45LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 295U;
	int32_t x19 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	int64_t t4 = -34521618LL;

	t4 = (((x17^x18)%x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static uint8_t x22 = UINT8_MAX;
	int64_t x24 = INT64_MIN;

	t5 = (((x21^x22)%x23)/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static volatile int8_t x26 = INT8_MAX;
	int64_t x27 = INT64_MIN;
	int64_t x28 = -3622LL;
	volatile int64_t t6 = -3115256273174072116LL;

	t6 = (((x25^x26)%x27)/x28);

	if (t6 != -1185799LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x31 = INT16_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 6186698;

	t7 = (((x29^x30)%x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	static uint32_t x34 = UINT32_MAX;
	int32_t x35 = -358882320;
	volatile uint32_t t8 = 154213U;

	t8 = (((x33^x34)%x35)/x36);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint8_t x38 = 36U;
	static volatile int8_t x40 = -1;
	volatile int64_t t9 = -1923651877LL;

	t9 = (((x37^x38)%x39)/x40);

	if (t9 != 9223372036854775772LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 2U;
	int64_t x43 = INT64_MIN;
	uint64_t x44 = 5588388785LLU;
	volatile uint64_t t10 = 131LLU;

	t10 = (((x41^x42)%x43)/x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static volatile int16_t x46 = -22;
	static int8_t x48 = INT8_MIN;
	static volatile uint32_t t11 = 1U;

	t11 = (((x45^x46)%x47)/x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x51 = INT16_MIN;
	static uint32_t x52 = UINT32_MAX;

	t12 = (((x49^x50)%x51)/x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -50;
	int32_t x55 = INT32_MIN;
	int8_t x56 = -1;
	int64_t t13 = 106009LL;

	t13 = (((x53^x54)%x55)/x56);

	if (t13 != -2147483598LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	uint32_t x58 = 185176234U;
	static int8_t x59 = INT8_MIN;

	t14 = (((x57^x58)%x59)/x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = 18U;
	volatile int64_t t15 = 19140035042LL;

	t15 = (((x61^x62)%x63)/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x66 = INT64_MIN;
	int64_t x68 = INT64_MAX;
	uint64_t t16 = 64LLU;

	t16 = (((x65^x66)%x67)/x68);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	volatile int64_t x72 = -475405LL;
	int64_t t17 = -3737279764LL;

	t17 = (((x69^x70)%x71)/x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MIN;
	static int16_t x74 = -1;
	int64_t x76 = -1LL;
	volatile int64_t t18 = -66996330LL;

	t18 = (((x73^x74)%x75)/x76);

	if (t18 != -32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MAX;
	int32_t x78 = -1;
	static volatile int32_t x79 = -1;
	int32_t t19 = -458747506;

	t19 = (((x77^x78)%x79)/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = 3U;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t20 = 940766993LL;

	t20 = (((x81^x82)%x83)/x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	uint8_t x86 = 18U;
	int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = 47053073;

	t21 = (((x85^x86)%x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int8_t x90 = INT8_MIN;
	volatile int64_t x91 = INT64_MIN;
	int32_t x92 = INT32_MIN;
	int64_t t22 = -12785989513LL;

	t22 = (((x89^x90)%x91)/x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 2660U;
	static int64_t x94 = INT64_MIN;
	int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MAX;
	int64_t t23 = 296598099619LL;

	t23 = (((x93^x94)%x95)/x96);

	if (t23 != -16909299LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 8007849003LLU;
	uint32_t x99 = 515U;
	uint32_t x100 = UINT32_MAX;

	t24 = (((x97^x98)%x99)/x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x102 = 43U;
	static int8_t x103 = -1;
	int64_t x104 = 6206886682339LL;
	static int64_t t25 = -14558156872354414LL;

	t25 = (((x101^x102)%x103)/x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int32_t x106 = INT32_MIN;
	volatile int8_t x107 = -1;
	uint8_t x108 = 3U;
	int32_t t26 = -305847;

	t26 = (((x105^x106)%x107)/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	volatile int16_t x110 = 356;
	int16_t x111 = -1;
	int32_t x112 = 273769474;
	volatile int32_t t27 = -716611266;

	t27 = (((x109^x110)%x111)/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	int8_t x115 = 1;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 41323;

	t28 = (((x113^x114)%x115)/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	uint64_t x119 = 110677528LLU;
	uint64_t t29 = 256LLU;

	t29 = (((x117^x118)%x119)/x120);

	if (t29 != 833LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -1;
	int16_t x123 = INT16_MIN;
	static int32_t x124 = INT32_MIN;

	t30 = (((x121^x122)%x123)/x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = -54339743LL;
	static int8_t x126 = 0;
	int8_t x127 = INT8_MAX;
	int32_t x128 = 37239;
	volatile int64_t t31 = -637273259LL;

	t31 = (((x125^x126)%x127)/x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	volatile int8_t x131 = INT8_MIN;
	static volatile int64_t t32 = 70LL;

	t32 = (((x129^x130)%x131)/x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	int64_t x135 = INT64_MIN;
	uint16_t x136 = 195U;
	int64_t t33 = 11LL;

	t33 = (((x133^x134)%x135)/x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 886;
	volatile int16_t x138 = -43;
	volatile int64_t x139 = INT64_MAX;
	static int16_t x140 = -9;
	volatile int64_t t34 = 1988205LL;

	t34 = (((x137^x138)%x139)/x140);

	if (t34 != 95LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x142 = 1933LLU;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = INT16_MIN;

	t35 = (((x141^x142)%x143)/x144);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = 14U;
	static int16_t x146 = -13774;
	int64_t x148 = -19236LL;
	int64_t t36 = -4614454275LL;

	t36 = (((x145^x146)%x147)/x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int8_t x151 = INT8_MAX;
	static int8_t x152 = INT8_MAX;
	volatile uint64_t t37 = 469138874309LLU;

	t37 = (((x149^x150)%x151)/x152);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 165743114LLU;
	int64_t x154 = 550070LL;
	volatile int64_t x155 = INT64_MIN;
	volatile int8_t x156 = -13;
	uint64_t t38 = 1393748277212960LLU;

	t38 = (((x153^x154)%x155)/x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 30U;
	volatile uint8_t x159 = UINT8_MAX;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = 6878;

	t39 = (((x157^x158)%x159)/x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = -1;
	uint32_t x162 = 7455U;
	uint32_t x163 = UINT32_MAX;
	volatile uint32_t t40 = 1871U;

	t40 = (((x161^x162)%x163)/x164);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 33U;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = 35734016846989LL;
	static volatile int8_t x168 = INT8_MIN;
	volatile int64_t t41 = 103415976631LL;

	t41 = (((x165^x166)%x167)/x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 34;
	volatile uint32_t x171 = 3U;
	int8_t x172 = INT8_MAX;

	t42 = (((x169^x170)%x171)/x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x175 = 3049958U;
	int64_t x176 = -6483501359LL;
	int64_t t43 = 148001378956393LL;

	t43 = (((x173^x174)%x175)/x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MAX;
	int8_t x179 = -1;
	static int16_t x180 = INT16_MIN;

	t44 = (((x177^x178)%x179)/x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int16_t x183 = 56;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 120591;

	t45 = (((x181^x182)%x183)/x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -671;
	uint8_t x186 = 4U;
	static volatile int64_t x187 = INT64_MAX;
	uint8_t x188 = 72U;
	int64_t t46 = 0LL;

	t46 = (((x185^x186)%x187)/x188);

	if (t46 != -9LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = 30067483960LL;
	int64_t x190 = -1LL;
	int16_t x192 = INT16_MIN;
	int64_t t47 = -1LL;

	t47 = (((x189^x190)%x191)/x192);

	if (t47 != 82LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = 113U;
	volatile int32_t t48 = -289372;

	t48 = (((x193^x194)%x195)/x196);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -1LL;
	uint8_t x200 = 5U;
	volatile int64_t t49 = -5776LL;

	t49 = (((x197^x198)%x199)/x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x202 = UINT32_MAX;
	uint32_t t50 = 414U;

	t50 = (((x201^x202)%x203)/x204);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 7839U;
	int32_t x206 = INT32_MAX;
	uint8_t x207 = 3U;
	int32_t x208 = -1;
	int32_t t51 = -46753810;

	t51 = (((x205^x206)%x207)/x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	static int64_t x210 = INT64_MAX;
	int8_t x211 = -1;
	uint32_t x212 = 22U;
	int64_t t52 = -568426054728LL;

	t52 = (((x209^x210)%x211)/x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -1;
	int8_t x214 = INT8_MIN;
	static int16_t x216 = 1;
	int32_t t53 = -1009;

	t53 = (((x213^x214)%x215)/x216);

	if (t53 != 10) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x217 = INT64_MAX;
	int8_t x218 = -1;
	int64_t x219 = INT64_MIN;
	static uint32_t x220 = 1222U;

	t54 = (((x217^x218)%x219)/x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 1U;
	uint8_t x222 = 1U;
	volatile int8_t x223 = -1;
	volatile int8_t x224 = -1;
	volatile int32_t t55 = 18313;

	t55 = (((x221^x222)%x223)/x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x225 = 626U;
	int8_t x226 = INT8_MIN;
	static int16_t x227 = INT16_MAX;
	uint8_t x228 = 1U;
	uint32_t t56 = 400657661U;

	t56 = (((x225^x226)%x227)/x228);

	if (t56 != 32245U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 23398079U;
	uint64_t x232 = 127280295LLU;
	uint64_t t57 = 10086LLU;

	t57 = (((x229^x230)%x231)/x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x233 = 54;
	uint32_t x235 = 3U;
	static int8_t x236 = INT8_MAX;
	static uint32_t t58 = 189U;

	t58 = (((x233^x234)%x235)/x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -468212373LL;
	int8_t x238 = -1;

	t59 = (((x237^x238)%x239)/x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MIN;
	int32_t x243 = INT32_MAX;
	int32_t x244 = 921;
	volatile int32_t t60 = -199644842;

	t60 = (((x241^x242)%x243)/x244);

	if (t60 != 2331686) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x245 = 374784U;
	static int16_t x247 = INT16_MAX;
	volatile int32_t x248 = 5;
	uint32_t t61 = 31U;

	t61 = (((x245^x246)%x247)/x248);

	if (t61 != 2882U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x250 = 296300LL;
	volatile int16_t x251 = INT16_MIN;
	int16_t x252 = -1;
	int64_t t62 = 462978705793LL;

	t62 = (((x249^x250)%x251)/x252);

	if (t62 != -19550LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -1074554234341113856LL;
	static volatile int16_t x254 = INT16_MAX;
	uint64_t x255 = 13LLU;
	uint16_t x256 = 1U;
	static volatile uint64_t t63 = 164608886LLU;

	t63 = (((x253^x254)%x255)/x256);

	if (t63 != 10LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = -1;
	int16_t x259 = INT16_MIN;
	static uint32_t x260 = UINT32_MAX;
	uint32_t t64 = 4864U;

	t64 = (((x257^x258)%x259)/x260);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	volatile uint64_t x263 = 805372408977683LLU;
	volatile int64_t x264 = INT64_MIN;
	volatile uint64_t t65 = 1781775137LLU;

	t65 = (((x261^x262)%x263)/x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static uint8_t x266 = UINT8_MAX;
	static uint8_t x267 = UINT8_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -1636;

	t66 = (((x265^x266)%x267)/x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x272 = -1;
	volatile int32_t t67 = 1146;

	t67 = (((x269^x270)%x271)/x272);

	if (t67 != -32756) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	uint8_t x275 = 16U;
	static volatile uint32_t x276 = 15122997U;

	t68 = (((x273^x274)%x275)/x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x278 = UINT8_MAX;
	uint16_t x279 = 76U;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 648600945;

	t69 = (((x277^x278)%x279)/x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = -443;
	static volatile int32_t x283 = -5676;
	int32_t x284 = -26;
	volatile int32_t t70 = 0;

	t70 = (((x281^x282)%x283)/x284);

	if (t70 != 102) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -437;
	static int32_t x287 = 3620272;
	volatile int32_t x288 = INT32_MAX;
	int32_t t71 = 16018157;

	t71 = (((x285^x286)%x287)/x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = 48;
	int64_t x290 = INT64_MIN;
	volatile int16_t x291 = -76;
	int64_t x292 = INT64_MAX;
	volatile int64_t t72 = -2225383LL;

	t72 = (((x289^x290)%x291)/x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	static volatile int32_t x294 = -20570;
	volatile int8_t x295 = 38;
	int16_t x296 = INT16_MIN;

	t73 = (((x293^x294)%x295)/x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 1;
	int16_t x298 = 342;
	int32_t x299 = -1;
	int32_t x300 = -1;
	int32_t t74 = -93;

	t74 = (((x297^x298)%x299)/x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 6705U;
	uint32_t x302 = 6315U;
	volatile int8_t x303 = INT8_MIN;
	static int32_t x304 = -1;
	uint32_t t75 = 1336781542U;

	t75 = (((x301^x302)%x303)/x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x306 = UINT8_MAX;
	uint32_t x307 = 1459856U;
	static int32_t x308 = -6464585;
	volatile uint32_t t76 = 72U;

	t76 = (((x305^x306)%x307)/x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MAX;
	uint32_t x310 = UINT32_MAX;
	uint64_t x311 = 13LLU;
	int8_t x312 = 1;

	t77 = (((x309^x310)%x311)/x312);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = 6153429831LL;
	static volatile int32_t x315 = 5672575;
	volatile int32_t x316 = INT32_MAX;
	uint64_t t78 = 157522617157679LLU;

	t78 = (((x313^x314)%x315)/x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int32_t x318 = INT32_MAX;
	int64_t x319 = -1LL;
	int64_t x320 = 7248LL;

	t79 = (((x317^x318)%x319)/x320);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	uint64_t x322 = 1438274560669617LLU;

	t80 = (((x321^x322)%x323)/x324);

	if (t80 != 6LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MAX;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MAX;
	volatile int64_t t81 = 157204LL;

	t81 = (((x325^x326)%x327)/x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	volatile uint32_t x330 = 126718U;
	int64_t t82 = -31699411763618LL;

	t82 = (((x329^x330)%x331)/x332);

	if (t82 != -89473205LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 273582;
	uint16_t x334 = 21U;
	static uint32_t x335 = UINT32_MAX;
	int8_t x336 = 3;
	static volatile uint32_t t83 = 45154054U;

	t83 = (((x333^x334)%x335)/x336);

	if (t83 != 91198U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int16_t x339 = INT16_MAX;
	static int8_t x340 = -1;
	int64_t t84 = 1572216LL;

	t84 = (((x337^x338)%x339)/x340);

	if (t84 != -32722LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x343 = 2U;
	int16_t x344 = 1;

	t85 = (((x341^x342)%x343)/x344);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MAX;
	volatile int8_t x346 = INT8_MIN;
	volatile int16_t x347 = 239;
	static int64_t x348 = INT64_MIN;

	t86 = (((x345^x346)%x347)/x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x350 = 25222270U;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t87 = 2351489879713406LLU;

	t87 = (((x349^x350)%x351)/x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 1098LL;
	int16_t x354 = INT16_MAX;
	static int64_t x355 = -72270341802510936LL;
	int64_t x356 = INT64_MIN;
	volatile int64_t t88 = 380LL;

	t88 = (((x353^x354)%x355)/x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x358 = 9369U;
	volatile uint32_t x360 = 43707244U;
	volatile uint32_t t89 = 165114730U;

	t89 = (((x357^x358)%x359)/x360);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = -11608;
	int16_t x363 = -6;
	int32_t x364 = INT32_MAX;
	static int32_t t90 = -10242750;

	t90 = (((x361^x362)%x363)/x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 0U;
	int64_t x366 = 17350505078009LL;
	static int64_t x367 = 24748648483614LL;
	uint16_t x368 = UINT16_MAX;
	int64_t t91 = 3373810399LL;

	t91 = (((x365^x366)%x367)/x368);

	if (t91 != 264751736LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = 1U;
	int8_t x370 = 1;
	int8_t x371 = INT8_MAX;
	static int64_t x372 = INT64_MIN;

	t92 = (((x369^x370)%x371)/x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static uint32_t x374 = 14044919U;
	int32_t x375 = 146;
	int32_t x376 = INT32_MIN;

	t93 = (((x373^x374)%x375)/x376);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	uint64_t x379 = 9786641LLU;
	static volatile int16_t x380 = -1;
	uint64_t t94 = 50LLU;

	t94 = (((x377^x378)%x379)/x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -1;
	static uint16_t x383 = 6U;
	uint64_t x384 = UINT64_MAX;
	uint64_t t95 = 2LLU;

	t95 = (((x381^x382)%x383)/x384);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x386 = 7677983743130077086LLU;
	int16_t x387 = INT16_MIN;
	uint64_t t96 = 1497155057427LLU;

	t96 = (((x385^x386)%x387)/x388);

	if (t96 != 1279663956648722106LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -62;
	int32_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int32_t x392 = -1;
	volatile int32_t t97 = 491131819;

	t97 = (((x389^x390)%x391)/x392);

	if (t97 != -61) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = INT32_MIN;
	int32_t x398 = -4824;
	int64_t x399 = INT64_MIN;
	int16_t x400 = -1;
	int64_t t98 = -115180867907LL;

	t98 = (((x397^x398)%x399)/x400);

	if (t98 != -2147478824LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x402 = UINT64_MAX;
	int32_t x404 = INT32_MIN;

	t99 = (((x401^x402)%x403)/x404);

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

