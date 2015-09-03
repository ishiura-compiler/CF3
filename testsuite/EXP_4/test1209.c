#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x6 = UINT32_MAX;
int32_t x8 = -10660;
volatile int64_t t1 = -3LL;
int64_t x14 = -17457021770383935LL;
int16_t x17 = INT16_MIN;
uint64_t t4 = 3592684LLU;
uint16_t x23 = 6004U;
volatile int16_t x29 = 357;
int32_t t7 = 9959295;
int8_t x40 = -9;
int32_t x52 = -1;
int32_t t12 = 0;
volatile int64_t t13 = -551633163299861LL;
volatile uint16_t x59 = UINT16_MAX;
uint16_t x71 = 800U;
static int32_t x73 = INT32_MAX;
uint8_t x75 = 33U;
static uint64_t x78 = UINT64_MAX;
int64_t t20 = 15469112793514LL;
uint32_t x85 = 7575390U;
static uint16_t x87 = 21503U;
int32_t x91 = INT32_MAX;
int32_t t22 = -2051993;
int16_t x101 = INT16_MAX;
static int16_t x102 = INT16_MIN;
int8_t x103 = 45;
uint64_t x104 = UINT64_MAX;
volatile int32_t x107 = INT32_MAX;
uint32_t x109 = UINT32_MAX;
int16_t x118 = INT16_MIN;
int8_t x120 = INT8_MIN;
uint8_t x121 = UINT8_MAX;
int32_t x122 = -1;
int64_t t31 = 135441601LL;
static int16_t x131 = -1;
int16_t x132 = INT16_MIN;
int32_t x133 = INT32_MIN;
int32_t x134 = INT32_MIN;
static volatile int16_t x136 = INT16_MAX;
uint64_t x137 = 22898429LLU;
static uint32_t x138 = UINT32_MAX;
uint64_t t34 = 892679330LLU;
static uint64_t x144 = UINT64_MAX;
uint64_t x147 = UINT64_MAX;
volatile uint64_t x148 = 88LLU;
static uint8_t x176 = UINT8_MAX;
int16_t x181 = -1;
int8_t x182 = 8;
uint8_t x183 = 0U;
uint64_t x186 = 69258231017LLU;
int32_t x188 = -1592;
uint64_t t47 = 530LLU;
uint64_t x193 = UINT64_MAX;
int32_t x194 = INT32_MAX;
int8_t x196 = INT8_MAX;
volatile uint16_t x197 = UINT16_MAX;
int8_t x198 = -1;
uint8_t x208 = 3U;
int64_t x212 = INT64_MIN;
static uint16_t x216 = 2U;
uint32_t x219 = UINT32_MAX;
int16_t x221 = INT16_MIN;
static uint64_t x224 = UINT64_MAX;
int64_t x227 = INT64_MIN;
static uint8_t x229 = UINT8_MAX;
static uint16_t x232 = 3U;
volatile int32_t t57 = 5641331;
int64_t x239 = INT64_MAX;
static volatile int32_t x240 = INT32_MAX;
int32_t t59 = 16126;
static int64_t x241 = 837739LL;
int64_t x248 = 1872LL;
static uint32_t x251 = UINT32_MAX;
static int32_t x256 = -1;
int16_t x258 = -29;
int16_t x274 = INT16_MIN;
volatile int16_t x275 = INT16_MAX;
int64_t t69 = INT64_MAX;
uint8_t x281 = 8U;
int64_t x288 = INT64_MIN;
uint8_t x301 = 98U;
volatile int32_t x303 = -899599301;
volatile int32_t t75 = -128003398;
uint32_t x307 = 12122U;
int8_t x310 = 1;
uint8_t x318 = 7U;
int64_t x327 = 59LL;
int8_t x331 = -3;
volatile int64_t x335 = -1LL;
int64_t x339 = INT64_MIN;
int32_t x349 = INT32_MIN;
uint32_t x351 = UINT32_MAX;
static int32_t x355 = 60;
int32_t x356 = INT32_MIN;
int64_t x357 = INT64_MAX;
volatile int64_t t90 = -793489578648LL;
int8_t x378 = -1;
int32_t x380 = 10;
int8_t x381 = INT8_MAX;
static uint64_t x383 = UINT64_MAX;
uint64_t x384 = 121766086653544178LLU;
volatile int8_t x390 = INT8_MAX;
static int32_t x396 = INT32_MIN;
uint32_t x398 = 36950U;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint64_t x2 = 8LLU;
	int8_t x3 = INT8_MAX;
	int64_t x4 = 4LL;
	volatile uint64_t t0 = 224464868588262LLU;

	t0 = (x1^(x2-(x3==x4)));

	if (t0 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int64_t x7 = -1LL;

	t1 = (x5^(x6-(x7==x8)));

	if (t1 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 2037U;
	int8_t x10 = INT8_MIN;
	int64_t x11 = INT64_MAX;
	int8_t x12 = -6;
	uint32_t t2 = 854660576U;

	t2 = (x9^(x10-(x11==x12)));

	if (t2 != 4294965365U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 9U;
	static int64_t x15 = 7284729682LL;
	uint8_t x16 = UINT8_MAX;
	int64_t t3 = -9LL;

	t3 = (x13^(x14-(x15==x16)));

	if (t3 != -17457021770383928LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 27381911977LLU;
	int64_t x19 = 2632910LL;
	volatile uint16_t x20 = 4838U;

	t4 = (x17^(x18-(x19==x20)));

	if (t4 != 18446744046327648681LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = -436;
	int64_t x22 = -21347354821094LL;
	volatile int32_t x24 = INT32_MIN;
	volatile int64_t t5 = -1LL;

	t5 = (x21^(x22-(x23==x24)));

	if (t5 != 21347354820694LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 6880U;
	uint64_t x26 = 9027LLU;
	uint64_t x27 = 1608LLU;
	static volatile int32_t x28 = -969172;
	volatile uint64_t t6 = 13726782246210514LLU;

	t6 = (x25^(x26-(x27==x28)));

	if (t6 != 14755LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 10;
	int32_t x31 = -2720523;
	uint16_t x32 = 429U;

	t7 = (x29^(x30-(x31==x32)));

	if (t7 != 367) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 12U;
	volatile uint64_t x35 = UINT64_MAX;
	static uint32_t x36 = 6140U;
	static uint32_t t8 = 167892U;

	t8 = (x33^(x34-(x35==x36)));

	if (t8 != 4294934540U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static int8_t x38 = 41;
	volatile int32_t x39 = -1;
	uint32_t t9 = 2013983U;

	t9 = (x37^(x38-(x39==x40)));

	if (t9 != 4294967254U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 6932888722053405881LLU;
	int64_t x42 = -1LL;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = 3031U;
	volatile uint64_t t10 = 4137072327430659478LLU;

	t10 = (x41^(x42-(x43==x44)));

	if (t10 != 11513855351656145734LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	int64_t x48 = 51734LL;
	volatile int64_t t11 = INT64_MAX;

	t11 = (x45^(x46-(x47==x48)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	uint8_t x50 = 13U;
	int8_t x51 = INT8_MAX;

	t12 = (x49^(x50-(x51==x52)));

	if (t12 != -14) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = 486305;
	int64_t x54 = INT64_MAX;
	static int32_t x55 = INT32_MIN;
	int32_t x56 = 136603;

	t13 = (x53^(x54-(x55==x56)));

	if (t13 != 9223372036854289502LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	static volatile int64_t x58 = -4938286LL;
	int32_t x60 = INT32_MIN;
	volatile int64_t t14 = -1492744LL;

	t14 = (x57^(x58-(x59==x60)));

	if (t14 != -4924883LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -1;
	uint16_t x62 = 6U;
	volatile int16_t x63 = -530;
	int32_t x64 = -25;
	int32_t t15 = 0;

	t15 = (x61^(x62-(x63==x64)));

	if (t15 != -7) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint16_t x66 = 0U;
	uint64_t x67 = 1LLU;
	volatile int32_t x68 = INT32_MIN;
	int32_t t16 = 339;

	t16 = (x65^(x66-(x67==x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	volatile int16_t x70 = INT16_MIN;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = -427473900;

	t17 = (x69^(x70-(x71==x72)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = -57320;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 2834594;

	t18 = (x73^(x74-(x75==x76)));

	if (t18 != -2147426329) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	uint64_t x79 = 225850285LLU;
	int64_t x80 = 19LL;
	volatile uint64_t t19 = 25383050766396LLU;

	t19 = (x77^(x78-(x79==x80)));

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	volatile int16_t x82 = INT16_MIN;
	volatile int8_t x83 = -1;
	uint16_t x84 = 202U;

	t20 = (x81^(x82-(x83==x84)));

	if (t20 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	int8_t x88 = -1;
	volatile uint32_t t21 = 5U;

	t21 = (x85^(x86-(x87==x88)));

	if (t21 != 2155059038U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MIN;
	volatile int32_t x90 = 702805600;
	uint8_t x92 = 0U;

	t22 = (x89^(x90-(x91==x92)));

	if (t22 != -702805536) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = UINT64_MAX;
	uint8_t x94 = UINT8_MAX;
	static uint16_t x95 = 30111U;
	uint8_t x96 = 28U;
	uint64_t t23 = 8LLU;

	t23 = (x93^(x94-(x95==x96)));

	if (t23 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 0U;
	int32_t x98 = -1;
	uint32_t x99 = 456405U;
	volatile uint32_t x100 = UINT32_MAX;
	volatile int32_t t24 = -114;

	t24 = (x97^(x98-(x99==x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t t25 = -90534;

	t25 = (x101^(x102-(x103==x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	static uint8_t x108 = 14U;
	volatile int32_t t26 = -186;

	t26 = (x105^(x106-(x107==x108)));

	if (t26 != 32640) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = 252U;
	uint16_t x111 = 2U;
	volatile uint16_t x112 = 683U;
	volatile uint32_t t27 = 2284308U;

	t27 = (x109^(x110-(x111==x112)));

	if (t27 != 4294967043U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	int8_t x114 = INT8_MIN;
	uint32_t x115 = 621279U;
	volatile uint64_t x116 = 17883917498LLU;
	int32_t t28 = -134664;

	t28 = (x113^(x114-(x115==x116)));

	if (t28 != -32641) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 1316;
	uint16_t x119 = UINT16_MAX;
	static volatile int32_t t29 = -50980;

	t29 = (x117^(x118-(x119==x120)));

	if (t29 != -31452) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x123 = INT64_MAX;
	static volatile int64_t x124 = INT64_MIN;
	int32_t t30 = 77343;

	t30 = (x121^(x122-(x123==x124)));

	if (t30 != -256) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 11881591;
	static int64_t x126 = INT64_MIN;
	uint32_t x127 = 60U;
	int16_t x128 = -1;

	t31 = (x125^(x126-(x127==x128)));

	if (t31 != -9223372036842894217LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 251U;
	uint64_t x130 = 5719451690LLU;
	volatile uint64_t t32 = 3312736301404763959LLU;

	t32 = (x129^(x130-(x131==x132)));

	if (t32 != 5719451857LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x135 = 5483267LL;
	static int32_t t33 = 853;

	t33 = (x133^(x134-(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x139 = 58894LLU;
	int64_t x140 = -1796348104684168111LL;

	t34 = (x137^(x138-(x139==x140)));

	if (t34 != 4272068866LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint8_t x142 = 0U;
	uint64_t x143 = 439509154LLU;
	volatile int64_t t35 = -754988LL;

	t35 = (x141^(x142-(x143==x144)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint16_t x146 = UINT16_MAX;
	volatile int32_t t36 = 52319624;

	t36 = (x145^(x146-(x147==x148)));

	if (t36 != -2147418113) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = -269;
	int64_t x150 = INT64_MAX;
	int8_t x151 = -1;
	uint32_t x152 = 3961758U;
	int64_t t37 = 8108LL;

	t37 = (x149^(x150-(x151==x152)));

	if (t37 != -9223372036854775540LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 437711U;
	static int32_t x154 = -1;
	static volatile uint64_t x155 = 45LLU;
	volatile int8_t x156 = 1;
	uint32_t t38 = 161U;

	t38 = (x153^(x154-(x155==x156)));

	if (t38 != 4294529584U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static volatile uint64_t x158 = 51920729LLU;
	volatile int64_t x159 = -1073911461594718986LL;
	int32_t x160 = INT32_MIN;
	volatile uint64_t t39 = 8371632727LLU;

	t39 = (x157^(x158-(x159==x160)));

	if (t39 != 9223372036906696537LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = 5;
	volatile int32_t x162 = 0;
	int64_t x163 = -1LL;
	volatile int32_t x164 = 9608;
	int32_t t40 = 6071702;

	t40 = (x161^(x162-(x163==x164)));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint64_t x166 = 254924172606LLU;
	uint64_t x167 = 1494LLU;
	uint64_t x168 = 1354596LLU;
	uint64_t t41 = 1247709667666014LLU;

	t41 = (x165^(x166-(x167==x168)));

	if (t41 != 18446743818785379009LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x169 = UINT64_MAX;
	static int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MAX;
	static int64_t x172 = -1LL;
	volatile uint64_t t42 = 18377139207LLU;

	t42 = (x169^(x170-(x171==x172)));

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 7U;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = UINT64_MAX;
	volatile int32_t t43 = 1534;

	t43 = (x173^(x174-(x175==x176)));

	if (t43 != -2147483641) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int8_t x178 = INT8_MIN;
	int32_t x179 = -1;
	uint64_t x180 = UINT64_MAX;
	int32_t t44 = -426781;

	t44 = (x177^(x178-(x179==x180)));

	if (t44 != 2147483519) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x184 = INT64_MAX;
	volatile int32_t t45 = 1;

	t45 = (x181^(x182-(x183==x184)));

	if (t45 != -9) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile int8_t x187 = 0;
	volatile uint64_t t46 = 9215LLU;

	t46 = (x185^(x186-(x187==x188)));

	if (t46 != 18446744003381345513LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 8127381192543829LLU;
	uint32_t x190 = 12494448U;
	uint64_t x191 = UINT64_MAX;
	uint64_t x192 = UINT64_MAX;

	t47 = (x189^(x190-(x191==x192)));

	if (t47 != 8127381182163002LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x195 = INT16_MIN;
	static volatile uint64_t t48 = 3124788652896708LLU;

	t48 = (x193^(x194-(x195==x196)));

	if (t48 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x199 = 94092468;
	uint64_t x200 = 146456270427134844LLU;
	int32_t t49 = 550;

	t49 = (x197^(x198-(x199==x200)));

	if (t49 != -65536) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	uint32_t x202 = UINT32_MAX;
	int16_t x203 = 5;
	uint32_t x204 = UINT32_MAX;
	static uint32_t t50 = 167857U;

	t50 = (x201^(x202-(x203==x204)));

	if (t50 != 127U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	int32_t x206 = 262047170;
	uint8_t x207 = 31U;
	volatile int32_t t51 = 124;

	t51 = (x205^(x206-(x207==x208)));

	if (t51 != -1885436478) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x209 = INT8_MAX;
	static uint64_t x210 = UINT64_MAX;
	int64_t x211 = INT64_MIN;
	uint64_t t52 = 34773374LLU;

	t52 = (x209^(x210-(x211==x212)));

	if (t52 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 1U;
	int32_t x214 = -37447849;
	int32_t x215 = -2935755;
	int32_t t53 = 132474;

	t53 = (x213^(x214-(x215==x216)));

	if (t53 != -37447850) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 1;
	uint32_t x218 = 256U;
	volatile int32_t x220 = -1608;
	volatile uint32_t t54 = 110U;

	t54 = (x217^(x218-(x219==x220)));

	if (t54 != 257U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -1LL;
	uint16_t x223 = 13U;
	volatile int64_t t55 = -455150706LL;

	t55 = (x221^(x222-(x223==x224)));

	if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 25U;
	uint8_t x226 = 23U;
	int16_t x228 = -2;
	static int32_t t56 = -132691664;

	t56 = (x225^(x226-(x227==x228)));

	if (t56 != 14) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x230 = UINT16_MAX;
	static uint8_t x231 = UINT8_MAX;

	t57 = (x229^(x230-(x231==x232)));

	if (t57 != 65280) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = 11051U;
	static int16_t x234 = INT16_MIN;
	static volatile int8_t x235 = 0;
	int8_t x236 = 1;
	volatile int32_t t58 = -1;

	t58 = (x233^(x234-(x235==x236)));

	if (t58 != -21717) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x237 = INT8_MIN;
	uint16_t x238 = 633U;

	t59 = (x237^(x238-(x239==x240)));

	if (t59 != -519) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x242 = 0U;
	int8_t x243 = INT8_MIN;
	static int32_t x244 = INT32_MIN;
	volatile int64_t t60 = -573LL;

	t60 = (x241^(x242-(x243==x244)));

	if (t60 != 837739LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	volatile int8_t x246 = 3;
	int64_t x247 = -1LL;
	int32_t t61 = 520579;

	t61 = (x245^(x246-(x247==x248)));

	if (t61 != -32765) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -128440LL;
	volatile int16_t x250 = -1;
	static int16_t x252 = INT16_MAX;
	int64_t t62 = -556340514972934LL;

	t62 = (x249^(x250-(x251==x252)));

	if (t62 != 128439LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	int32_t x254 = INT32_MAX;
	volatile uint64_t x255 = 897967143891924LLU;
	int32_t t63 = 10375;

	t63 = (x253^(x254-(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 5777U;
	int8_t x259 = -1;
	int8_t x260 = INT8_MAX;
	volatile uint32_t t64 = 12U;

	t64 = (x257^(x258-(x259==x260)));

	if (t64 != 4294961522U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 84U;
	int16_t x262 = INT16_MIN;
	static int16_t x263 = INT16_MIN;
	int64_t x264 = INT64_MAX;
	int32_t t65 = 53;

	t65 = (x261^(x262-(x263==x264)));

	if (t65 != -32684) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MAX;
	static volatile int32_t x267 = -1;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 55427;

	t66 = (x265^(x266-(x267==x268)));

	if (t66 != 2147450881) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = 1;
	int8_t x270 = -1;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;
	static int32_t t67 = 8;

	t67 = (x269^(x270-(x271==x272)));

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = UINT32_MAX;
	volatile uint8_t x276 = 3U;
	static uint32_t t68 = 109132U;

	t68 = (x273^(x274-(x275==x276)));

	if (t68 != 32767U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	volatile int32_t x278 = -1;
	int8_t x279 = INT8_MIN;
	volatile uint8_t x280 = UINT8_MAX;

	t69 = (x277^(x278-(x279==x280)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = INT64_MAX;
	volatile int32_t x283 = 18;
	int64_t x284 = -33455061LL;
	int64_t t70 = 106526032179537LL;

	t70 = (x281^(x282-(x283==x284)));

	if (t70 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = -57005;
	uint16_t x287 = 899U;
	volatile int32_t t71 = 1186280;

	t71 = (x285^(x286-(x287==x288)));

	if (t71 != -57044) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int32_t x290 = INT32_MAX;
	static int64_t x291 = -1LL;
	int32_t x292 = -6;
	volatile int64_t t72 = 918277870503095LL;

	t72 = (x289^(x290-(x291==x292)));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	static int32_t x296 = INT32_MAX;
	int32_t t73 = 0;

	t73 = (x293^(x294-(x295==x296)));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	uint8_t x298 = 24U;
	uint16_t x299 = 1676U;
	uint16_t x300 = 55U;
	volatile int32_t t74 = -115;

	t74 = (x297^(x298-(x299==x300)));

	if (t74 != -25) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MIN;
	uint8_t x304 = 36U;

	t75 = (x301^(x302-(x303==x304)));

	if (t75 != -30) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 1554032;

	t76 = (x305^(x306-(x307==x308)));

	if (t76 != 32640) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int8_t x311 = -50;
	int16_t x312 = INT16_MAX;
	int64_t t77 = -65451106LL;

	t77 = (x309^(x310-(x311==x312)));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MIN;
	uint8_t x315 = 0U;
	uint16_t x316 = 518U;
	static int32_t t78 = 3354;

	t78 = (x313^(x314-(x315==x316)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = UINT64_MAX;
	static int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	volatile uint64_t t79 = 90404700519LLU;

	t79 = (x317^(x318-(x319==x320)));

	if (t79 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 20LLU;
	int64_t x322 = INT64_MAX;
	static uint16_t x323 = 1809U;
	uint32_t x324 = 22U;
	static uint64_t t80 = 2272267LLU;

	t80 = (x321^(x322-(x323==x324)));

	if (t80 != 9223372036854775787LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MIN;
	int8_t x328 = INT8_MIN;
	volatile int64_t t81 = -155LL;

	t81 = (x325^(x326-(x327==x328)));

	if (t81 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int32_t x330 = 64128277;
	int16_t x332 = -1;
	volatile uint64_t t82 = 3LLU;

	t82 = (x329^(x330-(x331==x332)));

	if (t82 != 18446744073645423338LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 38;
	int32_t x334 = 62;
	int8_t x336 = 14;
	volatile int32_t t83 = -479588026;

	t83 = (x333^(x334-(x335==x336)));

	if (t83 != 24) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MAX;
	uint8_t x340 = UINT8_MAX;
	volatile uint64_t t84 = 9010353LLU;

	t84 = (x337^(x338-(x339==x340)));

	if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = -3352686;
	uint16_t x342 = UINT16_MAX;
	volatile int8_t x343 = 1;
	static int64_t x344 = 1152476469491620102LL;
	static int32_t t85 = -458711182;

	t85 = (x341^(x342-(x343==x344)));

	if (t85 != -3397523) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MIN;
	uint8_t x346 = 3U;
	static volatile uint16_t x347 = 8U;
	int8_t x348 = -1;
	volatile int32_t t86 = 10;

	t86 = (x345^(x346-(x347==x348)));

	if (t86 != -32765) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = 2653U;
	int8_t x352 = -1;
	static uint32_t t87 = 1539U;

	t87 = (x349^(x350-(x351==x352)));

	if (t87 != 2147486300U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = -1LL;
	static volatile int64_t t88 = 11LL;

	t88 = (x353^(x354-(x355==x356)));

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x358 = -1;
	static uint32_t x359 = 1U;
	int16_t x360 = 1;
	volatile int64_t t89 = 127297LL;

	t89 = (x357^(x358-(x359==x360)));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	volatile int8_t x362 = 12;
	uint8_t x363 = 14U;
	volatile int32_t x364 = -6;

	t90 = (x361^(x362-(x363==x364)));

	if (t90 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -23;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MAX;
	static int32_t t91 = -20874337;

	t91 = (x365^(x366-(x367==x368)));

	if (t91 != 32745) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	static int8_t x372 = -30;
	volatile int32_t t92 = -732;

	t92 = (x369^(x370-(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = 18;
	volatile int32_t x374 = INT32_MAX;
	static int16_t x375 = INT16_MAX;
	int64_t x376 = 15LL;
	volatile int32_t t93 = -137;

	t93 = (x373^(x374-(x375==x376)));

	if (t93 != 2147483629) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	volatile int32_t t94 = INT32_MAX;

	t94 = (x377^(x378-(x379==x380)));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = -1LL;
	volatile int64_t t95 = 72871LL;

	t95 = (x381^(x382-(x383==x384)));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 316569956111LLU;
	uint16_t x386 = UINT16_MAX;
	uint8_t x387 = 0U;
	int32_t x388 = INT32_MIN;
	uint64_t t96 = 952652688LLU;

	t96 = (x385^(x386-(x387==x388)));

	if (t96 != 316569997552LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MAX;
	volatile int64_t x391 = INT64_MIN;
	int32_t x392 = INT32_MAX;
	int32_t t97 = -47201;

	t97 = (x389^(x390-(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 1U;
	uint8_t x394 = UINT8_MAX;
	static volatile uint8_t x395 = 9U;
	volatile int32_t t98 = 0;

	t98 = (x393^(x394-(x395==x396)));

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = 1410;
	int8_t x399 = -1;
	uint32_t x400 = 0U;
	volatile uint32_t t99 = 52U;

	t99 = (x397^(x398-(x399==x400)));

	if (t99 != 38356U) { NG(); } else { ; }
	
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

