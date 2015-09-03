#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x1 = 0U;
volatile int32_t x5 = 147601;
int32_t t1 = 1;
uint64_t x17 = 882135543588LLU;
volatile uint64_t t4 = 40555731LLU;
static volatile int16_t x23 = INT16_MIN;
int8_t x26 = -54;
int16_t x27 = INT16_MAX;
uint8_t x29 = UINT8_MAX;
static int32_t x36 = INT32_MIN;
volatile uint64_t x40 = UINT64_MAX;
volatile uint32_t x48 = UINT32_MAX;
static uint8_t x50 = 5U;
volatile int64_t x51 = -1LL;
volatile int8_t x54 = INT8_MIN;
uint16_t x64 = 110U;
int8_t x69 = 0;
int16_t x70 = -235;
int32_t t17 = -1;
int16_t x77 = INT16_MAX;
int64_t x84 = 5137472894879LL;
int64_t x86 = INT64_MIN;
int16_t x90 = INT16_MIN;
int32_t x95 = -16790;
int16_t x96 = -54;
uint16_t x107 = UINT16_MAX;
int16_t x108 = INT16_MIN;
int64_t t27 = -9314961951842LL;
uint16_t x114 = 1782U;
volatile int64_t x115 = INT64_MIN;
int64_t x116 = INT64_MIN;
static int8_t x118 = INT8_MAX;
int32_t t29 = INT32_MAX;
int32_t x123 = INT32_MIN;
uint8_t x126 = 38U;
int16_t x129 = INT16_MIN;
volatile int32_t t32 = -24858;
int32_t x133 = -7424;
int32_t x141 = -117828708;
static int32_t t35 = 244;
int32_t x145 = 62647805;
int16_t x154 = -1;
int64_t x156 = INT64_MAX;
int8_t x161 = INT8_MIN;
int32_t x167 = 103462;
int32_t t43 = 121326;
uint32_t x177 = 46U;
int16_t x185 = -3;
static volatile int8_t x186 = -1;
int16_t x187 = INT16_MAX;
int16_t x207 = INT16_MIN;
uint16_t x216 = UINT16_MAX;
volatile int32_t t54 = -11;
int16_t x226 = -7;
uint8_t x245 = 2U;
uint8_t x247 = 20U;
int16_t x248 = INT16_MIN;
volatile int32_t t61 = 18;
int8_t x254 = INT8_MIN;
volatile int16_t x265 = 7843;
int16_t x268 = INT16_MIN;
volatile int32_t t66 = -31;
volatile int32_t x272 = INT32_MIN;
int8_t x273 = -1;
volatile int64_t x289 = INT64_MIN;
volatile int64_t x296 = INT64_MIN;
uint64_t t73 = 496203LLU;
volatile int32_t t74 = 1;
int64_t x305 = -1LL;
volatile int64_t x307 = INT64_MIN;
volatile int32_t t77 = -1;
volatile uint32_t t78 = 130227666U;
volatile int32_t t82 = 418;
uint8_t x335 = UINT8_MAX;
uint16_t x345 = 32U;
int64_t x346 = -36891490LL;
volatile int64_t x351 = -2LL;
static volatile int8_t x358 = INT8_MIN;
int64_t x364 = 0LL;
int8_t x371 = -1;
uint16_t x380 = 3U;
uint16_t x381 = 14034U;
static uint8_t x387 = 62U;
int64_t x390 = INT64_MIN;
uint8_t x398 = 0U;


