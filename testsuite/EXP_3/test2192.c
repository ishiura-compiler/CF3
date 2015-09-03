#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
volatile int32_t x3 = INT32_MIN;
static volatile int16_t x6 = INT16_MIN;
uint16_t x9 = 215U;
uint8_t x11 = 19U;
volatile int8_t x15 = INT8_MIN;
int64_t x25 = INT64_MAX;
int32_t x26 = 328343;
volatile int32_t t6 = 419902;
int8_t x31 = -8;
int64_t x35 = -1LL;
int16_t x38 = 1;
int32_t x44 = -1;
volatile int32_t t10 = 877;
static int8_t x49 = INT8_MIN;
int16_t x52 = -11031;
static volatile int32_t t12 = 239806;
static int8_t x55 = 0;
volatile int32_t t14 = -1852;
uint8_t x63 = UINT8_MAX;
int8_t x68 = INT8_MAX;
static volatile int16_t x71 = -1;
int32_t x78 = -13505;
uint8_t x86 = 0U;
int64_t x87 = INT64_MIN;
uint8_t x89 = UINT8_MAX;
int8_t x98 = INT8_MAX;
int16_t x99 = -48;
int64_t x102 = -1LL;
int32_t t25 = -114818490;
volatile int32_t x105 = 1;
int64_t x111 = 1460403568179711LL;
int64_t x120 = INT64_MIN;
volatile int32_t t29 = 31061;
int32_t x123 = 878184065;
int32_t x129 = 1;
int64_t x131 = -297659645173281059LL;
int16_t x141 = 40;
int64_t x144 = -1LL;
int16_t x151 = INT16_MIN;
int32_t t37 = 712;
uint8_t x158 = 4U;
int16_t x162 = -308;
uint32_t x170 = 23580U;
int64_t x173 = INT64_MAX;
volatile int8_t x175 = -1;
static uint64_t x176 = 59424371198851LLU;
int64_t x180 = INT64_MAX;
int8_t x186 = INT8_MIN;
static volatile uint16_t x187 = 10U;
int64_t x192 = INT64_MIN;
int64_t x193 = INT64_MAX;
uint64_t x199 = 238LLU;
volatile int32_t t49 = -155141869;
int16_t x201 = -1;
volatile int32_t x202 = INT32_MAX;
int32_t x209 = -1;
static int64_t x219 = 201174090007LL;
int16_t x227 = 29;
int16_t x228 = -9274;
static volatile uint8_t x229 = 2U;
int8_t x232 = INT8_MIN;
volatile int8_t x233 = INT8_MAX;
int32_t x242 = INT32_MIN;
int32_t t60 = 28;
int32_t x247 = INT32_MIN;
volatile int32_t x253 = INT32_MIN;
int32_t t63 = -48421053;
int32_t x257 = -1;
int64_t x260 = INT64_MIN;
static uint8_t x262 = 2U;
static int8_t x266 = -1;
int16_t x268 = -1;
static int32_t t68 = 627;
int64_t x281 = INT64_MAX;
int8_t x287 = 1;
volatile int32_t t71 = -577;
volatile int8_t x289 = INT8_MAX;
uint64_t x294 = UINT64_MAX;
int16_t x296 = INT16_MIN;
static int32_t x301 = -1;
uint64_t x302 = 62608579141LLU;
int32_t t75 = -55436513;
static volatile uint8_t x307 = 3U;
int64_t x309 = INT64_MIN;
int16_t x312 = -110;
uint64_t x316 = 3898635685941356358LLU;
int16_t x317 = -400;
int64_t x321 = -1LL;
volatile int8_t x328 = -1;
volatile uint64_t x331 = 14341176247LLU;
static volatile int32_t t82 = 16491377;
volatile int32_t t85 = -984002634;
int8_t x365 = 1;
static volatile int32_t t91 = 650149;
static volatile int8_t x381 = INT8_MAX;
int64_t x385 = 809LL;
uint8_t x392 = 8U;
int16_t x397 = INT16_MIN;
int8_t x400 = -1;


