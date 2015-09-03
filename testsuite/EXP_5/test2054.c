#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x8 = INT64_MIN;
int16_t x10 = -1;
int8_t x16 = INT8_MIN;
int64_t t3 = 38752682887007759LL;
uint8_t x18 = UINT8_MAX;
uint8_t x19 = 89U;
static volatile int16_t x25 = -1;
static int8_t x26 = 59;
int16_t x27 = INT16_MIN;
volatile int16_t x31 = INT16_MIN;
int32_t x41 = INT32_MIN;
static int8_t x48 = INT8_MAX;
volatile int64_t x58 = -1LL;
int64_t x60 = INT64_MAX;
int8_t x75 = INT8_MAX;
uint8_t x76 = UINT8_MAX;
int32_t x84 = INT32_MIN;
uint32_t x88 = UINT32_MAX;
uint64_t t21 = 226547967667000LLU;
static volatile uint32_t x95 = UINT32_MAX;
int16_t x101 = -1033;
uint32_t t24 = 2206U;
uint64_t x106 = 7826429792113LLU;
int8_t x121 = INT8_MIN;
static volatile uint32_t x127 = 96826U;
int8_t x129 = 1;
uint8_t x133 = UINT8_MAX;
volatile int16_t x135 = INT16_MIN;
uint8_t x148 = UINT8_MAX;
uint8_t x149 = 95U;
int8_t x150 = -57;
int16_t x156 = -1;
uint16_t x160 = 247U;
int16_t x164 = INT16_MIN;
uint32_t x165 = UINT32_MAX;
volatile uint16_t x166 = UINT16_MAX;
volatile int64_t t40 = 254319137869930706LL;
uint16_t x185 = 3U;
volatile uint64_t t41 = 130255587LLU;
volatile uint64_t t46 = 8132117107513LLU;
static uint8_t x212 = 1U;
uint8_t x215 = 27U;
volatile int64_t t49 = -47396554099047LL;
static uint32_t x224 = 15095U;
volatile int64_t t50 = 611428028693870LL;
uint32_t x225 = 24430U;
int8_t x228 = INT8_MIN;
volatile uint32_t t51 = 1397U;
int32_t x231 = INT32_MIN;
volatile int64_t x235 = INT64_MAX;
volatile int64_t t53 = -172223313602LL;
uint32_t x238 = 1009U;
int32_t x240 = -164;
uint64_t x241 = 4238975112274657LLU;
static int32_t x245 = -1;
volatile int64_t t56 = 37328632925LL;
static int8_t x249 = 0;
uint16_t x250 = 3U;
uint8_t x251 = 51U;
static int8_t x252 = -1;
uint8_t x266 = UINT8_MAX;
static volatile int64_t x278 = -51425LL;
static int8_t x280 = -11;
int32_t x287 = INT32_MAX;
int32_t x310 = INT32_MIN;
static volatile uint32_t t72 = 0U;
int8_t x318 = -1;
uint64_t t73 = 291702541186175462LLU;
volatile int16_t x321 = INT16_MIN;
uint16_t x324 = UINT16_MAX;
int64_t x325 = -1LL;
int32_t x333 = -1;
volatile uint32_t t80 = 118U;
volatile uint64_t x350 = 38165750379LLU;
int32_t x353 = -1817;
int8_t x358 = INT8_MAX;
uint8_t x362 = UINT8_MAX;
uint64_t x371 = UINT64_MAX;
static volatile uint64_t t85 = 5550LLU;
int8_t x382 = INT8_MIN;
int64_t x384 = 31754673120164LL;
int16_t x386 = INT16_MAX;
int32_t x393 = INT32_MAX;
int32_t x395 = 1149428;
static volatile int16_t x399 = INT16_MIN;
uint32_t x403 = 15597265U;
uint32_t t92 = 10U;
static int16_t x405 = -289;
int8_t x406 = INT8_MIN;
int8_t x409 = INT8_MIN;
uint64_t x413 = 278238082422881LLU;
volatile int64_t x419 = INT64_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = 3236U;
	uint32_t x3 = UINT32_MAX;
	int8_t x4 = INT8_MAX;
	volatile uint32_t t0 = 2642U;

	t0 = (x1^((x2^x3)-x4));

	if (t0 != 29404U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -573676;
	int64_t x6 = -113049224517588732LL;
	int64_t x7 = 27431851LL;
	int64_t t1 = -176814LL;

	t1 = (x5^((x6^x7)-x8));

	if (t1 != -9110322812359588421LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint64_t x11 = 286LLU;
	volatile uint64_t x12 = 2796291LLU;
	volatile uint64_t t2 = 1849966602264642267LLU;

	t2 = (x9^((x10^x11)-x12));

	if (t2 != 2796577LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MAX;
	int8_t x15 = -1;

	t3 = (x13^((x14^x15)-x16));

	if (t3 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MAX;
	volatile uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -1041420348;

	t4 = (x17^((x18^x19)-x20));

	if (t4 != -32680) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 79U;
	int16_t x22 = -1;
	int16_t x23 = -865;
	static int16_t x24 = 155;
	volatile int32_t t5 = -610184;

	t5 = (x21^((x22^x23)-x24));

	if (t5 != 650) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 1LLU;

	t6 = (x25^((x26^x27)-x28));

	if (t6 != 32707LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	int16_t x32 = -39;
	volatile int32_t t7 = -353485142;

	t7 = (x29^((x30^x31)-x32));

	if (t7 != -89) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 79366890;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MIN;
	volatile int8_t x36 = INT8_MAX;
	int64_t t8 = -5035771807270LL;

	t8 = (x33^((x34^x35)-x36));

	if (t8 != -9223372032639175318LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MIN;
	volatile int8_t x40 = INT8_MIN;
	int64_t t9 = -1658LL;

	t9 = (x37^((x38^x39)-x40));

	if (t9 != -32640LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = INT64_MAX;
	static uint16_t x43 = 13490U;
	uint8_t x44 = UINT8_MAX;
	int64_t t10 = 0LL;

	t10 = (x41^((x42^x43)-x44));

	if (t10 != -9223372034707305906LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 1368U;
	int8_t x46 = 1;
	static int64_t x47 = INT64_MAX;
	int64_t t11 = -201914968LL;

	t11 = (x45^((x46^x47)-x48));

	if (t11 != 9223372036854774311LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 62LL;
	uint32_t x54 = 28469459U;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 4043329363717LLU;
	volatile uint64_t t12 = 0LLU;

	t12 = (x53^((x54^x55)-x56));

	if (t12 != 9223367993553881584LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MIN;
	static int16_t x59 = INT16_MIN;
	volatile int64_t t13 = 3820843435LL;

	t13 = (x57^((x58^x59)-x60));

	if (t13 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 121649009LL;
	uint16_t x62 = 591U;
	uint16_t x63 = 3U;
	uint64_t x64 = 37181407LLU;
	uint64_t t14 = 1447980985LLU;

	t14 = (x61^((x62^x63)-x64));

	if (t14 != 18446744073617841436LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int16_t x66 = INT16_MIN;
	static int16_t x67 = INT16_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int64_t t15 = 25LL;

	t15 = (x65^((x66^x67)-x68));

	if (t15 != 65535LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -12;
	uint8_t x70 = 9U;
	int32_t x71 = -1;
	int64_t x72 = 75920963LL;
	volatile int64_t t16 = 52747197233079623LL;

	t16 = (x69^((x70^x71)-x72));

	if (t16 != 75920967LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 23584897921716LL;
	volatile int8_t x74 = INT8_MAX;
	int64_t t17 = 0LL;

	t17 = (x73^((x74^x75)-x76));

	if (t17 != -23584897921611LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x77 = 17U;
	uint32_t x78 = 124U;
	uint64_t x79 = 4062LLU;
	int8_t x80 = -1;
	volatile uint64_t t18 = 4139999050446730LLU;

	t18 = (x77^((x78^x79)-x80));

	if (t18 != 4018LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = -1;
	static volatile int8_t x83 = 1;
	int32_t t19 = -247658;

	t19 = (x81^((x82^x83)-x84));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x85 = UINT64_MAX;
	int8_t x86 = -28;
	int16_t x87 = INT16_MIN;
	volatile uint64_t t20 = 450426162LLU;

	t20 = (x85^((x86^x87)-x88));

	if (t20 != 18446744073709518874LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -744870;
	static uint64_t x91 = 8525696989LLU;
	int32_t x92 = 1395755;

	t21 = (x89^((x90^x91)-x92));

	if (t21 != 9223372028328419676LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MAX;
	int32_t x94 = INT32_MIN;
	uint64_t x96 = 59LLU;
	volatile uint64_t t22 = 6450LLU;

	t22 = (x93^((x94^x95)-x96));

	if (t22 != 59LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = 0U;
	int64_t x98 = -5989450487884567LL;
	static volatile int32_t x99 = INT32_MIN;
	int64_t x100 = -1LL;
	int64_t t23 = 1367755551862883014LL;

	t23 = (x97^((x98^x99)-x100));

	if (t23 != 5989451671344362LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x102 = 14668572U;
	int32_t x103 = INT32_MIN;
	uint32_t x104 = 26646U;

	t24 = (x101^((x102^x103)-x104));

	if (t24 != 2132840689U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = INT16_MIN;
	int32_t x107 = -1;
	uint8_t x108 = 4U;
	uint64_t t25 = 34698963014504LLU;

	t25 = (x105^((x106^x107)-x108));

	if (t25 != 7826429784202LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 155012787989LLU;
	int64_t x110 = 27LL;
	int64_t x111 = -1LL;
	int16_t x112 = -1;
	volatile uint64_t t26 = 22388LLU;

	t26 = (x109^((x110^x111)-x112));

	if (t26 != 18446743918696763632LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	static int32_t x118 = 493;
	static int64_t x119 = -2049984976077618121LL;
	uint64_t x120 = 1LLU;
	uint64_t t27 = 8LLU;

	t27 = (x117^((x118^x119)-x120));

	if (t27 != 7173387060777158105LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = -1;
	int8_t x123 = 12;
	int16_t x124 = INT16_MIN;
	int32_t t28 = 1032302;

	t28 = (x121^((x122^x123)-x124));

	if (t28 != -32653) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 80919651;
	uint8_t x126 = UINT8_MAX;
	int8_t x128 = 0;
	volatile uint32_t t29 = 1459165471U;

	t29 = (x125^((x126^x127)-x128));

	if (t29 != 80987814U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x130 = 1121U;
	static volatile uint64_t x131 = UINT64_MAX;
	volatile int64_t x132 = 4322141305759910190LL;
	uint64_t t30 = 239116595524LLU;

	t30 = (x129^((x130^x131)-x132));

	if (t30 != 14124602767949640305LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x134 = UINT16_MAX;
	int8_t x136 = INT8_MAX;
	volatile int32_t t31 = -9;

	t31 = (x133^((x134^x135)-x136));

	if (t31 != -32897) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 93U;
	int64_t x138 = -1LL;
	static uint32_t x139 = UINT32_MAX;
	int8_t x140 = -6;
	volatile int64_t t32 = -5743803938253LL;

	t32 = (x137^((x138^x139)-x140));

	if (t32 != -4294967205LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x141 = 20U;
	int8_t x142 = INT8_MIN;
	int32_t x143 = INT32_MAX;
	static volatile int8_t x144 = INT8_MIN;
	volatile int32_t t33 = -87;

	t33 = (x141^((x142^x143)-x144));

	if (t33 != -2147483413) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -2068876023628LL;
	uint64_t x146 = 472738559526LLU;
	int32_t x147 = INT32_MAX;
	volatile uint64_t t34 = 226051438LLU;

	t34 = (x145^((x146^x147)-x148));

	if (t34 != 18446742356326031470LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x151 = -207468680;
	int64_t x152 = -1LL;
	volatile int64_t t35 = 6857739LL;

	t35 = (x149^((x150^x151)-x152));

	if (t35 != 207468703LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	volatile int32_t x154 = -1;
	int64_t x155 = -2279659462352994808LL;
	static int64_t t36 = -1798567712170109LL;

	t36 = (x153^((x154^x155)-x156));

	if (t36 != -6943712574501781000LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = 364380395;
	uint16_t x158 = UINT16_MAX;
	uint32_t x159 = 233036511U;
	volatile uint32_t t37 = 534151246U;

	t37 = (x157^((x158^x159)-x160));

	if (t37 != 408626370U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = 1278949360239503341LL;
	volatile int64_t x162 = INT64_MAX;
	volatile int16_t x163 = INT16_MIN;
	int64_t t38 = 2610142716LL;

	t38 = (x161^((x162^x163)-x164));

	if (t38 != -7944422676615325678LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x167 = -2;
	int32_t x168 = -1;
	uint32_t t39 = 827334U;

	t39 = (x165^((x166^x167)-x168));

	if (t39 != 65533U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = 0;
	int64_t x170 = INT64_MAX;
	volatile int8_t x171 = INT8_MIN;
	static int8_t x172 = INT8_MIN;

	t40 = (x169^((x170^x171)-x172));

	if (t40 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x186 = UINT64_MAX;
	uint8_t x187 = 17U;
	uint32_t x188 = 383U;

	t41 = (x185^((x186^x187)-x188));

	if (t41 != 18446744073709551212LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = INT8_MIN;
	uint16_t x190 = 14U;
	static int8_t x191 = -1;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t42 = -60038;

	t42 = (x189^((x190^x191)-x192));

	if (t42 != 65650) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = -1;
	int8_t x194 = -1;
	int32_t x195 = 4868;
	int64_t x196 = 8LL;
	volatile int64_t t43 = -5842256189LL;

	t43 = (x193^((x194^x195)-x196));

	if (t43 != 4876LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x197 = INT64_MIN;
	volatile int8_t x198 = INT8_MIN;
	uint64_t x199 = 1010026LLU;
	int16_t x200 = INT16_MIN;
	uint64_t t44 = 6922374497125076LLU;

	t44 = (x197^((x198^x199)-x200));

	if (t44 != 9223372036853798634LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = 210584443;
	static int64_t x202 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	volatile uint32_t x204 = UINT32_MAX;
	volatile int64_t t45 = 179553536978792766LL;

	t45 = (x201^((x202^x203)-x204));

	if (t45 != 9223372030622909306LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = UINT64_MAX;
	static volatile uint32_t x206 = UINT32_MAX;
	volatile int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;

	t46 = (x205^((x206^x207)-x208));

	if (t46 != 9223372032559775744LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 7691126704888160668LLU;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = UINT16_MAX;
	uint64_t t47 = 495305011746983213LLU;

	t47 = (x209^((x210^x211)-x212));

	if (t47 != 10755617368821358178LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x213 = UINT32_MAX;
	static uint8_t x214 = UINT8_MAX;
	volatile int32_t x216 = -24;
	uint32_t t48 = 43U;

	t48 = (x213^((x214^x215)-x216));

	if (t48 != 4294967043U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x217 = INT8_MIN;
	volatile int64_t x218 = -8783623LL;
	uint32_t x219 = UINT32_MAX;
	uint16_t x220 = 7U;

	t49 = (x217^((x218^x219)-x220));

	if (t49 != 4286183807LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = -14;
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;

	t50 = (x221^((x222^x223)-x224));

	if (t50 != -9223372036854727941LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x226 = INT16_MIN;
	uint16_t x227 = 4U;

	t51 = (x225^((x226^x227)-x228));

	if (t51 != 4294959082U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x229 = -1;
	uint32_t x230 = 154U;
	int16_t x232 = -2838;
	uint32_t t52 = 15966466U;

	t52 = (x229^((x230^x231)-x232));

	if (t52 != 2147480655U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = -7168258351LL;
	volatile uint16_t x234 = UINT16_MAX;
	int32_t x236 = -1;

	t53 = (x233^((x234^x235)-x236));

	if (t53 != -9223372029686575408LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = 1;
	uint64_t x239 = 4LLU;
	uint64_t t54 = 274449366LLU;

	t54 = (x237^((x238^x239)-x240));

	if (t54 != 1176LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MIN;
	static int8_t x244 = INT8_MIN;
	static uint64_t t55 = 10181528718043202LLU;

	t55 = (x241^((x242^x243)-x244));

	if (t55 != 9219133062204842593LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x246 = 351779119U;
	int64_t x247 = -22961LL;
	int32_t x248 = INT32_MIN;

	t56 = (x245^((x246^x247)-x248));

	if (t56 != -1795694433LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t t57 = 52439952;

	t57 = (x249^((x250^x251)-x252));

	if (t57 != 49) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x253 = INT64_MAX;
	static uint64_t x254 = 36522304121815LLU;
	static int64_t x255 = -26884LL;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t58 = 51444LLU;

	t58 = (x253^((x254^x255)-x256));

	if (t58 != 9223408559158870740LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = INT32_MIN;
	volatile int32_t x259 = INT32_MAX;
	uint32_t x260 = 8158U;
	uint32_t t59 = 0U;

	t59 = (x257^((x258^x259)-x260));

	if (t59 != 4294959198U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x261 = -1;
	int64_t x262 = -235842773737985138LL;
	int16_t x263 = INT16_MIN;
	static uint32_t x264 = UINT32_MAX;
	static volatile int64_t t60 = -2050859520457448LL;

	t60 = (x261^((x262^x263)-x264));

	if (t60 != -235842769443007376LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x265 = 0U;
	static uint64_t x267 = 10240751187299690LLU;
	uint32_t x268 = 18801U;
	static volatile uint64_t t61 = 395LLU;

	t61 = (x265^((x266^x267)-x268));

	if (t61 != 10240751187280932LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MAX;
	static int32_t x270 = -1;
	uint16_t x271 = 2246U;
	static uint32_t x272 = 213916255U;
	uint32_t t62 = 355711899U;

	t62 = (x269^((x270^x271)-x272));

	if (t62 != 2361402149U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = -2;
	uint32_t x274 = 4U;
	volatile int16_t x275 = -1;
	static uint64_t x276 = UINT64_MAX;
	volatile uint64_t t63 = 303088617067LLU;

	t63 = (x273^((x274^x275)-x276));

	if (t63 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	volatile int16_t x279 = INT16_MIN;
	int64_t t64 = -1LL;

	t64 = (x277^((x278^x279)-x280));

	if (t64 != -51414LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = 1U;
	int16_t x282 = 0;
	uint32_t x283 = UINT32_MAX;
	volatile uint64_t x284 = 13510LLU;
	static volatile uint64_t t65 = 0LLU;

	t65 = (x281^((x282^x283)-x284));

	if (t65 != 4294953784LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = UINT64_MAX;
	volatile uint8_t x286 = 13U;
	uint16_t x288 = 7U;
	uint64_t t66 = 553900951089741LLU;

	t66 = (x285^((x286^x287)-x288));

	if (t66 != 18446744071562067988LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = 885474645140LL;
	uint32_t x290 = UINT32_MAX;
	uint16_t x291 = 81U;
	int8_t x292 = -1;
	int64_t t67 = -135129993392884LL;

	t67 = (x289^((x290^x291)-x292));

	if (t67 != 888346848059LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MAX;
	uint16_t x294 = UINT16_MAX;
	uint16_t x295 = 1U;
	uint64_t x296 = 464498LLU;
	uint64_t t68 = 665199LLU;

	t68 = (x293^((x294^x295)-x296));

	if (t68 != 18446744071562466931LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = INT64_MAX;
	uint8_t x302 = UINT8_MAX;
	uint16_t x303 = 373U;
	int64_t x304 = -1LL;
	volatile int64_t t69 = -90291193930LL;

	t69 = (x301^((x302^x303)-x304));

	if (t69 != 9223372036854775412LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = -27;
	int64_t x306 = INT64_MAX;
	volatile int64_t x307 = INT64_MIN;
	uint64_t x308 = UINT64_MAX;
	uint64_t t70 = 29073LLU;

	t70 = (x305^((x306^x307)-x308));

	if (t70 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x309 = INT32_MIN;
	static int8_t x311 = -31;
	int16_t x312 = INT16_MAX;
	volatile int32_t t71 = 27011;

	t71 = (x309^((x310^x311)-x312));

	if (t71 != -32798) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x313 = 923U;
	int16_t x314 = -21;
	uint32_t x315 = 1U;
	static int16_t x316 = -2984;

	t72 = (x313^((x314^x315)-x316));

	if (t72 != 2057U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x317 = -11;
	uint64_t x319 = 3414658846999LLU;
	uint32_t x320 = 0U;

	t73 = (x317^((x318^x319)-x320));

	if (t73 != 3414658847005LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x322 = INT32_MIN;
	uint64_t x323 = UINT64_MAX;
	static uint64_t t74 = 7554358919827LLU;

	t74 = (x321^((x322^x323)-x324));

	if (t74 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x326 = INT8_MAX;
	uint16_t x327 = 23U;
	int8_t x328 = INT8_MIN;
	volatile int64_t t75 = 16813154299596LL;

	t75 = (x325^((x326^x327)-x328));

	if (t75 != -233LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	static volatile int8_t x330 = -1;
	uint16_t x331 = 546U;
	static int64_t x332 = INT64_MIN;
	int64_t t76 = 1040055623163329350LL;

	t76 = (x329^((x330^x331)-x332));

	if (t76 != -9223372034707292707LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x334 = 5423026985465LLU;
	static uint64_t x335 = 250670LLU;
	uint8_t x336 = UINT8_MAX;
	volatile uint64_t t77 = 241388LLU;

	t77 = (x333^((x334^x335)-x336));

	if (t77 != 18446738650682422823LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x337 = 61495U;
	static int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MIN;
	volatile int16_t x340 = -26;
	int64_t t78 = -24LL;

	t78 = (x337^((x338^x339)-x340));

	if (t78 != 9223372036854738989LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x341 = UINT64_MAX;
	volatile int64_t x342 = -5821401735LL;
	int16_t x343 = 3;
	volatile int32_t x344 = -125;
	uint64_t t79 = 63LLU;

	t79 = (x341^((x342^x343)-x344));

	if (t79 != 5821401608LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x345 = 106U;
	int16_t x346 = INT16_MIN;
	uint32_t x347 = 5784U;
	static uint8_t x348 = 16U;

	t80 = (x345^((x346^x347)-x348));

	if (t80 != 4294940386U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MIN;
	static volatile int64_t x351 = 101259421LL;
	static uint16_t x352 = UINT16_MAX;
	volatile uint64_t t81 = 11981LLU;

	t81 = (x349^((x350^x351)-x352));

	if (t81 != 9223372075053431543LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	volatile int64_t t82 = -565321454942249354LL;

	t82 = (x353^((x354^x355)-x356));

	if (t82 != -34585LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = -1;
	uint32_t x359 = 4448U;
	int64_t x360 = -1LL;
	static volatile int64_t t83 = 10599775192LL;

	t83 = (x357^((x358^x359)-x360));

	if (t83 != -4385LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x361 = -1;
	static int16_t x363 = INT16_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t84 = 136338986;

	t84 = (x361^((x362^x363)-x364));

	if (t84 != -2147451136) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x369 = UINT64_MAX;
	uint8_t x370 = 1U;
	int16_t x372 = INT16_MAX;

	t85 = (x369^((x370^x371)-x372));

	if (t85 != 32768LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x373 = -1;
	uint64_t x374 = 3LLU;
	int64_t x375 = INT64_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	uint64_t t86 = 89675312LLU;

	t86 = (x373^((x374^x375)-x376));

	if (t86 != 9223372036854841339LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	volatile int64_t x379 = -1LL;
	int32_t x380 = -3;
	volatile int64_t t87 = 834LL;

	t87 = (x377^((x378^x379)-x380));

	if (t87 != -2147516414LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = -1;
	int16_t x383 = -8;
	int64_t t88 = 2562928681792143279LL;

	t88 = (x381^((x382^x383)-x384));

	if (t88 != 31754673120043LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x385 = UINT16_MAX;
	static uint64_t x387 = UINT64_MAX;
	volatile uint64_t x388 = UINT64_MAX;
	uint64_t t89 = 1062249473912LLU;

	t89 = (x385^((x386^x387)-x388));

	if (t89 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x394 = 3695039089338733LLU;
	uint64_t x396 = UINT64_MAX;
	static uint64_t t90 = 13496707249LLU;

	t90 = (x393^((x394^x395)-x396));

	if (t90 != 3695038407614309LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 714447LLU;
	int16_t x398 = 3084;
	volatile int64_t x400 = -1LL;
	static volatile uint64_t t91 = 90LLU;

	t91 = (x397^((x398^x399)-x400));

	if (t91 != 18446744073708858050LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x401 = 0;
	static int16_t x402 = INT16_MIN;
	static volatile int32_t x404 = -1;

	t92 = (x401^((x402^x403)-x404));

	if (t92 != 4279402194U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x407 = UINT32_MAX;
	volatile int16_t x408 = 25;
	volatile uint32_t t93 = 10U;

	t93 = (x405^((x406^x407)-x408));

	if (t93 != 4294966969U) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x410 = -1;
	uint32_t x411 = 3326U;
	uint8_t x412 = 5U;
	static uint32_t t94 = 17169U;

	t94 = (x409^((x410^x411)-x412));

	if (t94 != 3452U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x414 = INT64_MAX;
	volatile int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MAX;
	volatile uint64_t t95 = 15336LLU;

	t95 = (x413^((x414^x415)-x416));

	if (t95 != 18446465835627128801LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = INT16_MIN;
	uint64_t x418 = 31521256892528325LLU;
	uint16_t x420 = 1567U;
	volatile uint64_t t96 = 30688LLU;

	t96 = (x417^((x418^x419)-x420));

	if (t96 != 9191850779962273958LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = 2302478LL;
	int8_t x422 = -3;
	int8_t x423 = INT8_MIN;
	static int16_t x424 = -19;
	static int64_t t97 = 12462871896386852LL;

	t97 = (x421^((x422^x423)-x424));

	if (t97 != 2302622LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = -41;
	static uint8_t x430 = 3U;
	int16_t x431 = -1;
	int8_t x432 = 4;
	volatile int32_t t98 = -260799;

	t98 = (x429^((x430^x431)-x432));

	if (t98 != 47) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x433 = -3;
	int8_t x434 = INT8_MIN;
	int16_t x435 = 6;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t99 = 3544940427095749LLU;

	t99 = (x433^((x434^x435)-x436));

	if (t99 != 122LLU) { NG(); } else { ; }
	
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