void f0(void) {
	static volatile int8_t x2 = INT8_MIN;
	uint32_t x3 = 7600095U;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = 124;

	t0 = (x1^(x2<(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	static uint8_t x8 = 1U;

	t1 = (x5^(x6<(x7==x8)));

	if (t1 != 147600) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 829479623U;
	int16_t x10 = INT16_MAX;
	uint64_t x11 = 12286LLU;
	volatile uint64_t x12 = UINT64_MAX;
	volatile uint32_t t2 = 829U;

	t2 = (x9^(x10<(x11==x12)));

	if (t2 != 829479623U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	static int16_t x16 = INT16_MIN;
	static int64_t t3 = -512898254741LL;

	t3 = (x13^(x14<(x15==x16)));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x18 = 21LL;
	int8_t x19 = -1;
	volatile int64_t x20 = 2157698LL;

	t4 = (x17^(x18<(x19==x20)));

	if (t4 != 882135543588LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int32_t x22 = -1;
	static int8_t x24 = INT8_MIN;
	volatile int64_t t5 = -4583079039025915637LL;

	t5 = (x21^(x22<(x23==x24)));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = 7274061481581904LL;

	t6 = (x25^(x26<(x27==x28)));

	if (t6 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = UINT32_MAX;
	volatile int8_t x31 = INT8_MIN;
	static uint8_t x32 = 11U;
	volatile int32_t t7 = -8947;

	t7 = (x29^(x30<(x31==x32)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int32_t x34 = 8184;
	int64_t x35 = INT64_MAX;
	volatile int32_t t8 = 1476;

	t8 = (x33^(x34<(x35==x36)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 237277094189197624LLU;
	uint32_t x38 = 75171003U;
	uint16_t x39 = 936U;
	static volatile uint64_t t9 = 64520LLU;

	t9 = (x37^(x38<(x39==x40)));

	if (t9 != 237277094189197624LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	static int64_t x42 = -94601593854923LL;
	volatile int8_t x43 = -49;
	int16_t x44 = 2;
	volatile int32_t t10 = 1027111105;

	t10 = (x41^(x42<(x43==x44)));

	if (t10 != 254) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x46 = -3;
	uint16_t x47 = UINT16_MAX;
	static volatile uint32_t t11 = 231280U;

	t11 = (x45^(x46<(x47==x48)));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x52 = 45732U;
	int32_t t12 = 396;

	t12 = (x49^(x50<(x51==x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = INT32_MAX;
	int32_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = 9;

	t13 = (x53^(x54<(x55==x56)));

	if (t13 != 2147483646) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = 105U;
	int32_t x58 = INT32_MIN;
	int32_t x59 = 13397;
	int64_t x60 = -14268826489974LL;
	static int32_t t14 = 526455;

	t14 = (x57^(x58<(x59==x60)));

	if (t14 != 104) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = UINT8_MAX;
	volatile int32_t x62 = INT32_MIN;
	static uint32_t x63 = 902683U;
	volatile int32_t t15 = -1609;

	t15 = (x61^(x62<(x63==x64)));

	if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	volatile uint64_t x66 = UINT64_MAX;
	int64_t x67 = -1LL;
	static int64_t x68 = INT64_MIN;
	int64_t t16 = 3510778LL;

	t16 = (x65^(x66<(x67==x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = INT32_MIN;
	volatile int16_t x72 = INT16_MIN;

	t17 = (x69^(x70<(x71==x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	uint32_t x74 = UINT32_MAX;
	int16_t x75 = -1;
	static uint32_t x76 = UINT32_MAX;
	volatile int64_t t18 = 11612LL;

	t18 = (x73^(x74<(x75==x76)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x78 = 50U;
	uint64_t x79 = 12173977540329LLU;
	int16_t x80 = -12462;
	volatile int32_t t19 = 675469;

	t19 = (x77^(x78<(x79==x80)));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -251386047066597LL;
	int16_t x82 = INT16_MAX;
	int8_t x83 = -6;
	int64_t t20 = -113053184LL;

	t20 = (x81^(x82<(x83==x84)));

	if (t20 != -251386047066597LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	int32_t x87 = INT32_MIN;
	volatile int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -21910036;

	t21 = (x85^(x86<(x87==x88)));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int32_t x91 = INT32_MIN;
	static uint32_t x92 = UINT32_MAX;
	static int32_t t22 = -4381;

	t22 = (x89^(x90<(x91==x92)));

	if (t22 != 2147483646) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -5;
	int16_t x94 = INT16_MIN;
	static volatile int32_t t23 = -623927779;

	t23 = (x93^(x94<(x95==x96)));

	if (t23 != -6) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int16_t x98 = INT16_MIN;
	static int8_t x99 = INT8_MAX;
	static uint8_t x100 = 37U;
	volatile int32_t t24 = 59937889;

	t24 = (x97^(x98<(x99==x100)));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int64_t x102 = -1596667LL;
	int8_t x103 = -1;
	static uint32_t x104 = 531569342U;
	uint64_t t25 = 6524LLU;

	t25 = (x101^(x102<(x103==x104)));

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	int32_t t26 = -766136;

	t26 = (x105^(x106<(x107==x108)));

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 14LL;
	int16_t x110 = INT16_MIN;
	int16_t x111 = -1;
	uint16_t x112 = 17U;

	t27 = (x109^(x110<(x111==x112)));

	if (t27 != 15LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = -25629;
	volatile int32_t t28 = -1;

	t28 = (x113^(x114<(x115==x116)));

	if (t28 != -25629) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int8_t x119 = INT8_MAX;
	static int64_t x120 = -90756338217LL;

	t29 = (x117^(x118<(x119==x120)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static int16_t x122 = -745;
	static int16_t x124 = INT16_MIN;
	int32_t t30 = 2993361;

	t30 = (x121^(x122<(x123==x124)));

	if (t30 != 65534) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 1361;
	int32_t x127 = INT32_MAX;
	volatile uint8_t x128 = 0U;
	int32_t t31 = 3277142;

	t31 = (x125^(x126<(x127==x128)));

	if (t31 != 1361) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x130 = INT64_MIN;
	static int32_t x131 = -1;
	volatile uint32_t x132 = 2074450U;

	t32 = (x129^(x130<(x131==x132)));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MAX;
	static int16_t x135 = -163;
	static int8_t x136 = -7;
	volatile int32_t t33 = -36;

	t33 = (x133^(x134<(x135==x136)));

	if (t33 != -7424) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = UINT16_MAX;
	volatile int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	int16_t x140 = 950;
	static volatile int32_t t34 = 1335780;

	t34 = (x137^(x138<(x139==x140)));

	if (t34 != 65534) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -11766;
	int8_t x143 = INT8_MAX;
	static volatile uint8_t x144 = 0U;

	t35 = (x141^(x142<(x143==x144)));

	if (t35 != -117828707) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x146 = -1;
	static int64_t x147 = INT64_MAX;
	static int32_t x148 = -12086;
	static int32_t t36 = -50;

	t36 = (x145^(x146<(x147==x148)));

	if (t36 != 62647804) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x149 = UINT8_MAX;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 1;

	t37 = (x149^(x150<(x151==x152)));

	if (t37 != 254) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 2372457;
	int32_t x155 = -3;
	volatile int32_t t38 = -27191757;

	t38 = (x153^(x154<(x155==x156)));

	if (t38 != 2372456) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -2474LL;
	static volatile int64_t x158 = INT64_MIN;
	uint32_t x159 = 1U;
	static int32_t x160 = -1;
	static volatile int64_t t39 = -322LL;

	t39 = (x157^(x158<(x159==x160)));

	if (t39 != -2473LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 1U;
	int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MAX;
	volatile int32_t t40 = 65695;

	t40 = (x161^(x162<(x163==x164)));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 687LLU;
	int64_t x166 = INT64_MAX;
	int32_t x168 = INT32_MIN;
	volatile uint64_t t41 = 491285LLU;

	t41 = (x165^(x166<(x167==x168)));

	if (t41 != 687LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	int64_t x170 = 5710798331487945LL;
	volatile int64_t x171 = INT64_MIN;
	int16_t x172 = -2;
	int32_t t42 = 3047655;

	t42 = (x169^(x170<(x171==x172)));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = -1;
	int8_t x175 = -1;
	int64_t x176 = -1LL;

	t43 = (x173^(x174<(x175==x176)));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = 0;
	static int8_t x179 = INT8_MAX;
	uint32_t x180 = 2U;
	uint32_t t44 = 36838221U;

	t44 = (x177^(x178<(x179==x180)));

	if (t44 != 46U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	int32_t x182 = INT32_MIN;
	volatile int64_t x183 = 342158734256LL;
	int16_t x184 = 0;
	static int32_t t45 = 120;

	t45 = (x181^(x182<(x183==x184)));

	if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 7787788;

	t46 = (x185^(x186<(x187==x188)));

	if (t46 != -4) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 256932060592LLU;
	static uint16_t x190 = 392U;
	int32_t x191 = 0;
	uint32_t x192 = 6U;
	volatile uint64_t t47 = 3463115563412198LLU;

	t47 = (x189^(x190<(x191==x192)));

	if (t47 != 256932060592LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x193 = INT64_MIN;
	int16_t x194 = INT16_MAX;
	int16_t x195 = INT16_MIN;
	int32_t x196 = 47;
	int64_t t48 = INT64_MIN;

	t48 = (x193^(x194<(x195==x196)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = INT8_MAX;
	static volatile int64_t x198 = 333687LL;
	volatile int8_t x199 = INT8_MIN;
	uint32_t x200 = 489229U;
	volatile int32_t t49 = -21;

	t49 = (x197^(x198<(x199==x200)));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 1U;
	uint64_t x204 = 1035771LLU;
	uint32_t t50 = 0U;

	t50 = (x201^(x202<(x203==x204)));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MAX;
	volatile int64_t x206 = -2LL;
	uint16_t x208 = 18741U;
	volatile int32_t t51 = -126749926;

	t51 = (x205^(x206<(x207==x208)));

	if (t51 != 126) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x209 = INT64_MIN;
	int16_t x210 = -496;
	static int16_t x211 = INT16_MIN;
	uint64_t x212 = 50641331LLU;
	volatile int64_t t52 = 8606407380989LL;

	t52 = (x209^(x210<(x211==x212)));

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 105327LL;
	int16_t x214 = INT16_MIN;
	volatile int8_t x215 = INT8_MIN;
	volatile int64_t t53 = -520322718788908LL;

	t53 = (x213^(x214<(x215==x216)));

	if (t53 != 105326LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	static volatile uint16_t x219 = UINT16_MAX;
	volatile int32_t x220 = -1;

	t54 = (x217^(x218<(x219==x220)));

	if (t54 != -32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 179U;
	int16_t x222 = INT16_MAX;
	uint64_t x223 = 1657172599379530373LLU;
	uint8_t x224 = 38U;
	int32_t t55 = 9;

	t55 = (x221^(x222<(x223==x224)));

	if (t55 != 179) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -7;
	static int64_t x227 = INT64_MIN;
	int64_t x228 = -1LL;
	int32_t t56 = 224347;

	t56 = (x225^(x226<(x227==x228)));

	if (t56 != -8) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x229 = 6U;
	uint8_t x230 = UINT8_MAX;
	int16_t x231 = INT16_MIN;
	volatile uint8_t x232 = 41U;
	static uint32_t t57 = 964205127U;

	t57 = (x229^(x230<(x231==x232)));

	if (t57 != 6U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	volatile int64_t x234 = -1LL;
	int32_t x235 = INT32_MAX;
	volatile int8_t x236 = INT8_MAX;
	int32_t t58 = 561;

	t58 = (x233^(x234<(x235==x236)));

	if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -1LL;
	int8_t x238 = 1;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 434670089U;
	volatile int64_t t59 = -4480819LL;

	t59 = (x237^(x238<(x239==x240)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = INT8_MAX;
	static uint8_t x242 = 7U;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = -56047LL;
	volatile int32_t t60 = 1404294;

	t60 = (x241^(x242<(x243==x244)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MAX;

	t61 = (x245^(x246<(x247==x248)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 6298316443614531LL;
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;
	int64_t t62 = 2077758174LL;

	t62 = (x249^(x250<(x251==x252)));

	if (t62 != 6298316443614530LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 51U;
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	int32_t t63 = 4;

	t63 = (x253^(x254<(x255==x256)));

	if (t63 != 50) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = -1LL;
	volatile int64_t x259 = INT64_MAX;
	int16_t x260 = 3243;
	volatile int32_t t64 = -9;

	t64 = (x257^(x258<(x259==x260)));

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -3;
	static int8_t x262 = INT8_MAX;
	int8_t x263 = INT8_MIN;
	uint16_t x264 = 5280U;
	static volatile int32_t t65 = 102982;

	t65 = (x261^(x262<(x263==x264)));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x266 = UINT16_MAX;
	volatile int16_t x267 = INT16_MIN;

	t66 = (x265^(x266<(x267==x268)));

	if (t66 != 7843) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	volatile int16_t x270 = 579;
	int32_t x271 = -1;
	volatile int32_t t67 = -14308;

	t67 = (x269^(x270<(x271==x272)));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = INT16_MIN;
	volatile uint16_t x275 = 3U;
	int16_t x276 = -1;
	static int32_t t68 = -1;

	t68 = (x273^(x274<(x275==x276)));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MAX;
	static int16_t x279 = INT16_MIN;
	int32_t x280 = -86858829;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x277^(x278<(x279==x280)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -1;
	int8_t x282 = INT8_MAX;
	static int16_t x283 = INT16_MIN;
	uint16_t x284 = 80U;
	static int32_t t70 = -60696;

	t70 = (x281^(x282<(x283==x284)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = 7244U;
	uint16_t x286 = 31U;
	uint16_t x287 = 265U;
	uint32_t x288 = 8U;
	volatile int32_t t71 = 87155463;

	t71 = (x285^(x286<(x287==x288)));

	if (t71 != 7244) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x290 = UINT64_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	int64_t x292 = INT64_MIN;
	int64_t t72 = INT64_MIN;

	t72 = (x289^(x290<(x291==x292)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 124843201507896120LLU;
	uint8_t x294 = 22U;
	uint32_t x295 = 4209U;

	t73 = (x293^(x294<(x295==x296)));

	if (t73 != 124843201507896120LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 64235;
	volatile int16_t x298 = INT16_MAX;
	uint8_t x299 = 27U;
	static volatile uint64_t x300 = UINT64_MAX;

	t74 = (x297^(x298<(x299==x300)));

	if (t74 != 64235) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 568920753484066LLU;
	volatile int8_t x302 = INT8_MIN;
	int64_t x303 = -1LL;
	static int16_t x304 = -1690;
	uint64_t t75 = 7012853137LLU;

	t75 = (x301^(x302<(x303==x304)));

	if (t75 != 568920753484067LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 136492921944835219LLU;
	static volatile int64_t x308 = INT64_MIN;
	int64_t t76 = 21184666917321678LL;

	t76 = (x305^(x306<(x307==x308)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x309 = 106U;
	uint64_t x310 = 937318262008996268LLU;
	uint32_t x311 = 35359U;
	int8_t x312 = -1;

	t77 = (x309^(x310<(x311==x312)));

	if (t77 != 106) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 136242237U;
	uint32_t x314 = 12U;
	uint32_t x315 = 0U;
	int32_t x316 = INT32_MIN;

	t78 = (x313^(x314<(x315==x316)));

	if (t78 != 136242237U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 20U;
	int64_t x318 = INT64_MIN;
	int8_t x319 = 27;
	int64_t x320 = -11139585780LL;
	uint32_t t79 = 3539342U;

	t79 = (x317^(x318<(x319==x320)));

	if (t79 != 21U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x321 = 3369740452153893LLU;
	uint32_t x322 = 1353583002U;
	uint16_t x323 = 24U;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t80 = 447LLU;

	t80 = (x321^(x322<(x323==x324)));

	if (t80 != 3369740452153893LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = INT8_MIN;
	int8_t x326 = 32;
	int32_t x327 = 4266754;
	static volatile uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = -882085092;

	t81 = (x325^(x326<(x327==x328)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -45;
	int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MAX;
	volatile int32_t x332 = -4;

	t82 = (x329^(x330<(x331==x332)));

	if (t82 != -45) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int32_t x334 = INT32_MAX;
	static int16_t x336 = INT16_MAX;
	static volatile int32_t t83 = -55754400;

	t83 = (x333^(x334<(x335==x336)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -51;
	int16_t x338 = -2;
	volatile int8_t x339 = 1;
	uint32_t x340 = 27U;
	volatile int32_t t84 = -16398052;

	t84 = (x337^(x338<(x339==x340)));

	if (t84 != -52) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 409813U;
	volatile int16_t x342 = -57;
	volatile int64_t x343 = 1924LL;
	static int16_t x344 = INT16_MAX;
	volatile uint32_t t85 = 0U;

	t85 = (x341^(x342<(x343==x344)));

	if (t85 != 409812U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x347 = INT16_MAX;
	static int16_t x348 = 1540;
	static int32_t t86 = 355;

	t86 = (x345^(x346<(x347==x348)));

	if (t86 != 33) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = -1LL;
	int32_t x352 = 67444;
	static int32_t t87 = 1;

	t87 = (x349^(x350<(x351==x352)));

	if (t87 != 65534) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x353 = 6411U;
	int32_t x354 = INT32_MIN;
	int8_t x355 = -1;
	int64_t x356 = 26262051725287LL;
	volatile uint32_t t88 = 10098U;

	t88 = (x353^(x354<(x355==x356)));

	if (t88 != 6410U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = 23;
	int64_t x359 = -371357923779871337LL;
	int8_t x360 = -1;
	volatile int32_t t89 = 65575;

	t89 = (x357^(x358<(x359==x360)));

	if (t89 != 22) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = 2U;
	uint16_t x362 = 1919U;
	int16_t x363 = INT16_MAX;
	int32_t t90 = 411439;

	t90 = (x361^(x362<(x363==x364)));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 49U;
	static int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = -2435;

	t91 = (x365^(x366<(x367==x368)));

	if (t91 != 48) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MIN;
	volatile int64_t x370 = -97LL;
	int64_t x372 = INT64_MIN;
	int32_t t92 = 123373;

	t92 = (x369^(x370<(x371==x372)));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -1366006LL;
	int16_t x374 = INT16_MIN;
	int64_t x375 = INT64_MAX;
	int32_t x376 = INT32_MIN;
	int64_t t93 = 612297424361067057LL;

	t93 = (x373^(x374<(x375==x376)));

	if (t93 != -1366005LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 267995666U;
	int16_t x378 = -2;
	volatile int64_t x379 = -1LL;
	volatile uint32_t t94 = 91U;

	t94 = (x377^(x378<(x379==x380)));

	if (t94 != 267995667U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MAX;
	int32_t x383 = -3369;
	uint8_t x384 = 3U;
	static volatile int32_t t95 = 3378;

	t95 = (x381^(x382<(x383==x384)));

	if (t95 != 14034) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	static int8_t x386 = INT8_MIN;
	static int64_t x388 = INT64_MIN;
	volatile int32_t t96 = 100442916;

	t96 = (x385^(x386<(x387==x388)));

	if (t96 != 2147483646) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -1LL;
	int64_t x391 = 63498847761523LL;
	uint8_t x392 = 4U;
	int64_t t97 = 1LL;

	t97 = (x389^(x390<(x391==x392)));

	if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = 103;
	volatile int64_t x394 = INT64_MIN;
	uint16_t x395 = 1U;
	volatile uint8_t x396 = 28U;
	static volatile int32_t t98 = 19;

	t98 = (x393^(x394<(x395==x396)));

	if (t98 != 102) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x397 = INT64_MAX;
	int64_t x399 = INT64_MAX;
	static volatile int32_t x400 = INT32_MAX;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x397^(x398<(x399==x400)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

