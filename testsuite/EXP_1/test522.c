#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 5;
static int8_t x16 = INT8_MIN;
int8_t x20 = INT8_MIN;
int32_t x23 = -69512;
static int32_t t5 = 78490;
int8_t x36 = INT8_MAX;
int64_t t8 = -33235019LL;
uint32_t x38 = 151239247U;
volatile uint32_t t9 = 71766U;
int32_t x43 = 371716;
int32_t x44 = -32893;
uint64_t x51 = 2082316778168502LLU;
volatile uint64_t t12 = 426892332770933415LLU;
uint32_t x59 = 57365203U;
int16_t x64 = INT16_MAX;
volatile int64_t t15 = -492LL;
int16_t x65 = INT16_MIN;
volatile uint8_t x67 = 89U;
int16_t x69 = -1;
uint64_t x72 = UINT64_MAX;
int16_t x76 = -1;
int8_t x86 = -1;
static volatile uint16_t x99 = 48U;
volatile int64_t t23 = 92575671LL;
int32_t x105 = 10;
int16_t x110 = 7;
int32_t x111 = INT32_MIN;
static volatile int32_t x115 = INT32_MAX;
volatile int32_t t29 = 3892;
uint64_t t30 = 2188102992788187498LLU;
volatile int64_t x133 = 10660623LL;
volatile int16_t x137 = INT16_MIN;
int8_t x138 = INT8_MAX;
int16_t x147 = INT16_MIN;
uint64_t x155 = 315LLU;
int64_t x163 = -1LL;
uint32_t x177 = 1974U;
static int64_t x183 = 17434183793825LL;
uint64_t t42 = 3947515636273801LLU;
static int8_t x185 = -1;
uint64_t x188 = UINT64_MAX;
volatile uint64_t t43 = 14007374LLU;
uint16_t x189 = 350U;
int64_t x190 = INT64_MIN;
static int8_t x192 = 0;
int32_t x205 = 1053955199;
static volatile int8_t x209 = 0;
volatile uint32_t t50 = 1U;
int64_t x226 = INT64_MIN;
volatile int16_t x229 = 1;
uint64_t x235 = UINT64_MAX;
volatile int8_t x236 = -23;
static uint64_t t54 = 42LLU;
int8_t x243 = INT8_MIN;
int8_t x246 = INT8_MAX;
uint64_t x250 = 140406184247972LLU;
volatile uint64_t t58 = 15750732416LLU;
static int16_t x255 = 12649;
volatile uint64_t t59 = 32271155606LLU;
volatile uint64_t t61 = 0LLU;
volatile int16_t x277 = INT16_MIN;
int32_t x293 = INT32_MAX;
uint64_t x295 = 664496886LLU;
uint64_t t65 = 1171948125115141949LLU;
static uint8_t x298 = 1U;
static int32_t t66 = -7042505;
static uint64_t x302 = 6LLU;
volatile uint64_t t67 = 1LLU;
uint32_t x306 = 1025413U;
uint64_t t70 = 3271037LLU;
int32_t x322 = 2032812;
volatile int16_t x337 = INT16_MAX;
int64_t x340 = INT64_MIN;
uint64_t t77 = 2869054LLU;
int16_t x363 = 1189;
static int16_t x364 = -178;
uint16_t x366 = 7315U;
int64_t x367 = INT64_MIN;
static int8_t x375 = INT8_MIN;
int16_t x376 = INT16_MIN;
int32_t t82 = -2;
int16_t x377 = -11;
volatile int32_t t83 = -1713;
uint32_t x401 = UINT32_MAX;
int64_t x402 = INT64_MAX;
uint8_t x405 = 0U;
static int8_t x409 = 1;
int64_t x414 = INT64_MIN;
static uint8_t x415 = UINT8_MAX;
uint64_t x416 = 106993805771004998LLU;
volatile uint32_t x424 = 649152266U;
uint64_t x431 = 5601525417400220144LLU;
int8_t x432 = -1;
uint64_t t98 = 301087052LLU;
uint32_t x445 = UINT32_MAX;
volatile int8_t x447 = 49;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	uint64_t x3 = 47125LLU;
	static uint64_t x4 = 3988272LLU;
	volatile uint64_t t0 = 449LLU;

	t0 = (((x1/x2)-x3)-x4);

	if (t0 != 18446744073705516219LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	int32_t x6 = INT32_MIN;
	static volatile int16_t x7 = 6526;
	uint16_t x8 = 41U;
	int32_t t1 = 162388;

	t1 = (((x5/x6)-x7)-x8);

	if (t1 != -6567) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 5;
	int64_t x10 = -1LL;
	uint8_t x11 = UINT8_MAX;
	int32_t x12 = -169;
	int64_t t2 = 1813662LL;

	t2 = (((x9/x10)-x11)-x12);

	if (t2 != -91LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 0LLU;
	static int32_t x14 = INT32_MAX;
	int64_t x15 = 13LL;
	volatile uint64_t t3 = 13556957LLU;

	t3 = (((x13/x14)-x15)-x16);

	if (t3 != 115LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	static volatile int8_t x18 = INT8_MIN;
	int8_t x19 = 4;
	int32_t t4 = 133473966;

	t4 = (((x17/x18)-x19)-x20);

	if (t4 != 124) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint8_t x22 = 77U;
	int8_t x24 = INT8_MIN;

	t5 = (((x21/x22)-x23)-x24);

	if (t5 != 69639) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -4;
	uint16_t x26 = UINT16_MAX;
	volatile int32_t x27 = 213524080;
	int16_t x28 = -1;
	volatile int32_t t6 = 24305031;

	t6 = (((x25/x26)-x27)-x28);

	if (t6 != -213524079) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 1U;
	volatile uint32_t x30 = UINT32_MAX;
	int8_t x31 = 5;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = -4819715LL;

	t7 = (((x29/x30)-x31)-x32);

	if (t7 != -9223372032559808516LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = -1LL;
	int32_t x35 = -25;

	t8 = (((x33/x34)-x35)-x36);

	if (t8 != 32666LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 0;
	int32_t x39 = -316614454;
	int8_t x40 = INT8_MIN;

	t9 = (((x37/x38)-x39)-x40);

	if (t9 != 316614582U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	static volatile int8_t x42 = INT8_MIN;
	volatile int32_t t10 = -41882;

	t10 = (((x41/x42)-x43)-x44);

	if (t10 != -338823) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int64_t x46 = INT64_MIN;
	static int16_t x47 = -1;
	static uint8_t x48 = UINT8_MAX;
	int64_t t11 = 23251532071LL;

	t11 = (((x45/x46)-x47)-x48);

	if (t11 != -254LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 10884841U;
	int16_t x50 = 1094;
	int32_t x52 = INT32_MIN;

	t12 = (((x49/x50)-x51)-x52);

	if (t12 != 18444661759078876711LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MAX;
	static int64_t x54 = INT64_MAX;
	int8_t x55 = 1;
	volatile int64_t x56 = -1LL;
	int64_t t13 = 130723728369LL;

	t13 = (((x53/x54)-x55)-x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MIN;
	volatile int64_t x58 = -35312799999LL;
	volatile int8_t x60 = INT8_MAX;
	static volatile int64_t t14 = 134002384989472417LL;

	t14 = (((x57/x58)-x59)-x60);

	if (t14 != 203825287LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	static volatile int16_t x62 = -1;
	static int64_t x63 = 16538LL;

	t15 = (((x61/x62)-x63)-x64);

	if (t15 != -16537LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MIN;
	int8_t x68 = 25;
	volatile int32_t t16 = 8814875;

	t16 = (((x65/x66)-x67)-x68);

	if (t16 != -114) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	volatile int16_t x71 = INT16_MIN;
	static uint64_t t17 = 6329LLU;

	t17 = (((x69/x70)-x71)-x72);

	if (t17 != 32769LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	int64_t x74 = -1LL;
	int16_t x75 = INT16_MAX;
	int64_t t18 = 17525316LL;

	t18 = (((x73/x74)-x75)-x76);

	if (t18 != -32765LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	static uint64_t x78 = 34713767533010352LLU;
	volatile int32_t x79 = 6340;
	int8_t x80 = INT8_MAX;
	static volatile uint64_t t19 = 2833989739863121280LLU;

	t19 = (((x77/x78)-x79)-x80);

	if (t19 != 18446744073709545680LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = -1;
	static int8_t x87 = -1;
	volatile int16_t x88 = -6280;
	volatile int32_t t20 = 23;

	t20 = (((x85/x86)-x87)-x88);

	if (t20 != 6282) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 0U;
	int32_t x90 = -75517721;
	uint64_t x91 = 481242LLU;
	volatile uint8_t x92 = UINT8_MAX;
	uint64_t t21 = 2790424196549315LLU;

	t21 = (((x89/x90)-x91)-x92);

	if (t21 != 18446744073709070119LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	static int64_t x98 = 139715741877580LL;
	uint8_t x100 = 48U;
	volatile int64_t t22 = -9297602922LL;

	t22 = (((x97/x98)-x99)-x100);

	if (t22 != -66111LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	static int64_t x102 = 146041LL;
	int64_t x103 = INT64_MIN;
	uint16_t x104 = UINT16_MAX;

	t23 = (((x101/x102)-x103)-x104);

	if (t23 != 9223372036854695569LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x106 = -263;
	volatile uint8_t x107 = UINT8_MAX;
	uint32_t x108 = UINT32_MAX;
	uint32_t t24 = 5427767U;

	t24 = (((x105/x106)-x107)-x108);

	if (t24 != 4294967042U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = INT64_MIN;
	int8_t x112 = INT8_MAX;
	volatile int64_t t25 = 3475943151128544075LL;

	t25 = (((x109/x110)-x111)-x112);

	if (t25 != -1317624574546055880LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 1U;
	int64_t x114 = INT64_MIN;
	int8_t x116 = INT8_MAX;
	volatile int64_t t26 = 17985243562324431LL;

	t26 = (((x113/x114)-x115)-x116);

	if (t26 != -2147483774LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x117 = UINT32_MAX;
	uint64_t x118 = 1995093298984070179LLU;
	static uint8_t x119 = UINT8_MAX;
	static volatile int64_t x120 = 3679LL;
	volatile uint64_t t27 = 3899311878LLU;

	t27 = (((x117/x118)-x119)-x120);

	if (t27 != 18446744073709547682LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -3;
	volatile uint16_t x122 = 1U;
	uint16_t x123 = 2523U;
	volatile int8_t x124 = -1;
	volatile int32_t t28 = -48;

	t28 = (((x121/x122)-x123)-x124);

	if (t28 != -2525) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = -8;
	volatile uint8_t x127 = UINT8_MAX;
	int16_t x128 = INT16_MIN;

	t29 = (((x125/x126)-x127)-x128);

	if (t29 != 32529) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x129 = 10098882037180028LLU;
	uint64_t x130 = 11419300369LLU;
	int64_t x131 = -1LL;
	int64_t x132 = INT64_MAX;

	t30 = (((x129/x130)-x131)-x132);

	if (t30 != 9223372036855660179LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = -116832;
	volatile int16_t x135 = 0;
	int8_t x136 = INT8_MIN;
	static volatile int64_t t31 = 3542642679590969427LL;

	t31 = (((x133/x134)-x135)-x136);

	if (t31 != 37LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x139 = 58LLU;
	uint64_t x140 = 17234932072LLU;
	volatile uint64_t t32 = 3076LLU;

	t32 = (((x137/x138)-x139)-x140);

	if (t32 != 18446744056474619228LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = 1452402;
	static uint64_t x142 = 17889LLU;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = -1;
	volatile uint64_t t33 = 1660217575905LLU;

	t33 = (((x141/x142)-x143)-x144);

	if (t33 != 83LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 0;
	volatile uint64_t x146 = 8214536420008256664LLU;
	static int8_t x148 = 1;
	uint64_t t34 = 12402570201143LLU;

	t34 = (((x145/x146)-x147)-x148);

	if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 1U;
	volatile int32_t x150 = INT32_MIN;
	uint8_t x151 = 4U;
	uint64_t x152 = 77866352511LLU;
	volatile uint64_t t35 = 19055356LLU;

	t35 = (((x149/x150)-x151)-x152);

	if (t35 != 18446743995843199101LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	static int64_t x154 = -1LL;
	volatile uint16_t x156 = UINT16_MAX;
	uint64_t t36 = 3033407804694508026LLU;

	t36 = (((x153/x154)-x155)-x156);

	if (t36 != 18446744073709485767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	uint64_t x158 = 102216780448516LLU;
	static int16_t x159 = 3;
	static volatile int16_t x160 = INT16_MIN;
	volatile uint64_t t37 = 15LLU;

	t37 = (((x157/x158)-x159)-x160);

	if (t37 != 122998LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MAX;
	volatile int64_t x162 = INT64_MAX;
	int8_t x164 = INT8_MIN;
	int64_t t38 = 230697LL;

	t38 = (((x161/x162)-x163)-x164);

	if (t38 != 129LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x165 = 20;
	static int32_t x166 = INT32_MIN;
	uint8_t x167 = 7U;
	static int16_t x168 = -1;
	volatile int32_t t39 = -745342229;

	t39 = (((x165/x166)-x167)-x168);

	if (t39 != -6) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 0U;
	int16_t x170 = -5;
	static uint16_t x171 = 10910U;
	int8_t x172 = -1;
	volatile int32_t t40 = -149276907;

	t40 = (((x169/x170)-x171)-x172);

	if (t40 != -10909) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x178 = INT8_MIN;
	uint8_t x179 = UINT8_MAX;
	uint64_t x180 = 29437754LLU;
	uint64_t t41 = 0LLU;

	t41 = (((x177/x178)-x179)-x180);

	if (t41 != 4265529287LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 17LLU;
	volatile int64_t x182 = INT64_MIN;
	int32_t x184 = -1;

	t42 = (((x181/x182)-x183)-x184);

	if (t42 != 18446726639525757792LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x186 = 73LL;
	int32_t x187 = -1;

	t43 = (((x185/x186)-x187)-x188);

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x191 = 802449153LL;
	static int64_t t44 = 501515856703LL;

	t44 = (((x189/x190)-x191)-x192);

	if (t44 != -802449153LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = INT64_MIN;
	volatile int16_t x194 = INT16_MAX;
	uint32_t x195 = 1U;
	int16_t x196 = 5654;
	int64_t t45 = -29719237803LL;

	t45 = (((x193/x194)-x195)-x196);

	if (t45 != -281483566913055LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 9167280LLU;
	static uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	static int32_t x200 = INT32_MIN;
	static volatile uint64_t t46 = 866034LLU;

	t46 = (((x197/x198)-x199)-x200);

	if (t46 != 2147483915LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = INT64_MAX;
	uint64_t x203 = 527LLU;
	int16_t x204 = INT16_MIN;
	volatile uint64_t t47 = 348737141433LLU;

	t47 = (((x201/x202)-x203)-x204);

	if (t47 != 32241LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = INT16_MIN;
	int32_t x207 = -341100;
	volatile int16_t x208 = INT16_MAX;
	int32_t t48 = -29695;

	t48 = (((x205/x206)-x207)-x208);

	if (t48 != 276169) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x210 = 10473248087826LLU;
	uint32_t x211 = 11U;
	int32_t x212 = INT32_MAX;
	uint64_t t49 = 198500325LLU;

	t49 = (((x209/x210)-x211)-x212);

	if (t49 != 18446744071562067958LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x213 = UINT32_MAX;
	int8_t x214 = -1;
	int16_t x215 = INT16_MAX;
	static int32_t x216 = -3534;

	t50 = (((x213/x214)-x215)-x216);

	if (t50 != 4294938064U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = 22U;
	uint8_t x222 = 102U;
	volatile int32_t x223 = -4730694;
	int32_t x224 = -1;
	static volatile int32_t t51 = -2473448;

	t51 = (((x221/x222)-x223)-x224);

	if (t51 != 4730695) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = -1;
	int16_t x227 = -1;
	int8_t x228 = INT8_MIN;
	int64_t t52 = -125LL;

	t52 = (((x225/x226)-x227)-x228);

	if (t52 != 129LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x230 = -64403LL;
	volatile int32_t x231 = 7369066;
	static uint64_t x232 = 115LLU;
	uint64_t t53 = 162326LLU;

	t53 = (((x229/x230)-x231)-x232);

	if (t53 != 18446744073702182435LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = INT16_MIN;
	static int32_t x234 = INT32_MIN;

	t54 = (((x233/x234)-x235)-x236);

	if (t54 != 24LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x237 = UINT16_MAX;
	int32_t x238 = INT32_MIN;
	static volatile int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MAX;
	int32_t t55 = -3;

	t55 = (((x237/x238)-x239)-x240);

	if (t55 != -32894) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = 369;
	volatile int16_t x242 = -1;
	int8_t x244 = INT8_MIN;
	int32_t t56 = 823364816;

	t56 = (((x241/x242)-x243)-x244);

	if (t56 != -113) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x245 = 38;
	uint32_t x247 = 158458024U;
	int64_t x248 = -1LL;
	volatile int64_t t57 = 31LL;

	t57 = (((x245/x246)-x247)-x248);

	if (t57 != 4136509273LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = 0;
	volatile int16_t x251 = INT16_MIN;
	int64_t x252 = -1LL;

	t58 = (((x249/x250)-x251)-x252);

	if (t58 != 32769LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x253 = -1LL;
	uint64_t x254 = 27763LLU;
	uint16_t x256 = 0U;

	t59 = (((x253/x254)-x255)-x256);

	if (t59 != 664436266734804LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x257 = UINT32_MAX;
	static volatile int16_t x258 = INT16_MAX;
	volatile uint64_t x259 = 208863182199945118LLU;
	int8_t x260 = 6;
	uint64_t t60 = 61LLU;

	t60 = (((x257/x258)-x259)-x260);

	if (t60 != 18237880891509737568LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MIN;
	static int8_t x262 = INT8_MIN;
	uint64_t x263 = 118143383944LLU;
	uint64_t x264 = 94942LLU;

	t61 = (((x261/x262)-x263)-x264);

	if (t61 != 72057475894449050LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x265 = 0U;
	volatile int16_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t62 = 834;

	t62 = (((x265/x266)-x267)-x268);

	if (t62 != -65407) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = 1;
	uint32_t x274 = 2074982U;
	uint8_t x275 = 2U;
	int32_t x276 = INT32_MIN;
	static volatile uint32_t t63 = 15783U;

	t63 = (((x273/x274)-x275)-x276);

	if (t63 != 2147483646U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x278 = -1;
	uint32_t x279 = 39U;
	uint32_t x280 = UINT32_MAX;
	uint32_t t64 = 30410U;

	t64 = (((x277/x278)-x279)-x280);

	if (t64 != 32730U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x294 = INT32_MIN;
	int8_t x296 = INT8_MIN;

	t65 = (((x293/x294)-x295)-x296);

	if (t65 != 18446744073045054858LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = -1;
	int16_t x299 = -1;
	volatile int8_t x300 = INT8_MIN;

	t66 = (((x297/x298)-x299)-x300);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = INT16_MIN;
	int64_t x303 = INT64_MAX;
	static volatile uint8_t x304 = 0U;

	t67 = (((x301/x302)-x303)-x304);

	if (t67 != 12297829382473028950LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 377U;
	volatile uint8_t x307 = 4U;
	int16_t x308 = INT16_MAX;
	uint32_t t68 = 0U;

	t68 = (((x305/x306)-x307)-x308);

	if (t68 != 4294934525U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x313 = 7603585849813790LLU;
	uint64_t x314 = 68255665629563LLU;
	uint8_t x315 = 0U;
	uint16_t x316 = UINT16_MAX;
	volatile uint64_t t69 = 3067272910LLU;

	t69 = (((x313/x314)-x315)-x316);

	if (t69 != 18446744073709486192LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x317 = 5642244166LLU;
	int32_t x318 = 29308;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;

	t70 = (((x317/x318)-x319)-x320);

	if (t70 != 18446744069414776964LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x321 = 29U;
	int32_t x323 = -1;
	int32_t x324 = -1;
	volatile uint32_t t71 = 67U;

	t71 = (((x321/x322)-x323)-x324);

	if (t71 != 2U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = INT16_MIN;
	int64_t x330 = 27LL;
	int64_t x331 = 1152563187LL;
	static int8_t x332 = INT8_MAX;
	volatile int64_t t72 = 22341809831LL;

	t72 = (((x329/x330)-x331)-x332);

	if (t72 != -1152564527LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 3U;
	int8_t x336 = INT8_MAX;
	volatile uint64_t t73 = 27LLU;

	t73 = (((x333/x334)-x335)-x336);

	if (t73 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MAX;
	volatile int64_t t74 = 4251785LL;

	t74 = (((x337/x338)-x339)-x340);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = -80;
	volatile uint8_t x346 = UINT8_MAX;
	uint8_t x347 = UINT8_MAX;
	uint64_t x348 = 2326373LLU;
	uint64_t t75 = 802938LLU;

	t75 = (((x345/x346)-x347)-x348);

	if (t75 != 18446744073707224988LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x349 = INT8_MAX;
	uint8_t x350 = 59U;
	static uint32_t x351 = 14730U;
	uint64_t x352 = 1835189242526373529LLU;
	uint64_t t76 = 13684889LLU;

	t76 = (((x349/x350)-x351)-x352);

	if (t76 != 16611554835478130655LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = -3;
	uint64_t x354 = UINT64_MAX;
	int16_t x355 = 0;
	static int32_t x356 = -1;

	t77 = (((x353/x354)-x355)-x356);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x357 = 0U;
	uint8_t x358 = 91U;
	int32_t x359 = -17983;
	int8_t x360 = -20;
	volatile int32_t t78 = 7950;

	t78 = (((x357/x358)-x359)-x360);

	if (t78 != 18003) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MAX;
	int64_t x362 = INT64_MIN;
	static volatile int64_t t79 = -4183365478243909LL;

	t79 = (((x361/x362)-x363)-x364);

	if (t79 != -1011LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = -61048LL;
	static uint32_t x368 = 3U;
	volatile int64_t t80 = -170640998133314298LL;

	t80 = (((x365/x366)-x367)-x368);

	if (t80 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x369 = INT8_MIN;
	uint32_t x370 = 633U;
	int32_t x371 = INT32_MIN;
	int16_t x372 = INT16_MAX;
	volatile uint32_t t81 = 4067351U;

	t81 = (((x369/x370)-x371)-x372);

	if (t81 != 2154235979U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = 7030;
	int32_t x374 = -24471;

	t82 = (((x373/x374)-x375)-x376);

	if (t82 != 32896) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x378 = 236U;
	int8_t x379 = -1;
	int8_t x380 = INT8_MIN;

	t83 = (((x377/x378)-x379)-x380);

	if (t83 != 129) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x381 = UINT16_MAX;
	int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	uint64_t x384 = 414LLU;
	uint64_t t84 = 433152393046LLU;

	t84 = (((x381/x382)-x383)-x384);

	if (t84 != 18446744073709551330LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = INT8_MIN;
	static volatile uint8_t x390 = 30U;
	volatile uint64_t x391 = 63LLU;
	volatile int32_t x392 = INT32_MIN;
	uint64_t t85 = 2300224164LLU;

	t85 = (((x389/x390)-x391)-x392);

	if (t85 != 2147483581LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int16_t x394 = -1;
	volatile int32_t x395 = INT32_MIN;
	volatile int32_t x396 = INT32_MIN;
	uint32_t t86 = 6U;

	t86 = (((x393/x394)-x395)-x396);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = -1;
	static int64_t x398 = INT64_MIN;
	static int16_t x399 = 21;
	int16_t x400 = INT16_MIN;
	volatile int64_t t87 = 317LL;

	t87 = (((x397/x398)-x399)-x400);

	if (t87 != 32747LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x403 = 2393372002LLU;
	int16_t x404 = -1;
	volatile uint64_t t88 = 6903LLU;

	t88 = (((x401/x402)-x403)-x404);

	if (t88 != 18446744071316179615LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x406 = INT64_MAX;
	static uint8_t x407 = UINT8_MAX;
	int16_t x408 = -1;
	int64_t t89 = -3LL;

	t89 = (((x405/x406)-x407)-x408);

	if (t89 != -254LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x410 = INT8_MIN;
	static int8_t x411 = INT8_MIN;
	uint16_t x412 = 123U;
	volatile int32_t t90 = -68906120;

	t90 = (((x409/x410)-x411)-x412);

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = -1;
	volatile uint64_t t91 = 2LLU;

	t91 = (((x413/x414)-x415)-x416);

	if (t91 != 18339750267938546363LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x417 = 495U;
	int64_t x418 = -1LL;
	int64_t x419 = 41631863075LL;
	volatile int16_t x420 = 4290;
	int64_t t92 = -21059LL;

	t92 = (((x417/x418)-x419)-x420);

	if (t92 != -41631867860LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = 12062;
	uint16_t x422 = 7856U;
	uint32_t x423 = UINT32_MAX;
	uint32_t t93 = 198380645U;

	t93 = (((x421/x422)-x423)-x424);

	if (t93 != 3645815032U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x425 = -75480309623836154LL;
	int8_t x426 = -1;
	volatile int16_t x427 = -1;
	int64_t x428 = INT64_MAX;
	volatile int64_t t94 = -190315355258LL;

	t94 = (((x425/x426)-x427)-x428);

	if (t94 != -9147891727230939652LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 19946247LLU;
	static uint8_t x430 = UINT8_MAX;
	uint64_t t95 = 181984838252939663LLU;

	t95 = (((x429/x430)-x431)-x432);

	if (t95 != 12845218656309409693LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x433 = 26242LLU;
	int32_t x434 = -1;
	static int32_t x435 = INT32_MAX;
	volatile int8_t x436 = INT8_MAX;
	volatile uint64_t t96 = 877970228707005LLU;

	t96 = (((x433/x434)-x435)-x436);

	if (t96 != 18446744071562067842LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MIN;
	static int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MAX;
	int8_t x440 = INT8_MIN;
	static volatile int64_t t97 = 35LL;

	t97 = (((x437/x438)-x439)-x440);

	if (t97 != 4294934657LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x441 = 1540561629U;
	int16_t x442 = 13977;
	uint64_t x443 = UINT64_MAX;
	int8_t x444 = INT8_MIN;

	t98 = (((x441/x442)-x443)-x444);

	if (t98 != 110350LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x446 = -1;
	int8_t x448 = INT8_MIN;
	static uint32_t t99 = 21402633U;

	t99 = (((x445/x446)-x447)-x448);

	if (t99 != 80U) { NG(); } else { ; }
	
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

