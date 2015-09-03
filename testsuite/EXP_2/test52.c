#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MIN;
int8_t x10 = INT8_MIN;
int64_t x11 = -1LL;
int64_t x12 = 71LL;
int8_t x14 = INT8_MIN;
volatile int32_t x16 = INT32_MIN;
uint32_t x29 = 7273U;
int8_t x30 = INT8_MIN;
volatile int64_t x31 = INT64_MAX;
uint16_t x32 = UINT16_MAX;
int32_t x36 = -146649266;
static int8_t x38 = -1;
volatile int32_t t9 = -764;
volatile int32_t x50 = INT32_MIN;
int16_t x53 = -1;
volatile int8_t x57 = INT8_MAX;
int16_t x59 = INT16_MAX;
volatile int32_t t14 = 27589515;
int32_t x63 = INT32_MAX;
static volatile uint64_t x64 = 14117279301LLU;
volatile uint64_t t15 = 0LLU;
int8_t x66 = 13;
int16_t x70 = 23;
uint8_t x71 = 3U;
volatile int32_t t17 = -276;
int64_t x74 = -1LL;
volatile int32_t x76 = INT32_MIN;
static uint8_t x77 = 0U;
static int64_t x85 = INT64_MAX;
static int32_t x87 = 252135998;
int64_t x90 = -3284759LL;
int64_t x93 = INT64_MIN;
volatile int16_t x100 = INT16_MIN;
int8_t x101 = INT8_MAX;
int64_t t25 = 43062435119343LL;
int32_t t27 = 8662271;
uint64_t x117 = 1582450LLU;
int8_t x122 = -1;
int16_t x124 = -45;
volatile uint32_t t31 = 42U;
static volatile int64_t t32 = -397163426667745254LL;
int64_t x135 = -58986702192509727LL;
volatile int64_t t33 = 39241101321252LL;
volatile uint64_t t37 = 6456LLU;
int8_t x153 = INT8_MIN;
int32_t x155 = -830902142;
int8_t x159 = INT8_MIN;
uint32_t x162 = 16363U;
static int32_t x169 = -470;
int32_t x170 = 113756;
uint16_t x172 = UINT16_MAX;
int32_t x180 = -1;
uint16_t x187 = 0U;
int16_t x192 = -1;
uint64_t x200 = 67LLU;
static int32_t x202 = -1;
static uint64_t x205 = UINT64_MAX;
int16_t x212 = INT16_MAX;
int16_t x225 = INT16_MAX;
static int64_t x226 = 2093836513177333439LL;
volatile int64_t x230 = 84310557898LL;
static int8_t x231 = INT8_MIN;
uint32_t x243 = 120U;
static int16_t x257 = INT16_MIN;
int64_t x259 = INT64_MAX;
volatile int64_t x265 = INT64_MAX;
int8_t x268 = INT8_MIN;
static int64_t t60 = -29939843LL;
int64_t t61 = 7LL;
static int16_t x284 = INT16_MIN;
volatile uint64_t t64 = 2788360944331854386LLU;
int32_t x299 = INT32_MAX;
int64_t x300 = -1LL;
volatile int16_t x301 = -1183;
int8_t x302 = -3;
volatile int64_t t67 = 51LL;
uint8_t x305 = 16U;
int32_t x309 = -4893;
static uint64_t t69 = 6342867542535LLU;
int8_t x320 = INT8_MAX;
volatile int8_t x323 = 56;
uint8_t x325 = UINT8_MAX;
static uint16_t x332 = 25567U;
int16_t x342 = INT16_MAX;
static volatile uint8_t x345 = 0U;
uint16_t x347 = 46U;
static volatile uint64_t t78 = 0LLU;
int64_t x353 = 74LL;
int16_t x356 = INT16_MIN;
uint64_t t79 = 9165979008069517765LLU;
uint32_t x368 = UINT32_MAX;
int16_t x370 = -1;
static volatile int64_t x374 = -1LL;
volatile int64_t t84 = 360LL;
volatile uint64_t t85 = 1971298LLU;
volatile int64_t x383 = INT64_MIN;
static int8_t x384 = -1;
int64_t t87 = 229139538592LL;
static volatile int64_t t89 = 523258374333872695LL;
int8_t x404 = -1;
int32_t x406 = -12126;
int32_t x412 = INT32_MIN;
volatile int8_t x418 = 0;
volatile int32_t t94 = 88594207;
int16_t x423 = INT16_MIN;
uint64_t x426 = UINT64_MAX;
int16_t x431 = -1;
volatile int64_t t97 = -696024462176896092LL;
volatile int32_t t98 = 126687;
int16_t x437 = INT16_MIN;
volatile int32_t t99 = -79310;


