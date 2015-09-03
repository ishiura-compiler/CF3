#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x13 = 719999503566929635LL;
static int16_t x16 = INT16_MIN;
int32_t t2 = 183960017;
volatile int32_t t3 = -11;
static volatile int32_t x26 = -1;
uint64_t x30 = 13LLU;
static volatile uint32_t x32 = 2165U;
int32_t x38 = INT32_MIN;
int32_t x39 = INT32_MAX;
static int64_t t9 = 2433LL;
int64_t x49 = -1LL;
static volatile int16_t x52 = 4481;
int16_t x70 = 38;
static uint8_t x72 = 93U;
static int16_t x76 = -1;
volatile uint32_t x80 = UINT32_MAX;
volatile uint64_t x81 = UINT64_MAX;
int32_t x82 = -5647853;
volatile uint32_t x84 = 347U;
int64_t x88 = INT64_MIN;
int8_t x89 = INT8_MIN;
static volatile uint32_t t20 = 57486U;
static volatile int16_t x101 = INT16_MAX;
uint32_t x108 = 487U;
volatile int64_t t23 = 26628654192727LL;
int16_t x111 = INT16_MAX;
uint32_t x114 = 30U;
uint32_t x116 = UINT32_MAX;
uint64_t t26 = 44987035LLU;
int32_t x135 = 81736;
int16_t x150 = INT16_MIN;
volatile uint16_t x152 = UINT16_MAX;
int8_t x158 = INT8_MIN;
volatile int64_t t32 = 320LL;
int16_t x168 = -1;
uint16_t x172 = 197U;
static uint64_t t35 = 4057614420LLU;
volatile uint16_t x173 = UINT16_MAX;
static int8_t x182 = INT8_MIN;
static int64_t x184 = -4220646185241LL;
int64_t x188 = -1LL;
uint64_t x191 = 6936189001433986LLU;
uint32_t x196 = 26169U;
int8_t x208 = INT8_MIN;
int8_t x223 = -1;
int32_t x228 = INT32_MAX;
uint8_t x229 = UINT8_MAX;
volatile uint16_t x231 = 5384U;
uint32_t x240 = UINT32_MAX;
uint32_t t48 = 50U;
static int16_t x242 = -1;
int16_t x244 = -1;
int32_t x256 = -1;
int64_t x258 = INT64_MIN;
volatile uint64_t t53 = 73989787787587LLU;
int8_t x263 = 1;
int64_t t54 = -786501955326LL;
uint64_t x273 = 30965188742119005LLU;
int16_t x283 = 5;
static int16_t x284 = 62;
uint8_t x289 = UINT8_MAX;
uint64_t t59 = 1632728826258LLU;
uint32_t x294 = UINT32_MAX;
volatile int64_t t60 = 1080274601255368LL;
volatile uint32_t x297 = 90229157U;
int64_t x299 = -1LL;
volatile uint64_t t62 = 23699435LLU;
static int16_t x312 = INT16_MAX;
uint32_t x318 = 14U;
static uint64_t x321 = UINT64_MAX;
volatile uint32_t x326 = 63572480U;
volatile uint64_t t68 = 24316LLU;
volatile int32_t t69 = -32615713;
static uint64_t x338 = 1703774683749593010LLU;
uint32_t x344 = 5438196U;
uint32_t t71 = 3944570U;
volatile int32_t x352 = 27974;
int8_t x358 = INT8_MIN;
uint32_t x362 = 519566071U;
int32_t x364 = -3395090;
static int8_t x367 = -1;
static volatile uint64_t t77 = 822858593LLU;
int16_t x372 = 33;
volatile int32_t t79 = 35519;
int16_t x382 = INT16_MIN;
uint64_t t81 = 3LLU;
volatile uint32_t x405 = 3141U;
int8_t x406 = 0;
static int8_t x414 = INT8_MIN;
static int32_t x422 = INT32_MAX;
volatile int32_t x424 = -1;
int64_t x430 = 15720096902210528LL;
int8_t x431 = 3;
static int64_t x439 = INT64_MAX;
uint8_t x440 = 4U;
uint16_t x442 = 2286U;
static int64_t x443 = -733739511233247LL;
int64_t x461 = INT64_MIN;
static int32_t x462 = -6435967;
int16_t x463 = 236;
volatile int16_t x473 = -1778;
uint64_t t98 = 8889592512406LLU;
uint32_t x482 = UINT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	uint8_t x2 = 1U;
	volatile int8_t x3 = -1;
	int8_t x4 = -1;
	int64_t t0 = -1627225863LL;

	t0 = (((x1^x2)/x3)*x4);

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x14 = 3253U;
	uint64_t x15 = 5247759LLU;
	uint64_t t1 = 3771895658267792000LLU;

	t1 = (((x13^x14)/x15)*x16);

	if (t1 != 18442248260595253248LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x17 = 26U;
	static int8_t x18 = 1;
	uint16_t x19 = UINT16_MAX;
	static int8_t x20 = 0;

	t2 = (((x17^x18)/x19)*x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = 1;
	static int32_t x23 = -1;
	int8_t x24 = INT8_MIN;

	t3 = (((x21^x22)/x23)*x24);

	if (t3 != -4194176) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = 416722697927LL;
	int64_t x27 = INT64_MIN;
	static uint8_t x28 = 25U;
	volatile int64_t t4 = 5745729675493287LL;

	t4 = (((x25^x26)/x27)*x28);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1;
	int64_t x31 = INT64_MIN;
	volatile uint64_t t5 = 7657600652160177367LLU;

	t5 = (((x29^x30)/x31)*x32);

	if (t5 != 2165LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	static volatile uint64_t x34 = 25729012167887LLU;
	volatile uint8_t x35 = 25U;
	static int32_t x36 = INT32_MIN;
	volatile uint64_t t6 = 356703603693613LLU;

	t6 = (((x33^x34)/x35)*x36);

	if (t6 != 16601160748609044480LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 239575LL;
	int32_t x40 = -709;
	static volatile int64_t t7 = 2437LL;

	t7 = (((x37^x38)/x39)*x40);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	int32_t t8 = 315;

	t8 = (((x41^x42)/x43)*x44);

	if (t8 != 2130739455) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = 34U;
	uint32_t x46 = 130624180U;
	volatile uint16_t x47 = 1995U;
	int64_t x48 = -5333982359LL;

	t9 = (((x45^x46)/x47)*x48);

	if (t9 != -349242494955525LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = 7;
	int16_t x51 = INT16_MAX;
	int64_t t10 = -23LL;

	t10 = (((x49^x50)/x51)*x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x54 = INT16_MAX;
	volatile int32_t x55 = INT32_MIN;
	static uint32_t x56 = UINT32_MAX;
	static uint64_t t11 = 6LLU;

	t11 = (((x53^x54)/x55)*x56);

	if (t11 != 4294967295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = UINT16_MAX;
	volatile int8_t x58 = 1;
	uint16_t x59 = 63U;
	int32_t x60 = -1;
	volatile int32_t t12 = -21702;

	t12 = (((x57^x58)/x59)*x60);

	if (t12 != -1040) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x65 = UINT16_MAX;
	uint64_t x66 = UINT64_MAX;
	uint8_t x67 = 3U;
	uint32_t x68 = UINT32_MAX;
	static volatile uint64_t t13 = 725311408130LLU;

	t13 = (((x65^x66)/x67)*x68);

	if (t13 != 18446650248717336576LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	static int32_t x71 = INT32_MIN;
	static volatile uint64_t t14 = 238068302LLU;

	t14 = (((x69^x70)/x71)*x72);

	if (t14 != 93LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = 1;
	int8_t x74 = INT8_MIN;
	volatile int8_t x75 = INT8_MIN;
	volatile int32_t t15 = -1;

	t15 = (((x73^x74)/x75)*x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 5544U;
	int16_t x78 = INT16_MIN;
	int16_t x79 = -6;
	volatile uint32_t t16 = 14U;

	t16 = (((x77^x78)/x79)*x80);

	if (t16 != 4294962759U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x83 = -27;
	static volatile uint64_t t17 = 3897922517970106LLU;

	t17 = (((x81^x82)/x83)*x84);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x85 = UINT64_MAX;
	static uint16_t x86 = 836U;
	static volatile int8_t x87 = INT8_MIN;
	uint64_t t18 = 52293378676521245LLU;

	t18 = (((x85^x86)/x87)*x88);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;
	static int32_t x92 = -1;
	int64_t t19 = -2879574721LL;

	t19 = (((x89^x90)/x91)*x92);

	if (t19 != 4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x93 = 46U;
	uint16_t x94 = 4588U;
	int16_t x95 = INT16_MAX;
	uint32_t x96 = 6U;

	t20 = (((x93^x94)/x95)*x96);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x97 = -1;
	static int8_t x98 = -1;
	uint8_t x99 = 1U;
	int8_t x100 = -27;
	int32_t t21 = 0;

	t21 = (((x97^x98)/x99)*x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x102 = 20241U;
	int8_t x103 = INT8_MIN;
	volatile int32_t x104 = -1;
	uint32_t t22 = 2530U;

	t22 = (((x101^x102)/x103)*x104);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 87783;
	static int64_t x106 = INT64_MIN;
	volatile int16_t x107 = INT16_MIN;

	t23 = (((x105^x106)/x107)*x108);

	if (t23 != 137078313658088011LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 28938U;
	int16_t x110 = 171;
	uint16_t x112 = UINT16_MAX;
	static volatile int32_t t24 = 280788617;

	t24 = (((x109^x110)/x111)*x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	int8_t x115 = -10;
	volatile uint32_t t25 = 177086702U;

	t25 = (((x113^x114)/x115)*x116);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -1LL;
	uint8_t x118 = UINT8_MAX;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = -1;

	t26 = (((x117^x118)/x119)*x120);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x121 = -75;
	int8_t x122 = INT8_MAX;
	int32_t x123 = -4221;
	static int16_t x124 = 9;
	int32_t t27 = 6115177;

	t27 = (((x121^x122)/x123)*x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	static uint16_t x130 = UINT16_MAX;
	volatile int64_t x131 = INT64_MIN;
	static int32_t x132 = -1;
	int64_t t28 = -539952626444717065LL;

	t28 = (((x129^x130)/x131)*x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x133 = INT8_MAX;
	volatile int32_t x134 = -1;
	int8_t x136 = INT8_MAX;
	static int32_t t29 = -782012;

	t29 = (((x133^x134)/x135)*x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = 9158025169446195834LLU;
	static int8_t x147 = -1;
	uint32_t x148 = UINT32_MAX;
	uint64_t t30 = 127007560079273LLU;

	t30 = (((x145^x146)/x147)*x148);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = 3803;
	volatile int32_t x151 = INT32_MAX;
	static int32_t t31 = -4199524;

	t31 = (((x149^x150)/x151)*x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = 53953;
	static volatile int64_t x159 = INT64_MIN;
	static int16_t x160 = -1;

	t32 = (((x157^x158)/x159)*x160);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x161 = 7U;
	int16_t x162 = 4;
	uint8_t x163 = 2U;
	volatile uint8_t x164 = UINT8_MAX;
	volatile int32_t t33 = -402;

	t33 = (((x161^x162)/x163)*x164);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x165 = 1U;
	int16_t x166 = INT16_MIN;
	volatile int8_t x167 = INT8_MAX;
	volatile int32_t t34 = -45268934;

	t34 = (((x165^x166)/x167)*x168);

	if (t34 != 258) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x169 = 4LLU;
	int8_t x170 = -6;
	int64_t x171 = INT64_MIN;

	t35 = (((x169^x170)/x171)*x172);

	if (t35 != 197LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x174 = 6;
	int16_t x175 = INT16_MAX;
	uint8_t x176 = 1U;
	int32_t t36 = 24793668;

	t36 = (((x173^x174)/x175)*x176);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x177 = -1;
	uint8_t x178 = UINT8_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = -1;
	int32_t t37 = 0;

	t37 = (((x177^x178)/x179)*x180);

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -3LL;
	static volatile int32_t x183 = INT32_MIN;
	int64_t t38 = 335766911512931482LL;

	t38 = (((x181^x182)/x183)*x184);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x185 = 11;
	static int32_t x186 = 2953;
	int32_t x187 = -598856779;
	static volatile int64_t t39 = 14881862168815472LL;

	t39 = (((x185^x186)/x187)*x188);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = 24315815U;
	int32_t x190 = INT32_MIN;
	int32_t x192 = 12111;
	volatile uint64_t t40 = 25698203LLU;

	t40 = (((x189^x190)/x191)*x192);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = 50U;
	uint8_t x194 = 3U;
	int16_t x195 = -1;
	volatile uint32_t t41 = 108267U;

	t41 = (((x193^x194)/x195)*x196);

	if (t41 != 4293685015U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = 487005895361673913LL;
	static uint64_t x207 = 115795957LLU;
	volatile uint64_t t42 = 9LLU;

	t42 = (((x205^x206)/x207)*x208);

	if (t42 != 18446743535376813440LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x213 = 5U;
	volatile uint16_t x214 = 707U;
	volatile uint32_t x215 = 1971U;
	int8_t x216 = INT8_MIN;
	volatile uint32_t t43 = 181340U;

	t43 = (((x213^x214)/x215)*x216);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x221 = INT64_MIN;
	uint32_t x222 = 7671730U;
	uint64_t x224 = UINT64_MAX;
	static uint64_t t44 = 7243165636768220LLU;

	t44 = (((x221^x222)/x223)*x224);

	if (t44 != 9223372036862447538LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x225 = 92U;
	int64_t x226 = -25428LL;
	static int16_t x227 = INT16_MAX;
	volatile int64_t t45 = 1637190594268LL;

	t45 = (((x225^x226)/x227)*x228);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x230 = INT16_MAX;
	int32_t x232 = 5076;
	volatile int32_t t46 = -6713;

	t46 = (((x229^x230)/x231)*x232);

	if (t46 != 30456) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x233 = UINT64_MAX;
	static volatile int64_t x234 = -1LL;
	int32_t x235 = INT32_MIN;
	volatile int16_t x236 = INT16_MIN;
	uint64_t t47 = 2041791630592744LLU;

	t47 = (((x233^x234)/x235)*x236);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x237 = 19447367U;
	volatile int32_t x238 = INT32_MIN;
	uint32_t x239 = 2652U;

	t48 = (((x237^x238)/x239)*x240);

	if (t48 != 4294150203U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x241 = UINT16_MAX;
	static int32_t x243 = INT32_MIN;
	int32_t t49 = -6341794;

	t49 = (((x241^x242)/x243)*x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x245 = INT8_MIN;
	static int32_t x246 = 48760633;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = UINT32_MAX;
	uint32_t t50 = 405736U;

	t50 = (((x245^x246)/x247)*x248);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x250 = INT64_MIN;
	volatile uint8_t x251 = 34U;
	static uint8_t x252 = 0U;
	int64_t t51 = -547419526483LL;

	t51 = (((x249^x250)/x251)*x252);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x253 = INT8_MIN;
	uint16_t x254 = UINT16_MAX;
	int16_t x255 = -1;
	static int32_t t52 = 479601887;

	t52 = (((x253^x254)/x255)*x256);

	if (t52 != -65409) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = INT32_MIN;
	uint64_t x259 = 473457503810944LLU;
	uint32_t x260 = 73938425U;

	t53 = (((x257^x258)/x259)*x260);

	if (t53 != 1440320519000LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x261 = -420427733;
	int64_t x262 = -248LL;
	int32_t x264 = INT32_MIN;

	t54 = (((x261^x262)/x263)*x264);

	if (t54 != -902861299531120640LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = -1;
	int32_t x270 = 130397;
	int16_t x271 = -3700;
	int8_t x272 = INT8_MIN;
	volatile int32_t t55 = 171630356;

	t55 = (((x269^x270)/x271)*x272);

	if (t55 != -4480) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x274 = 62279673LL;
	int32_t x275 = INT32_MAX;
	int32_t x276 = INT32_MAX;
	uint64_t t56 = 65340326265LLU;

	t56 = (((x273^x274)/x275)*x276);

	if (t56 != 30965187328866983LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x278 = INT32_MAX;
	int32_t x279 = -1;
	int16_t x280 = -1;
	volatile uint64_t t57 = 890194828LLU;

	t57 = (((x277^x278)/x279)*x280);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = -5;
	int32_t x282 = -1;
	volatile int32_t t58 = -7680;

	t58 = (((x281^x282)/x283)*x284);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x290 = UINT64_MAX;
	uint64_t x291 = 312129410255793175LLU;
	static uint32_t x292 = 17U;

	t59 = (((x289^x290)/x291)*x292);

	if (t59 != 1003LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x293 = -1;
	int64_t x295 = INT64_MAX;
	int16_t x296 = INT16_MIN;

	t60 = (((x293^x294)/x295)*x296);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x298 = -154LL;
	static int32_t x300 = INT32_MIN;
	static int64_t t61 = -116473781707LL;

	t61 = (((x297^x298)/x299)*x300);

	if (t61 != -193765415892025344LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x305 = UINT16_MAX;
	uint64_t x306 = 187512317LLU;
	int16_t x307 = -1;
	int64_t x308 = INT64_MIN;

	t62 = (((x305^x306)/x307)*x308);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x309 = 16U;
	int16_t x310 = INT16_MAX;
	uint64_t x311 = UINT64_MAX;
	volatile uint64_t t63 = 5426765LLU;

	t63 = (((x309^x310)/x311)*x312);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x313 = 248423U;
	static int16_t x314 = -1;
	static int16_t x315 = -47;
	int16_t x316 = INT16_MIN;
	volatile uint32_t t64 = 559248373U;

	t64 = (((x313^x314)/x315)*x316);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x317 = -1;
	uint16_t x319 = 12014U;
	uint32_t x320 = UINT32_MAX;
	volatile uint32_t t65 = 146006809U;

	t65 = (((x317^x318)/x319)*x320);

	if (t65 != 4294609800U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x322 = INT16_MIN;
	static volatile uint64_t x323 = 5LLU;
	int16_t x324 = INT16_MIN;
	uint64_t t66 = 61127897603886239LLU;

	t66 = (((x321^x322)/x323)*x324);

	if (t66 != 18446744073494822912LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x325 = 7U;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = -2;
	uint64_t t67 = 483636660998144LLU;

	t67 = (((x325^x326)/x327)*x328);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x329 = UINT64_MAX;
	uint8_t x330 = 7U;
	static uint8_t x331 = 62U;
	uint64_t x332 = UINT64_MAX;

	t68 = (((x329^x330)/x331)*x332);

	if (t68 != 18149215943488429816LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x333 = 3;
	volatile int8_t x334 = -27;
	int8_t x335 = INT8_MIN;
	int32_t x336 = -1;

	t69 = (((x333^x334)/x335)*x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x337 = INT8_MIN;
	volatile int64_t x339 = INT64_MIN;
	uint16_t x340 = 30408U;
	volatile uint64_t t70 = 2976407127042LLU;

	t70 = (((x337^x338)/x339)*x340);

	if (t70 != 30408LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = -1;
	uint16_t x342 = 9399U;
	uint16_t x343 = 65U;

	t71 = (((x341^x342)/x343)*x344);

	if (t71 != 3511867072U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = INT32_MIN;
	volatile int64_t x346 = INT64_MAX;
	static volatile uint32_t x347 = 888877U;
	int8_t x348 = INT8_MAX;
	volatile int64_t t72 = 337LL;

	t72 = (((x345^x346)/x347)*x348);

	if (t72 != -1317806905126156LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = INT16_MIN;
	volatile int64_t x350 = -1LL;
	static int64_t x351 = INT64_MIN;
	static int64_t t73 = 506LL;

	t73 = (((x349^x350)/x351)*x352);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = 6701U;
	int64_t x354 = -13LL;
	int8_t x355 = INT8_MIN;
	int32_t x356 = 431;
	int64_t t74 = -7093LL;

	t74 = (((x353^x354)/x355)*x356);

	if (t74 != 22412LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = -109;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MAX;
	int64_t t75 = 687LL;

	t75 = (((x357^x358)/x359)*x360);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x361 = -3;
	uint64_t x363 = 2011110552826289LLU;
	static uint64_t t76 = 0LLU;

	t76 = (((x361^x362)/x363)*x364);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x365 = UINT16_MAX;
	static uint16_t x366 = 107U;
	uint64_t x368 = 44345LLU;

	t77 = (((x365^x366)/x367)*x368);

	if (t77 != 18446744070808146956LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x369 = 21;
	int8_t x370 = -30;
	uint8_t x371 = UINT8_MAX;
	int32_t t78 = 6305;

	t78 = (((x369^x370)/x371)*x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = -1;
	uint16_t x379 = UINT16_MAX;
	int32_t x380 = INT32_MAX;

	t79 = (((x377^x378)/x379)*x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x381 = 1U;
	volatile int32_t x383 = INT32_MIN;
	uint32_t x384 = 1353U;
	uint32_t t80 = 1U;

	t80 = (((x381^x382)/x383)*x384);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x385 = INT64_MAX;
	int32_t x386 = INT32_MAX;
	int16_t x387 = -4093;
	uint64_t x388 = UINT64_MAX;

	t81 = (((x385^x386)/x387)*x388);

	if (t81 != 2253450289447176LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x389 = 22;
	int16_t x390 = 3;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 3U;
	static volatile int32_t t82 = -12;

	t82 = (((x389^x390)/x391)*x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = -26;
	volatile uint16_t x402 = UINT16_MAX;
	uint64_t x403 = UINT64_MAX;
	volatile uint32_t x404 = 11U;
	volatile uint64_t t83 = 1678383LLU;

	t83 = (((x401^x402)/x403)*x404);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x407 = INT64_MAX;
	int8_t x408 = 1;
	volatile int64_t t84 = -65698944484LL;

	t84 = (((x405^x406)/x407)*x408);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x409 = UINT32_MAX;
	int16_t x410 = -1;
	static uint8_t x411 = UINT8_MAX;
	int32_t x412 = INT32_MIN;
	uint32_t t85 = 110605376U;

	t85 = (((x409^x410)/x411)*x412);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x413 = UINT64_MAX;
	int32_t x415 = INT32_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile uint64_t t86 = 1LLU;

	t86 = (((x413^x414)/x415)*x416);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x417 = 6U;
	int16_t x418 = 7;
	uint32_t x419 = 102U;
	volatile int64_t x420 = INT64_MIN;
	static volatile int64_t t87 = -7482856708470LL;

	t87 = (((x417^x418)/x419)*x420);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x421 = INT64_MIN;
	uint32_t x423 = 1000195316U;
	volatile int64_t t88 = -180263889110749LL;

	t88 = (((x421^x422)/x423)*x424);

	if (t88 != 9221570914LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = 4810451818LL;
	static uint8_t x432 = 1U;
	int64_t t89 = 4537017299961978056LL;

	t89 = (((x429^x430)/x431)*x432);

	if (t89 != 5240033829394478LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x437 = 4091;
	static volatile int8_t x438 = 63;
	int64_t t90 = 69182697853LL;

	t90 = (((x437^x438)/x439)*x440);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x441 = 58;
	static int64_t x444 = 361758531702375189LL;
	static int64_t t91 = -25468030LL;

	t91 = (((x441^x442)/x443)*x444);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x445 = 2LLU;
	uint32_t x446 = 789974693U;
	int64_t x447 = INT64_MIN;
	static int8_t x448 = 19;
	uint64_t t92 = 142429721907709182LLU;

	t92 = (((x445^x446)/x447)*x448);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = INT64_MAX;
	volatile int8_t x450 = 10;
	static int64_t x451 = INT64_MAX;
	int8_t x452 = -1;
	static int64_t t93 = 27138577012432LL;

	t93 = (((x449^x450)/x451)*x452);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x453 = 493;
	int32_t x454 = 179;
	uint64_t x455 = 662950396283LLU;
	int8_t x456 = INT8_MIN;
	uint64_t t94 = 395786615361260213LLU;

	t94 = (((x453^x454)/x455)*x456);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x464 = -1LL;
	int64_t t95 = -36418LL;

	t95 = (((x461^x462)/x463)*x464);

	if (t95 != -39082084901899745LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x469 = -1;
	uint8_t x470 = 6U;
	static uint64_t x471 = 143899248735LLU;
	int16_t x472 = 1;
	volatile uint64_t t96 = 8176861255LLU;

	t96 = (((x469^x470)/x471)*x472);

	if (t96 != 128192080LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x474 = INT8_MIN;
	uint32_t x475 = 1453497U;
	uint16_t x476 = 6057U;
	volatile uint32_t t97 = 30606U;

	t97 = (((x473^x474)/x475)*x476);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x477 = 831LL;
	static uint64_t x478 = 31LLU;
	int16_t x479 = INT16_MAX;
	volatile int64_t x480 = -1LL;

	t98 = (((x477^x478)/x479)*x480);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x481 = UINT16_MAX;
	static int8_t x483 = INT8_MIN;
	int64_t x484 = -1LL;
	volatile int64_t t99 = 1230976367430225015LL;

	t99 = (((x481^x482)/x483)*x484);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

