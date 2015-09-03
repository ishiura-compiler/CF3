#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -1;
static int8_t x4 = 1;
int32_t t0 = 3;
static uint8_t x18 = 0U;
int32_t x25 = 3570;
uint32_t x27 = UINT32_MAX;
int16_t x28 = -1;
static int32_t x37 = INT32_MAX;
int16_t x40 = 59;
int8_t x44 = INT8_MIN;
int16_t x47 = 3591;
static int64_t x50 = INT64_MIN;
int32_t t12 = 1557;
int64_t x56 = INT64_MIN;
static volatile int32_t t13 = 7;
int64_t x60 = 561LL;
int32_t t14 = 5;
static int8_t x61 = -1;
static int8_t x66 = INT8_MAX;
volatile int8_t x71 = -1;
volatile int32_t t18 = 1015377597;
int64_t x80 = 31211728168140LL;
uint32_t x82 = 44341U;
int64_t x85 = INT64_MAX;
uint8_t x88 = 5U;
static volatile int16_t x92 = INT16_MIN;
static int32_t t22 = 689668318;
volatile int64_t x95 = INT64_MIN;
uint8_t x103 = UINT8_MAX;
int16_t x108 = INT16_MIN;
int64_t x109 = -379469933464LL;
int32_t x110 = -1;
uint64_t x112 = 16683578745LLU;
uint16_t x114 = UINT16_MAX;
int8_t x115 = 22;
int32_t t29 = 65890;
int16_t x121 = INT16_MAX;
int32_t x134 = INT32_MAX;
int32_t x138 = 41339;
static uint8_t x139 = UINT8_MAX;
static int8_t x160 = 0;
volatile int32_t t39 = -154;
int8_t x163 = -1;
uint64_t x164 = 16124502629LLU;
int8_t x171 = INT8_MAX;
volatile int32_t t42 = -598643;
int16_t x175 = -1;
int32_t t44 = 1451913;
static uint32_t x189 = 4U;
static int8_t x190 = 32;
int16_t x193 = 250;
volatile uint64_t x199 = UINT64_MAX;
int64_t x200 = INT64_MIN;
int32_t t49 = -911100;
int16_t x212 = INT16_MIN;
static int64_t x216 = INT64_MIN;
int32_t t53 = -105;
uint64_t x219 = 5254641LLU;
int32_t t54 = 5963752;
int64_t x225 = INT64_MIN;
int32_t x227 = INT32_MAX;
static volatile uint8_t x231 = 6U;
volatile uint32_t x234 = 18119782U;
static volatile int8_t x237 = -1;
static int32_t x238 = -138916;
int64_t x244 = INT64_MIN;
int8_t x245 = 6;
int64_t x247 = -1LL;
volatile int16_t x249 = INT16_MIN;
static int64_t x251 = INT64_MIN;
volatile int32_t t63 = 323791;
int32_t x259 = -1;
uint32_t x260 = UINT32_MAX;
uint64_t x266 = 722LLU;
int8_t x282 = INT8_MIN;
uint32_t x287 = 438023335U;
static volatile int32_t t71 = 626010783;
uint16_t x290 = 2005U;
int16_t x291 = INT16_MAX;
uint8_t x297 = UINT8_MAX;
volatile int32_t t74 = 13866086;
static int16_t x301 = 8;
int32_t x318 = INT32_MIN;
int16_t x320 = 1;
int8_t x321 = INT8_MIN;
volatile int32_t t80 = 0;
int32_t x325 = 30809;
int16_t x326 = 1314;
static int32_t x331 = 8571367;
int16_t x344 = INT16_MIN;
uint8_t x356 = UINT8_MAX;
static uint8_t x357 = 9U;
static volatile uint8_t x362 = UINT8_MAX;
uint16_t x375 = 82U;
volatile int32_t t95 = 1774;
int32_t x395 = INT32_MIN;
uint16_t x397 = 556U;