void f0(void) {
	static int32_t x2 = 1597;
	volatile int64_t x4 = 3545013598071LL;
	int32_t t0 = -60801185;

	t0 = ((x1^x2)==(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -6;
	int16_t x7 = 14177;
	volatile int32_t x8 = -1;
	int32_t t1 = 444834875;

	t1 = ((x5^x6)==(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 796U;
	volatile int32_t x12 = 9463741;
	int32_t t2 = 1;

	t2 = ((x9^x10)==(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint16_t x14 = 661U;
	int32_t x16 = 422159784;
	volatile int32_t t3 = 2672545;

	t3 = ((x13^x14)==(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MIN;
	int64_t x18 = -1LL;
	volatile int16_t x19 = -1;
	static int32_t x20 = INT32_MAX;
	static int32_t t4 = 173104829;

	t4 = ((x17^x18)==(x19^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	volatile int64_t x22 = INT64_MAX;
	uint32_t x23 = UINT32_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = -44519;

	t5 = ((x21^x22)==(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x27 = 35LLU;
	static uint8_t x28 = UINT8_MAX;

	t6 = ((x25^x26)==(x27^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = UINT32_MAX;
	int64_t x32 = -3LL;
	int32_t t7 = -19;

	t7 = ((x29^x30)==(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = INT32_MIN;
	int8_t x36 = 27;
	int32_t t8 = -38;

	t8 = ((x33^x34)==(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static int32_t x39 = INT32_MAX;
	static int64_t x40 = -213143403LL;
	int32_t t9 = 973;

	t9 = ((x37^x38)==(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	uint16_t x42 = 295U;
	uint32_t x43 = 859985U;

	t10 = ((x41^x42)==(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint64_t x46 = 76091641894858LLU;
	volatile uint64_t x47 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;
	int32_t t11 = 10;

	t11 = ((x45^x46)==(x47^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x50 = UINT32_MAX;
	uint16_t x51 = 0U;

	t12 = ((x49^x50)==(x51^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 3;
	uint16_t x54 = UINT16_MAX;
	static int32_t x56 = 11443;
	int32_t t13 = -62;

	t13 = ((x53^x54)==(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 78361487U;
	static uint16_t x58 = 1726U;
	uint8_t x59 = 29U;
	volatile int16_t x60 = INT16_MIN;

	t14 = ((x57^x58)==(x59^x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 36795412059LLU;
	int8_t x62 = -3;
	int32_t x64 = INT32_MAX;
	int32_t t15 = 3572302;

	t15 = ((x61^x62)==(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 157285135LLU;
	int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MAX;
	volatile int32_t t16 = -64;

	t16 = ((x65^x66)==(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	int16_t x70 = INT16_MAX;
	static int8_t x72 = -1;
	static volatile int32_t t17 = 1055165861;

	t17 = ((x69^x70)==(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	int8_t x74 = 13;
	int64_t x75 = -954LL;
	volatile int16_t x76 = INT16_MIN;
	int32_t t18 = -386;

	t18 = ((x73^x74)==(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 0U;
	int8_t x79 = -7;
	static int32_t x80 = -258;
	volatile int32_t t19 = 1;

	t19 = ((x77^x78)==(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 4;
	static int64_t x82 = INT64_MIN;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t20 = -1898414;

	t20 = ((x81^x82)==(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint32_t x88 = 2U;
	volatile int32_t t21 = -24903;

	t21 = ((x85^x86)==(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 157710477826587LLU;
	int8_t x91 = INT8_MAX;
	int8_t x92 = -1;
	static volatile int32_t t22 = -10234;

	t22 = ((x89^x90)==(x91^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MAX;
	volatile int64_t x94 = INT64_MIN;
	static volatile int8_t x95 = -1;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -207;

	t23 = ((x93^x94)==(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = -16162;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 31198502;

	t24 = ((x97^x98)==(x99^x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 32973279006963097LLU;
	volatile int16_t x103 = 0;
	int32_t x104 = 131816696;

	t25 = ((x101^x102)==(x103^x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 667586U;
	volatile int8_t x107 = -1;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -8753780;

	t26 = ((x105^x106)==(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = UINT16_MAX;
	static volatile int8_t x110 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = -98356240;

	t27 = ((x109^x110)==(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int32_t x114 = INT32_MIN;
	static int32_t x115 = INT32_MIN;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 8;

	t28 = ((x113^x114)==(x115^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = UINT32_MAX;
	static int64_t x118 = INT64_MAX;
	int64_t x119 = -1LL;

	t29 = ((x117^x118)==(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	uint8_t x122 = UINT8_MAX;
	uint8_t x124 = 7U;
	static volatile int32_t t30 = -7;

	t30 = ((x121^x122)==(x123^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 4340096217LLU;
	static int64_t x126 = -160595507971392LL;
	volatile int32_t x127 = -1;
	volatile uint8_t x128 = UINT8_MAX;
	int32_t t31 = 516900667;

	t31 = ((x125^x126)==(x127^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 9957961265363LLU;
	int32_t x132 = -377912131;
	static int32_t t32 = -36485725;

	t32 = ((x129^x130)==(x131^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int32_t x134 = -48090553;
	static uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -401111874;

	t33 = ((x133^x134)==(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 4U;
	int8_t x138 = 24;
	volatile int64_t x139 = 1054655LL;
	volatile int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 1;

	t34 = ((x137^x138)==(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = 10;
	int32_t x143 = INT32_MIN;
	volatile int32_t t35 = -150010893;

	t35 = ((x141^x142)==(x143^x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 3241711U;
	uint32_t x146 = 15U;
	static int32_t x147 = INT32_MAX;
	volatile int64_t x148 = INT64_MAX;
	static volatile int32_t t36 = -2984726;

	t36 = ((x145^x146)==(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 93226U;
	int32_t x150 = INT32_MIN;
	int16_t x152 = -1;

	t37 = ((x149^x150)==(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	static uint16_t x154 = 1U;
	uint64_t x155 = 171191937LLU;
	static int32_t x156 = INT32_MIN;
	int32_t t38 = -1;

	t38 = ((x153^x154)==(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	static uint32_t x159 = 4573U;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = 217431;

	t39 = ((x157^x158)==(x159^x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 18253434U;
	uint32_t x163 = UINT32_MAX;
	volatile int32_t x164 = 960600;
	static volatile int32_t t40 = -465728871;

	t40 = ((x161^x162)==(x163^x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	static int8_t x166 = INT8_MIN;
	int16_t x167 = -1;
	int8_t x168 = INT8_MIN;
	static int32_t t41 = -115492593;

	t41 = ((x165^x166)==(x167^x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = -2;
	volatile int32_t t42 = 1244331;

	t42 = ((x169^x170)==(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x174 = UINT8_MAX;
	static int32_t t43 = 1;

	t43 = ((x173^x174)==(x175^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 7LLU;
	uint32_t x178 = 470519U;
	static int16_t x179 = INT16_MIN;
	static volatile int32_t t44 = -5178;

	t44 = ((x177^x178)==(x179^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	int32_t x182 = INT32_MAX;
	int16_t x183 = -58;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = -1;

	t45 = ((x181^x182)==(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = -3;

	t46 = ((x185^x186)==(x187^x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	static uint32_t x190 = UINT32_MAX;
	int8_t x191 = 46;
	int32_t t47 = 3039;

	t47 = ((x189^x190)==(x191^x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x194 = 2057369951U;
	volatile int16_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = 157811;

	t48 = ((x193^x194)==(x195^x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = -1;
	static uint16_t x198 = UINT16_MAX;
	volatile int32_t x200 = -2;

	t49 = ((x197^x198)==(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MAX;
	int32_t t50 = 0;

	t50 = ((x201^x202)==(x203^x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	uint8_t x206 = 6U;
	int32_t x207 = -1;
	int64_t x208 = INT64_MAX;
	int32_t t51 = 1567419;

	t51 = ((x205^x206)==(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = -39145503681459562LL;
	static int64_t x211 = 25713994LL;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t52 = -387;

	t52 = ((x209^x210)==(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MAX;
	int64_t x215 = -1LL;
	uint32_t x216 = 1660U;
	int32_t t53 = -7;

	t53 = ((x213^x214)==(x215^x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 1309U;
	static int64_t x220 = -1LL;
	volatile int32_t t54 = -862;

	t54 = ((x217^x218)==(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x221 = 8U;
	int64_t x222 = 8347LL;
	static int32_t x223 = 11;
	uint16_t x224 = 2805U;
	volatile int32_t t55 = -2523764;

	t55 = ((x221^x222)==(x223^x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x226 = INT64_MIN;
	static int32_t t56 = 0;

	t56 = ((x225^x226)==(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = UINT16_MAX;
	uint8_t x231 = 116U;
	int32_t t57 = -4;

	t57 = ((x229^x230)==(x231^x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = -135LL;
	static int16_t x236 = -1;
	int32_t t58 = 282680;

	t58 = ((x233^x234)==(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	volatile uint16_t x238 = 819U;
	uint32_t x239 = 1U;
	int64_t x240 = INT64_MIN;
	int32_t t59 = -11324689;

	t59 = ((x237^x238)==(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 766LLU;
	uint16_t x243 = 53U;
	int16_t x244 = INT16_MIN;

	t60 = ((x241^x242)==(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 0;
	volatile uint64_t x246 = UINT64_MAX;
	volatile uint8_t x248 = 19U;
	int32_t t61 = -88;

	t61 = ((x245^x246)==(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MAX;
	uint8_t x251 = 84U;
	volatile int64_t x252 = INT64_MAX;
	int32_t t62 = 511746;

	t62 = ((x249^x250)==(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = 15;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 27425U;

	t63 = ((x253^x254)==(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x258 = INT8_MIN;
	volatile int64_t x259 = INT64_MIN;
	static int32_t t64 = 98605;

	t64 = ((x257^x258)==(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 2;
	uint32_t x263 = 15U;
	static uint32_t x264 = 1771119U;
	int32_t t65 = 2907;

	t65 = ((x261^x262)==(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -14292;
	volatile int8_t x267 = -1;
	volatile int32_t t66 = -13;

	t66 = ((x265^x266)==(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	volatile int16_t x270 = -155;
	int16_t x271 = INT16_MAX;
	uint8_t x272 = 0U;
	volatile int32_t t67 = 11;

	t67 = ((x269^x270)==(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = UINT32_MAX;
	volatile int8_t x274 = -1;
	static int64_t x275 = 3124349LL;
	static uint32_t x276 = 2614U;

	t68 = ((x273^x274)==(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	static int64_t x279 = INT64_MAX;
	uint32_t x280 = 179U;
	volatile int32_t t69 = -142;

	t69 = ((x277^x278)==(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = 387558057411607LL;
	int64_t x283 = 189LL;
	uint16_t x284 = 7U;
	volatile int32_t t70 = 1955;

	t70 = ((x281^x282)==(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 11U;
	volatile int32_t x286 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;

	t71 = ((x285^x286)==(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = INT64_MIN;
	uint8_t x291 = 1U;
	volatile int32_t x292 = INT32_MAX;
	int32_t t72 = -145517849;

	t72 = ((x289^x290)==(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 2U;
	volatile int8_t x295 = 5;
	static volatile int32_t t73 = 0;

	t73 = ((x293^x294)==(x295^x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	static int32_t x300 = -15792;
	static volatile int32_t t74 = -4029;

	t74 = ((x297^x298)==(x299^x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;

	t75 = ((x301^x302)==(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	volatile int32_t x306 = INT32_MIN;
	static uint8_t x308 = 5U;
	static int32_t t76 = 4862158;

	t76 = ((x305^x306)==(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = UINT64_MAX;
	static int8_t x311 = INT8_MAX;
	volatile int32_t t77 = -31119101;

	t77 = ((x309^x310)==(x311^x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	uint16_t x314 = UINT16_MAX;
	int32_t x315 = INT32_MIN;
	volatile int32_t t78 = 7;

	t78 = ((x313^x314)==(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MIN;
	uint8_t x319 = 70U;
	int16_t x320 = INT16_MAX;
	int32_t t79 = -15;

	t79 = ((x317^x318)==(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x322 = 0U;
	static uint16_t x323 = 2U;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -40237057;

	t80 = ((x321^x322)==(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int8_t x326 = INT8_MIN;
	int16_t x327 = -34;
	int32_t t81 = -15849815;

	t81 = ((x325^x326)==(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	int16_t x330 = -743;
	static uint32_t x332 = 35979325U;

	t82 = ((x329^x330)==(x331^x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 2U;
	static volatile uint8_t x334 = UINT8_MAX;
	uint64_t x335 = 637400774LLU;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = -97;

	t83 = ((x333^x334)==(x335^x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MIN;
	volatile uint64_t x338 = 123403044377726LLU;
	int32_t x339 = 7096745;
	volatile int16_t x340 = -1;
	int32_t t84 = 58141027;

	t84 = ((x337^x338)==(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	uint32_t x342 = 12U;
	uint32_t x343 = 3116903U;
	uint32_t x344 = 46392U;

	t85 = ((x341^x342)==(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MAX;
	uint16_t x346 = 94U;
	uint64_t x347 = 15830LLU;
	int64_t x348 = INT64_MAX;
	int32_t t86 = 1756220;

	t86 = ((x345^x346)==(x347^x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 1777U;
	int32_t x350 = -52288313;
	int8_t x351 = -1;
	uint32_t x352 = 8009U;
	volatile int32_t t87 = -240;

	t87 = ((x349^x350)==(x351^x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 1U;
	uint16_t x354 = 34U;
	int8_t x355 = INT8_MAX;
	int32_t x356 = INT32_MAX;
	int32_t t88 = 84;

	t88 = ((x353^x354)==(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 7;
	static uint64_t x358 = UINT64_MAX;
	int8_t x359 = INT8_MIN;
	static int16_t x360 = INT16_MIN;
	static int32_t t89 = 654495025;

	t89 = ((x357^x358)==(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 0U;
	volatile int64_t x362 = 23032LL;
	uint64_t x363 = 31494023254LLU;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = 921549952;

	t90 = ((x361^x362)==(x363^x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = -1;
	int32_t x367 = -1;
	int8_t x368 = 0;

	t91 = ((x365^x366)==(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	volatile int32_t x370 = -1;
	uint32_t x371 = 7U;
	int64_t x372 = INT64_MAX;
	static volatile int32_t t92 = 31;

	t92 = ((x369^x370)==(x371^x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x373 = INT32_MAX;
	int32_t x374 = INT32_MAX;
	volatile uint32_t x375 = 111073715U;
	uint64_t x376 = 1722784106104LLU;
	int32_t t93 = -178;

	t93 = ((x373^x374)==(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	uint8_t x378 = 13U;
	int8_t x379 = -1;
	static volatile int32_t x380 = INT32_MAX;
	volatile int32_t t94 = -31;

	t94 = ((x377^x378)==(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = -1;
	volatile int8_t x383 = 2;
	static int64_t x384 = INT64_MIN;
	int32_t t95 = 6;

	t95 = ((x381^x382)==(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -1;
	static int16_t x387 = -1;
	volatile uint8_t x388 = 3U;
	volatile int32_t t96 = -50479;

	t96 = ((x385^x386)==(x387^x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = 1;
	int8_t x391 = -1;
	volatile int32_t t97 = -4942;

	t97 = ((x389^x390)==(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	volatile uint64_t x394 = 1850642053779882LLU;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = 183;
	static volatile int32_t t98 = -2987;

	t98 = ((x393^x394)==(x395^x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile int32_t t99 = -3;

	t99 = ((x397^x398)==(x399^x400));

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