void f0(void) {
	int32_t x1 = -1;
	static int16_t x2 = 1872;
	volatile int16_t x3 = -6;
	static int64_t x4 = INT64_MIN;
	static int64_t t0 = INT64_MIN;

	t0 = ((x1/(x2+x3))^x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint8_t x6 = 3U;
	int64_t x7 = 10115LL;
	int64_t t1 = INT64_MIN;

	t1 = ((x5/(x6+x7))^x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	static int64_t t2 = 23LL;

	t2 = ((x9/(x10+x11))^x12);

	if (t2 != 71LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	static int16_t x15 = INT16_MIN;
	static volatile int32_t t3 = INT32_MIN;

	t3 = ((x13/(x14+x15))^x16);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	volatile int8_t x19 = 1;
	uint8_t x20 = 0U;
	volatile int32_t t4 = 58;

	t4 = ((x17/(x18+x19))^x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = -56;
	int64_t x23 = -664872849622LL;
	int8_t x24 = -7;
	volatile int64_t t5 = 93698236247529821LL;

	t5 = ((x21/(x22+x23))^x24);

	if (t5 != -7LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	static uint32_t x26 = 10U;
	int8_t x27 = -1;
	uint8_t x28 = 1U;
	uint32_t t6 = 25U;

	t6 = ((x25/(x26+x27))^x28);

	if (t6 != 7280U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t t7 = 3161031495704852797LL;

	t7 = ((x29/(x30+x31))^x32);

	if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 2458223;
	static int16_t x34 = INT16_MIN;
	static int16_t x35 = INT16_MAX;
	volatile int32_t t8 = -1;

	t8 = ((x33/(x34+x35))^x36);

	if (t8 != 144192223) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint8_t x39 = 3U;
	uint8_t x40 = 98U;

	t9 = ((x37/(x38+x39))^x40);

	if (t9 != -94) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -9115;
	volatile uint8_t x42 = 0U;
	int16_t x43 = -1067;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -45;

	t10 = ((x41/(x42+x43))^x44);

	if (t10 != -2147483640) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 26575U;
	volatile int8_t x46 = INT8_MIN;
	int64_t x47 = 0LL;
	static volatile int8_t x48 = INT8_MAX;
	int64_t t11 = -1259717779026LL;

	t11 = ((x45/(x46+x47))^x48);

	if (t11 != -178LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int64_t x51 = 294982LL;
	uint32_t x52 = 1U;
	int64_t t12 = -34555202886LL;

	t12 = ((x49/(x50+x51))^x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = -10928;
	volatile uint8_t x55 = 1U;
	int16_t x56 = -1;
	volatile int32_t t13 = -6472;

	t13 = ((x53/(x54+x55))^x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = UINT8_MAX;
	int32_t x60 = 144184547;

	t14 = ((x57/(x58+x59))^x60);

	if (t14 != 144184547) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -1;
	int32_t x62 = INT32_MIN;

	t15 = ((x61/(x62+x63))^x64);

	if (t15 != 14117279300LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -220;
	int8_t x67 = INT8_MAX;
	volatile uint32_t x68 = UINT32_MAX;
	volatile uint32_t t16 = 4545U;

	t16 = ((x65/(x66+x67))^x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int8_t x72 = INT8_MIN;

	t17 = ((x69/(x70+x71))^x72);

	if (t17 != 124) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MIN;
	volatile uint16_t x75 = 2U;
	volatile int64_t t18 = 221154789875547LL;

	t18 = ((x73/(x74+x75))^x76);

	if (t18 != 2147483520LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = INT16_MAX;
	int8_t x79 = -1;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 74;

	t19 = ((x77/(x78+x79))^x80);

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MAX;
	int64_t x82 = -875941208LL;
	int16_t x83 = INT16_MAX;
	uint64_t x84 = 21913092202994829LLU;
	uint64_t t20 = 12053910923LLU;

	t20 = ((x81/(x82+x83))^x84);

	if (t20 != 18424830990861690265LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	int16_t x88 = 28;
	int64_t t21 = -1367191852354329LL;

	t21 = ((x85/(x86+x87))^x88);

	if (t21 != -4866322032LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int16_t x91 = -1;
	static int8_t x92 = -1;
	volatile int64_t t22 = -13245635LL;

	t22 = ((x89/(x90+x91))^x92);

	if (t22 != 2807928748782LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x94 = 29U;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 6418;
	volatile int64_t t23 = -17590LL;

	t23 = ((x93/(x94+x95))^x96);

	if (t23 != 4294973736LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	int16_t x98 = -7;
	int64_t x99 = -174LL;
	int64_t t24 = -263597LL;

	t24 = ((x97/(x98+x99))^x100);

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	uint16_t x103 = 14642U;
	int64_t x104 = -30071940762033074LL;

	t25 = ((x101/(x102+x103))^x104);

	if (t25 != -30071940762033074LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	static volatile uint16_t x106 = 0U;
	static volatile uint16_t x107 = 289U;
	int64_t x108 = INT64_MIN;
	static int64_t t26 = -31933940159848LL;

	t26 = ((x105/(x106+x107))^x108);

	if (t26 != 9223372036854775695LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 3;
	volatile int16_t x110 = -1;
	volatile uint8_t x111 = 0U;
	int16_t x112 = -113;

	t27 = ((x109/(x110+x111))^x112);

	if (t27 != 114) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int32_t x114 = 0;
	int8_t x115 = 27;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t28 = INT32_MAX;

	t28 = ((x113/(x114+x115))^x116);

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	int32_t x120 = -37;
	volatile uint64_t t29 = 13135515473505LLU;

	t29 = ((x117/(x118+x119))^x120);

	if (t29 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = 683288736041810887LL;
	int64_t x123 = -74419066LL;
	int64_t t30 = -882141321730051917LL;

	t30 = ((x121/(x122+x123))^x124);

	if (t30 != 9181635389LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	int8_t x126 = 2;
	int8_t x127 = INT8_MAX;
	uint32_t x128 = 0U;

	t31 = ((x125/(x126+x127))^x128);

	if (t31 != 4294967042U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 1;
	static int64_t x130 = INT64_MIN;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = -413;

	t32 = ((x129/(x130+x131))^x132);

	if (t32 != -413LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 45937138674151258LL;
	int16_t x134 = -1;
	int8_t x136 = -3;

	t33 = ((x133/(x134+x135))^x136);

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	static int32_t x138 = 168435;
	int16_t x139 = INT16_MAX;
	static uint16_t x140 = 752U;
	int32_t t34 = -130071322;

	t34 = ((x137/(x138+x139))^x140);

	if (t34 != 752) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 880142197U;
	uint64_t x142 = 1LLU;
	int16_t x143 = -305;
	static uint8_t x144 = 2U;
	volatile uint64_t t35 = 617906722116402LLU;

	t35 = ((x141/(x142+x143))^x144);

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -1;
	volatile int8_t x146 = INT8_MIN;
	volatile uint32_t x147 = 40694U;
	static int64_t x148 = 119898106LL;
	volatile int64_t t36 = -28901071484485524LL;

	t36 = ((x145/(x146+x147))^x148);

	if (t36 != 119857774LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 3U;
	uint64_t x150 = 367856LLU;
	volatile uint8_t x151 = 6U;
	int8_t x152 = INT8_MIN;

	t37 = ((x149/(x150+x151))^x152);

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x154 = -8581LL;
	static volatile int16_t x156 = 0;
	int64_t t38 = -3195155LL;

	t38 = ((x153/(x154+x155))^x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1;
	uint64_t x158 = 125LLU;
	int64_t x160 = -1LL;
	uint64_t t39 = 100964804807LLU;

	t39 = ((x157/(x158+x159))^x160);

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -13140547042402782LL;
	int32_t x163 = 1;
	int32_t x164 = INT32_MIN;
	int64_t t40 = -2887107LL;

	t40 = ((x161/(x162+x163))^x164);

	if (t40 != 801154699478LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint8_t x166 = 27U;
	uint32_t x167 = UINT32_MAX;
	int32_t x168 = INT32_MIN;
	volatile uint64_t t41 = 67123845897228579LLU;

	t41 = ((x165/(x166+x167))^x168);

	if (t41 != 17737253917854370264LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x171 = UINT32_MAX;
	volatile uint32_t t42 = 0U;

	t42 = ((x169/(x170+x171))^x172);

	if (t42 != 27779U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 2477U;
	static volatile int16_t x174 = INT16_MIN;
	static int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MIN;
	volatile uint32_t t43 = 6285066U;

	t43 = ((x173/(x174+x175))^x176);

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int64_t x178 = -1LL;
	int32_t x179 = 3213;
	int64_t t44 = 125085628027LL;

	t44 = ((x177/(x178+x179))^x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MAX;
	uint8_t x182 = 56U;
	volatile uint64_t x183 = 689131296LLU;
	static uint64_t x184 = 894LLU;
	volatile uint64_t t45 = 124627049810LLU;

	t45 = ((x181/(x182+x183))^x184);

	if (t45 != 894LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = INT32_MIN;
	uint64_t x188 = 5129808614700187LLU;
	uint64_t t46 = 274349246157669848LLU;

	t46 = ((x185/(x186+x187))^x188);

	if (t46 != 5129808614700186LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -1744;
	uint64_t x190 = 2200701563713LLU;
	uint8_t x191 = UINT8_MAX;
	volatile uint64_t t47 = 240570LLU;

	t47 = ((x189/(x190+x191))^x192);

	if (t47 != 18446744073701169405LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MAX;
	int64_t x194 = 178290559880712LL;
	uint8_t x195 = 97U;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t48 = -1LL;

	t48 = ((x193/(x194+x195))^x196);

	if (t48 != 9223372036854724075LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 57;
	int8_t x198 = -1;
	static int32_t x199 = -29488;
	uint64_t t49 = 2147762LLU;

	t49 = ((x197/(x198+x199))^x200);

	if (t49 != 67LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = 15LL;
	int16_t x203 = INT16_MIN;
	uint8_t x204 = UINT8_MAX;
	volatile int64_t t50 = 3186029759LL;

	t50 = ((x201/(x202+x203))^x204);

	if (t50 != 255LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = 28;
	static int32_t x207 = -1;
	uint32_t x208 = UINT32_MAX;
	volatile uint64_t t51 = 165672LLU;

	t51 = ((x205/(x206+x207))^x208);

	if (t51 != 683212740766485466LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static volatile int8_t x210 = INT8_MIN;
	int32_t x211 = 18;
	static volatile int64_t t52 = 1LL;

	t52 = ((x209/(x210+x211))^x212);

	if (t52 != 83848836698691099LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 40620LLU;
	int16_t x218 = -1;
	volatile uint16_t x219 = UINT16_MAX;
	static int16_t x220 = INT16_MAX;
	volatile uint64_t t53 = 86789824LLU;

	t53 = ((x217/(x218+x219))^x220);

	if (t53 != 32767LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	static uint32_t x222 = 146305U;
	volatile uint8_t x223 = 2U;
	int32_t x224 = INT32_MIN;
	volatile uint32_t t54 = 32421127U;

	t54 = ((x221/(x222+x223))^x224);

	if (t54 != 2147483648U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x227 = 158810366717519LL;
	static uint64_t x228 = 61LLU;
	uint64_t t55 = 108020475669309881LLU;

	t55 = ((x225/(x226+x227))^x228);

	if (t55 != 61LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	static int64_t t56 = -13269929184440073LL;

	t56 = ((x229/(x230+x231))^x232);

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	volatile int32_t x244 = -1;
	uint32_t t57 = UINT32_MAX;

	t57 = ((x241/(x242+x243))^x244);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x258 = INT16_MIN;
	int8_t x260 = INT8_MAX;
	int64_t t58 = 5427762704410LL;

	t58 = ((x257/(x258+x259))^x260);

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x261 = 2761;
	uint16_t x262 = 12U;
	int32_t x263 = 1;
	volatile uint32_t x264 = 0U;
	volatile uint32_t t59 = 0U;

	t59 = ((x261/(x262+x263))^x264);

	if (t59 != 212U) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x266 = INT64_MAX;
	int64_t x267 = INT64_MIN;

	t60 = ((x265/(x266+x267))^x268);

	if (t60 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int64_t x270 = INT64_MIN;
	int8_t x271 = 0;
	int32_t x272 = INT32_MAX;

	t61 = ((x269/(x270+x271))^x272);

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x273 = 121812LLU;
	volatile int8_t x274 = INT8_MIN;
	volatile int8_t x275 = 43;
	int8_t x276 = -1;
	uint64_t t62 = UINT64_MAX;

	t62 = ((x273/(x274+x275))^x276);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x277 = 3449548520076201LLU;
	int16_t x278 = INT16_MIN;
	int16_t x279 = -86;
	int32_t x280 = INT32_MAX;
	volatile uint64_t t63 = 1735374728584670LLU;

	t63 = ((x277/(x278+x279))^x280);

	if (t63 != 2147483647LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x281 = 59409LLU;
	int16_t x282 = -1;
	volatile int16_t x283 = 88;

	t64 = ((x281/(x282+x283))^x284);

	if (t64 != 18446744073709519530LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = -1LL;
	int8_t x290 = -20;
	volatile uint64_t x291 = 1470659815021LLU;
	uint8_t x292 = 88U;
	uint64_t t65 = 55726LLU;

	t65 = ((x289/(x290+x291))^x292);

	if (t65 != 12543135LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 639U;
	static int64_t x298 = -1LL;
	int64_t t66 = -16645192211855119LL;

	t66 = ((x297/(x298+x299))^x300);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x303 = 43;
	volatile int64_t x304 = 970184162559553LL;

	t67 = ((x301/(x302+x303))^x304);

	if (t67 != -970184162559582LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x306 = -1LL;
	volatile uint16_t x307 = 26U;
	int8_t x308 = INT8_MAX;
	volatile int64_t t68 = 10LL;

	t68 = ((x305/(x306+x307))^x308);

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x310 = 3615461738870LLU;
	int8_t x311 = INT8_MIN;
	int32_t x312 = -60652898;

	t69 = ((x309/(x310+x311))^x312);

	if (t69 != 18446744073645545720LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = -1;
	uint16_t x314 = UINT16_MAX;
	uint32_t x315 = 371120242U;
	int16_t x316 = 36;
	static volatile uint32_t t70 = 2093792U;

	t70 = ((x313/(x314+x315))^x316);

	if (t70 != 47U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = -1;
	int32_t x318 = 29;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t t71 = -388;

	t71 = ((x317/(x318+x319))^x320);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x321 = 7;
	uint8_t x322 = 0U;
	static int64_t x324 = INT64_MAX;
	static int64_t t72 = INT64_MAX;

	t72 = ((x321/(x322+x323))^x324);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x326 = 114015;
	uint8_t x327 = UINT8_MAX;
	int32_t x328 = -1057042853;
	volatile int32_t t73 = -4;

	t73 = ((x325/(x326+x327))^x328);

	if (t73 != -1057042853) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x329 = 1459346LLU;
	volatile int32_t x330 = -2652424;
	int8_t x331 = -1;
	uint64_t t74 = 0LLU;

	t74 = ((x329/(x330+x331))^x332);

	if (t74 != 25567LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	uint16_t x335 = 1169U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t75 = 0;

	t75 = ((x333/(x334+x335))^x336);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x341 = -1;
	volatile int32_t x343 = INT32_MIN;
	int32_t x344 = 3303;
	volatile int32_t t76 = -659506900;

	t76 = ((x341/(x342+x343))^x344);

	if (t76 != 3303) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x346 = -6;
	static int32_t x348 = INT32_MAX;
	volatile int32_t t77 = INT32_MAX;

	t77 = ((x345/(x346+x347))^x348);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x349 = 22092U;
	int32_t x350 = -1293;
	volatile uint64_t x351 = UINT64_MAX;
	uint32_t x352 = 27773983U;

	t78 = ((x349/(x350+x351))^x352);

	if (t78 != 27773983LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x354 = UINT64_MAX;
	volatile uint32_t x355 = UINT32_MAX;

	t79 = ((x353/(x354+x355))^x356);

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x357 = INT64_MAX;
	volatile int32_t x358 = 374989;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = 21LLU;
	static volatile uint64_t t80 = 958645431LLU;

	t80 = ((x357/(x358+x359))^x360);

	if (t80 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x361 = 0U;
	int64_t x362 = INT64_MIN;
	int16_t x363 = 472;
	static volatile int32_t x364 = -1;
	volatile int64_t t81 = -15467553984094585LL;

	t81 = ((x361/(x362+x363))^x364);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = INT16_MIN;
	static int16_t x366 = INT16_MAX;
	uint64_t x367 = 1546068LLU;
	uint64_t t82 = 169359437LLU;

	t82 = ((x365/(x366+x367))^x368);

	if (t82 != 11685147649263LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x369 = -870850915LL;
	static volatile int16_t x371 = INT16_MAX;
	volatile uint32_t x372 = UINT32_MAX;
	int64_t t83 = -9973617575191678LL;

	t83 = ((x369/(x370+x371))^x372);

	if (t83 != -4294940720LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x373 = 53;
	int64_t x375 = INT64_MAX;
	uint8_t x376 = 6U;

	t84 = ((x373/(x374+x375))^x376);

	if (t84 != 6LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MIN;
	uint64_t x379 = 2084610966922757LLU;
	uint32_t x380 = 0U;

	t85 = ((x377/(x378+x379))^x380);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x381 = INT8_MIN;
	uint64_t x382 = UINT64_MAX;
	static uint64_t t86 = 121843LLU;

	t86 = ((x381/(x382+x383))^x384);

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = 4833;
	static int64_t x386 = 4LL;
	int16_t x387 = 25;
	int32_t x388 = -3558037;

	t87 = ((x385/(x386+x387))^x388);

	if (t87 != -3557939LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x394 = -212;
	int32_t x395 = -1;
	int16_t x396 = INT16_MIN;
	volatile int32_t t88 = 15160;

	t88 = ((x393/(x394+x395))^x396);

	if (t88 != 32461) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MIN;
	static int16_t x399 = INT16_MAX;
	int16_t x400 = 1023;

	t89 = ((x397/(x398+x399))^x400);

	if (t89 != -282587457853142LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x401 = 65U;
	volatile int16_t x402 = INT16_MIN;
	uint16_t x403 = UINT16_MAX;
	int32_t t90 = 1;

	t90 = ((x401/(x402+x403))^x404);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MAX;
	int64_t x407 = -1LL;
	uint16_t x408 = UINT16_MAX;
	int64_t t91 = -10943LL;

	t91 = ((x405/(x406+x407))^x408);

	if (t91 != -760565023181121LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -496;
	volatile int32_t x410 = -1;
	int64_t x411 = 0LL;
	int64_t t92 = 558812100154381LL;

	t92 = ((x409/(x410+x411))^x412);

	if (t92 != -2147483152LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x413 = INT32_MIN;
	uint8_t x414 = 26U;
	uint32_t x415 = 70177U;
	int8_t x416 = INT8_MAX;
	volatile uint32_t t93 = 380U;

	t93 = ((x413/(x414+x415))^x416);

	if (t93 != 30466U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = -1;
	static int16_t x419 = -84;
	volatile int8_t x420 = INT8_MAX;

	t94 = ((x417/(x418+x419))^x420);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = 4709;
	uint32_t x422 = 24U;
	uint8_t x424 = 14U;
	volatile uint32_t t95 = 165672193U;

	t95 = ((x421/(x422+x423))^x424);

	if (t95 != 14U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = 20484254686LL;
	int64_t x427 = -1LL;
	static int8_t x428 = -1;
	static uint64_t t96 = UINT64_MAX;

	t96 = ((x425/(x426+x427))^x428);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = INT32_MAX;
	int64_t x430 = 28982LL;
	int16_t x432 = INT16_MAX;

	t97 = ((x429/(x430+x431))^x432);

	if (t97 != 89740LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = INT32_MAX;
	static int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;

	t98 = ((x433/(x434+x435))^x436);

	if (t98 != 65666) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x438 = -10;
	uint16_t x439 = UINT16_MAX;
	static uint16_t x440 = 63U;

	t99 = ((x437/(x438+x439))^x440);

	if (t99 != 63) { NG(); } else { ; }
	
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