void f0(void) {
	volatile uint16_t x2 = 5205U;
	int32_t x3 = -629;

	t0 = (((x1^x2)==x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 269U;
	static int16_t x6 = 0;
	uint64_t x7 = 41090589309492280LLU;
	volatile int16_t x8 = INT16_MAX;
	int32_t t1 = 1;

	t1 = (((x5^x6)==x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	static uint8_t x10 = 0U;
	uint32_t x11 = 72U;
	int8_t x12 = -2;
	static volatile int32_t t2 = -3674503;

	t2 = (((x9^x10)==x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	volatile uint64_t x14 = 133275316093900605LLU;
	int32_t x15 = INT32_MAX;
	int32_t x16 = 20662875;
	volatile int32_t t3 = -388;

	t3 = (((x13^x14)==x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int64_t x19 = 17357313428LL;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 129;

	t4 = (((x17^x18)==x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int16_t x22 = -52;
	static int64_t x23 = INT64_MAX;
	uint64_t x24 = 15402457687306LLU;
	static volatile int32_t t5 = -358;

	t5 = (((x21^x22)==x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -15;
	static int32_t t6 = -30;

	t6 = (((x25^x26)==x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = -1LL;
	int8_t x31 = 0;
	static volatile uint64_t x32 = UINT64_MAX;
	static int32_t t7 = 174181;

	t7 = (((x29^x30)==x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MAX;
	static int8_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 1070579493;

	t8 = (((x33^x34)==x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;
	volatile int64_t x39 = INT64_MIN;
	volatile int32_t t9 = -8530522;

	t9 = (((x37^x38)==x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1593;
	int64_t x42 = -142634825761672215LL;
	int64_t x43 = -1LL;
	static volatile int32_t t10 = 548161017;

	t10 = (((x41^x42)==x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint32_t x46 = 729U;
	static volatile uint8_t x48 = 13U;
	volatile int32_t t11 = 1624;

	t11 = (((x45^x46)==x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static volatile uint16_t x51 = 0U;
	volatile int64_t x52 = INT64_MAX;

	t12 = (((x49^x50)==x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	uint8_t x54 = 32U;
	volatile int64_t x55 = -1LL;

	t13 = (((x53^x54)==x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = 1646;
	int64_t x58 = INT64_MIN;
	volatile uint32_t x59 = 807599990U;

	t14 = (((x57^x58)==x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = -312566412;
	uint32_t x63 = 3982U;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = -1397;

	t15 = (((x61^x62)==x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x65 = 213U;
	int16_t x67 = INT16_MAX;
	uint8_t x68 = UINT8_MAX;
	static volatile int32_t t16 = 70938;

	t16 = (((x65^x66)==x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	uint64_t x70 = 52LLU;
	uint64_t x72 = UINT64_MAX;
	static int32_t t17 = -3;

	t17 = (((x69^x70)==x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = 1U;
	volatile int64_t x74 = -1335674962575139694LL;
	int32_t x75 = -863;
	volatile int16_t x76 = 1;

	t18 = (((x73^x74)==x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 0U;
	int16_t x78 = -1;
	int64_t x79 = INT64_MAX;
	static volatile int32_t t19 = -12813102;

	t19 = (((x77^x78)==x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	volatile int32_t x83 = -1;
	static volatile int64_t x84 = INT64_MIN;
	volatile int32_t t20 = 11;

	t20 = (((x81^x82)==x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -8097341347807831LL;
	int8_t x87 = INT8_MIN;
	int32_t t21 = 67908321;

	t21 = (((x85^x86)==x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 258291216LLU;
	int64_t x90 = -306369LL;
	uint8_t x91 = 4U;

	t22 = (((x89^x90)==x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -6;
	int32_t x94 = INT32_MIN;
	volatile int16_t x96 = -1;
	int32_t t23 = 111280;

	t23 = (((x93^x94)==x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int16_t x98 = -1023;
	int64_t x99 = INT64_MIN;
	static int16_t x100 = 1;
	static int32_t t24 = 23;

	t24 = (((x97^x98)==x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -5;
	volatile uint64_t x102 = 5632798053LLU;
	int64_t x104 = 19801903604715393LL;
	int32_t t25 = 340695;

	t25 = (((x101^x102)==x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = 3LL;
	volatile uint16_t x106 = UINT16_MAX;
	volatile int8_t x107 = INT8_MIN;
	volatile int32_t t26 = -2;

	t26 = (((x105^x106)==x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x111 = -1;
	int32_t t27 = 375247;

	t27 = (((x109^x110)==x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 3U;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 0;

	t28 = (((x113^x114)==x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 1;
	uint64_t x118 = 476664258137LLU;
	uint32_t x119 = 53348U;
	int64_t x120 = -1LL;

	t29 = (((x117^x118)==x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = 280122254LL;
	static int64_t x123 = INT64_MIN;
	static int8_t x124 = 20;
	int32_t t30 = -60922911;

	t30 = (((x121^x122)==x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -1;
	int8_t x126 = INT8_MAX;
	int32_t x127 = INT32_MAX;
	volatile int16_t x128 = -1;
	int32_t t31 = 24820207;

	t31 = (((x125^x126)==x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = -12703722925056LL;
	int16_t x130 = -1;
	int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = 5810LLU;
	int32_t t32 = 215848788;

	t32 = (((x129^x130)==x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 1926103198140751LLU;
	int8_t x135 = INT8_MAX;
	volatile int64_t x136 = -2785817828LL;
	volatile int32_t t33 = 4847;

	t33 = (((x133^x134)==x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t34 = 34681482;

	t34 = (((x137^x138)==x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = -1;
	int8_t x142 = INT8_MAX;
	static volatile int32_t x143 = 358490;
	int64_t x144 = -2209549698531254799LL;
	int32_t t35 = 1;

	t35 = (((x141^x142)==x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = -1;
	int32_t x147 = -1;
	int64_t x148 = INT64_MIN;
	int32_t t36 = 23292204;

	t36 = (((x145^x146)==x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile uint64_t x150 = 775076306518586LLU;
	volatile int32_t x151 = INT32_MIN;
	uint64_t x152 = 3375LLU;
	static int32_t t37 = -25880630;

	t37 = (((x149^x150)==x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = INT32_MIN;
	static int64_t x154 = 1551480942239LL;
	int8_t x155 = INT8_MIN;
	uint16_t x156 = 30U;
	int32_t t38 = -96;

	t38 = (((x153^x154)==x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	static uint64_t x158 = 115290232LLU;
	int16_t x159 = -1;

	t39 = (((x157^x158)==x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 22U;
	static uint8_t x162 = UINT8_MAX;
	volatile int32_t t40 = -113209;

	t40 = (((x161^x162)==x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 92U;
	int64_t x166 = -3495353363494LL;
	int64_t x167 = INT64_MIN;
	int8_t x168 = -3;
	int32_t t41 = 26470;

	t41 = (((x165^x166)==x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 46;
	volatile uint16_t x170 = 3U;
	uint64_t x172 = 15422873176740LLU;

	t42 = (((x169^x170)==x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 1;
	static uint64_t x174 = UINT64_MAX;
	int64_t x176 = INT64_MIN;
	volatile int32_t t43 = -54125710;

	t43 = (((x173^x174)==x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static volatile int8_t x178 = -1;
	int16_t x179 = -1;
	int32_t x180 = INT32_MAX;

	t44 = (((x177^x178)==x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	uint16_t x182 = 5271U;
	int8_t x183 = -1;
	volatile uint64_t x184 = 0LLU;
	int32_t t45 = 2249099;

	t45 = (((x181^x182)==x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static volatile int64_t x186 = INT64_MAX;
	int8_t x187 = -1;
	volatile int64_t x188 = -1LL;
	volatile int32_t t46 = -4750878;

	t46 = (((x185^x186)==x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x191 = -13427364;
	static int16_t x192 = -1;
	static volatile int32_t t47 = 12731;

	t47 = (((x189^x190)==x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MIN;
	uint8_t x195 = UINT8_MAX;
	static int16_t x196 = 2610;
	int32_t t48 = 1;

	t48 = (((x193^x194)==x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 32U;
	int16_t x198 = 3;

	t49 = (((x197^x198)==x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -19970571530LL;
	uint16_t x202 = 1U;
	uint16_t x203 = 9U;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -412545875;

	t50 = (((x201^x202)==x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = 0;
	int8_t x206 = INT8_MIN;
	volatile int16_t x207 = 1;
	int16_t x208 = -1;
	static int32_t t51 = -131239879;

	t51 = (((x205^x206)==x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x209 = UINT32_MAX;
	uint16_t x210 = 2266U;
	volatile uint32_t x211 = 48U;
	volatile int32_t t52 = 49113762;

	t52 = (((x209^x210)==x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 37U;
	uint32_t x214 = UINT32_MAX;
	uint16_t x215 = UINT16_MAX;

	t53 = (((x213^x214)==x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	uint16_t x218 = 5U;
	int32_t x220 = INT32_MIN;

	t54 = (((x217^x218)==x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 1;
	int16_t x222 = INT16_MAX;
	volatile int64_t x223 = INT64_MIN;
	static int8_t x224 = -1;
	volatile int32_t t55 = 3787;

	t55 = (((x221^x222)==x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -1;
	static volatile int8_t x228 = INT8_MAX;
	static int32_t t56 = -36869;

	t56 = (((x225^x226)==x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	int32_t x230 = -309;
	uint64_t x232 = UINT64_MAX;
	static volatile int32_t t57 = 366656;

	t57 = (((x229^x230)==x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	int16_t x235 = INT16_MAX;
	static uint8_t x236 = UINT8_MAX;
	static int32_t t58 = 3;

	t58 = (((x233^x234)==x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x239 = 229;
	static uint8_t x240 = 95U;
	static int32_t t59 = -100713;

	t59 = (((x237^x238)==x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x242 = 1025751;
	uint64_t x243 = UINT64_MAX;
	int32_t t60 = 854;

	t60 = (((x241^x242)==x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = -1;
	volatile int32_t x248 = 0;
	int32_t t61 = -535901972;

	t61 = (((x245^x246)==x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x250 = 1;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -1;

	t62 = (((x249^x250)==x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -323;
	int32_t x254 = INT32_MIN;
	static int16_t x255 = INT16_MAX;
	static int16_t x256 = 4;

	t63 = (((x253^x254)==x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 1;
	volatile int32_t x258 = INT32_MIN;
	volatile int32_t t64 = 2846185;

	t64 = (((x257^x258)==x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 822U;
	volatile uint64_t x262 = 159780114310425LLU;
	int64_t x263 = -1LL;
	uint16_t x264 = 0U;
	volatile int32_t t65 = 4373;

	t65 = (((x261^x262)==x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 48269129U;
	int16_t x267 = -1;
	int16_t x268 = INT16_MAX;
	int32_t t66 = 53163762;

	t66 = (((x265^x266)==x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	uint32_t x270 = 37689550U;
	volatile int32_t x271 = -1;
	static int32_t x272 = INT32_MIN;
	int32_t t67 = -347;

	t67 = (((x269^x270)==x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -17526490LL;
	int16_t x274 = -1;
	uint64_t x275 = 96LLU;
	volatile int64_t x276 = -1LL;
	static volatile int32_t t68 = -367457;

	t68 = (((x273^x274)==x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -8588176054076LL;
	volatile int64_t x278 = INT64_MIN;
	static volatile uint32_t x279 = 85864U;
	int8_t x280 = INT8_MIN;
	static int32_t t69 = -162;

	t69 = (((x277^x278)==x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 2091295U;
	static uint8_t x283 = 8U;
	int32_t x284 = INT32_MIN;
	static int32_t t70 = -8190079;

	t70 = (((x281^x282)==x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -3;
	static uint64_t x286 = UINT64_MAX;
	volatile uint16_t x288 = 16834U;

	t71 = (((x285^x286)==x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 19U;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 22332069;

	t72 = (((x289^x290)==x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	static int32_t x294 = INT32_MIN;
	int32_t x295 = INT32_MAX;
	static volatile int8_t x296 = -1;
	static volatile int32_t t73 = 1867;

	t73 = (((x293^x294)==x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -2;
	int16_t x299 = INT16_MAX;
	volatile int8_t x300 = INT8_MIN;

	t74 = (((x297^x298)==x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x302 = INT16_MIN;
	int64_t x303 = 743LL;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 22;

	t75 = (((x301^x302)==x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -1;
	int32_t x306 = INT32_MIN;
	static int8_t x307 = 10;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = -82495014;

	t76 = (((x305^x306)==x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	volatile uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MIN;
	volatile int32_t x312 = INT32_MAX;
	volatile int32_t t77 = 7;

	t77 = (((x309^x310)==x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int16_t x314 = INT16_MAX;
	static int32_t x315 = -572715838;
	volatile uint8_t x316 = UINT8_MAX;
	volatile int32_t t78 = -1282833;

	t78 = (((x313^x314)==x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = -6LL;
	int16_t x319 = -1;
	static int32_t t79 = 18777;

	t79 = (((x317^x318)==x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x322 = UINT16_MAX;
	volatile int32_t x323 = 3;
	int16_t x324 = 11503;

	t80 = (((x321^x322)==x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x327 = 3U;
	uint16_t x328 = 2140U;
	volatile int32_t t81 = 20028;

	t81 = (((x325^x326)==x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	static int32_t x330 = -1;
	int16_t x332 = INT16_MIN;
	int32_t t82 = -801;

	t82 = (((x329^x330)==x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	int32_t x334 = INT32_MIN;
	uint64_t x335 = UINT64_MAX;
	static uint64_t x336 = 11875LLU;
	volatile int32_t t83 = 87192930;

	t83 = (((x333^x334)==x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	int8_t x338 = INT8_MIN;
	int64_t x339 = INT64_MIN;
	static uint32_t x340 = UINT32_MAX;
	int32_t t84 = 1450639;

	t84 = (((x337^x338)==x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int16_t x342 = -9488;
	uint8_t x343 = 9U;
	int32_t t85 = -1;

	t85 = (((x341^x342)==x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = 2U;
	int16_t x346 = INT16_MIN;
	int8_t x347 = INT8_MIN;
	volatile int8_t x348 = INT8_MAX;
	int32_t t86 = 1770;

	t86 = (((x345^x346)==x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 14U;
	int64_t x350 = -9044459241LL;
	uint16_t x351 = 1U;
	static uint64_t x352 = 23980LLU;
	int32_t t87 = 5;

	t87 = (((x349^x350)==x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = -1;
	int8_t x354 = INT8_MIN;
	int16_t x355 = -1;
	volatile int32_t t88 = 24294085;

	t88 = (((x353^x354)==x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = -1;
	int64_t x359 = -70704LL;
	volatile int64_t x360 = -49LL;
	volatile int32_t t89 = 1;

	t89 = (((x357^x358)==x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x363 = -187;
	volatile int16_t x364 = 2544;
	volatile int32_t t90 = -224048271;

	t90 = (((x361^x362)==x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = 57;
	uint8_t x367 = 1U;
	uint64_t x368 = 103858040962LLU;
	int32_t t91 = 24;

	t91 = (((x365^x366)==x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -6488;
	int64_t x370 = INT64_MIN;
	volatile uint16_t x371 = 58U;
	int16_t x372 = INT16_MIN;
	static int32_t t92 = -42;

	t92 = (((x369^x370)==x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	volatile int64_t x374 = -51124LL;
	int64_t x376 = 1007164694LL;
	int32_t t93 = -13793;

	t93 = (((x373^x374)==x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MAX;
	static volatile uint32_t x379 = 145762U;
	static int32_t x380 = -1;
	volatile int32_t t94 = 360441815;

	t94 = (((x377^x378)==x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = 38U;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 3755648U;
	volatile int8_t x384 = INT8_MIN;

	t95 = (((x381^x382)==x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	volatile int8_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	static volatile uint16_t x388 = UINT16_MAX;
	static int32_t t96 = 353624;

	t96 = (((x385^x386)==x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	int16_t x390 = -1;
	static uint8_t x391 = 20U;
	int8_t x392 = INT8_MIN;
	volatile int32_t t97 = 1672;

	t97 = (((x389^x390)==x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = 8775U;
	int64_t x396 = INT64_MIN;
	volatile int32_t t98 = -117;

	t98 = (((x393^x394)==x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x398 = 7650;
	static int32_t x399 = INT32_MIN;
	int8_t x400 = 55;
	static volatile int32_t t99 = -23455;

	t99 = (((x397^x398)==x399)<x400);

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

