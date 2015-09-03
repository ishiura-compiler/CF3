#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 78U;
int32_t t0 = 1;
int16_t x7 = -1;
int16_t x8 = -1;
static uint64_t x9 = 221251LLU;
int16_t x10 = INT16_MIN;
volatile int32_t x11 = -1;
static uint8_t x14 = 48U;
uint32_t x15 = UINT32_MAX;
static int32_t t3 = 9699202;
uint64_t x24 = 43364563942132342LLU;
int16_t x34 = -1;
volatile int8_t x39 = -1;
static int16_t x44 = -1;
volatile uint32_t t10 = 52716U;
uint16_t x47 = UINT16_MAX;
uint64_t x49 = 2708714100760057372LLU;
int64_t x50 = 700037929LL;
int16_t x55 = 7270;
uint64_t x70 = 13313297733LLU;
int16_t x71 = -1;
volatile int16_t x72 = -3225;
int64_t t17 = -1718328653391LL;
uint8_t x76 = 3U;
volatile int32_t t18 = 176;
uint64_t x91 = 260639692982LLU;
uint32_t x96 = 1096U;
static uint32_t x100 = 62076294U;
int16_t x102 = -1;
volatile int8_t x103 = 36;
volatile int32_t t25 = -213;
int64_t x107 = 1LL;
static int64_t x109 = INT64_MIN;
int64_t x115 = INT64_MAX;
int16_t x116 = 2228;
volatile int32_t t28 = 13;
uint16_t x117 = UINT16_MAX;
static int32_t x118 = INT32_MIN;
int32_t x121 = -7359665;
volatile int64_t x124 = 400094599416143LL;
uint8_t x134 = 2U;
uint16_t x138 = UINT16_MAX;
int32_t x139 = INT32_MAX;
volatile int32_t t34 = 30;
uint8_t x143 = 0U;
uint16_t x146 = UINT16_MAX;
volatile int64_t t37 = -616526222LL;
static int16_t x153 = 148;
int32_t x155 = -1;
int32_t t40 = -13;
int8_t x167 = -1;
uint32_t x169 = UINT32_MAX;
uint16_t x171 = UINT16_MAX;
int32_t x172 = INT32_MIN;
int32_t x174 = -44;
int32_t x177 = INT32_MIN;
static int64_t x180 = 32571182659942LL;
int8_t x182 = INT8_MAX;
static uint32_t x187 = 48637U;
static volatile int32_t x200 = 15;
int8_t x202 = -1;
int64_t t51 = 797485021180LL;
int16_t x211 = -1;
int64_t x213 = INT64_MIN;
volatile int64_t t53 = 11LL;
uint64_t x218 = 2909959LLU;
static int16_t x222 = INT16_MAX;
static int64_t t55 = 299320438174540502LL;
int16_t x232 = -1;
volatile int32_t t57 = 1843314;
int16_t x233 = INT16_MIN;
static volatile uint64_t t59 = 279LLU;
uint8_t x250 = UINT8_MAX;
static int32_t x252 = -1;
int32_t x253 = INT32_MAX;
int32_t x255 = INT32_MAX;
volatile int64_t t63 = -156919339033352LL;
int64_t x271 = INT64_MIN;
int32_t x275 = INT32_MIN;
int32_t x278 = -1;
int32_t x286 = INT32_MIN;
volatile int8_t x288 = -11;
volatile uint64_t t71 = 4906164LLU;
volatile int32_t x290 = INT32_MAX;
int32_t x291 = 460162;
int32_t x292 = INT32_MIN;
uint16_t x295 = 1667U;
static int32_t x304 = 1;
uint32_t x312 = 63751U;
uint64_t x321 = 1379925920LLU;
int64_t x329 = -1LL;
int64_t x333 = -1LL;
static int32_t x335 = -1097133;
uint8_t x341 = 47U;
volatile int64_t t85 = 75LL;
volatile uint64_t x347 = 74417041825LLU;
int64_t x356 = -1LL;
int8_t x369 = INT8_MAX;
int32_t x375 = -2664;
volatile int32_t x376 = -444672451;
int32_t t96 = 436;
uint16_t x397 = 1796U;
int64_t x399 = -1LL;


void f0(void) {
	uint64_t x2 = 425886LLU;
	uint8_t x3 = 99U;
	static int16_t x4 = INT16_MAX;

	t0 = ((x1^(x2<=x3))^x4);

	if (t0 != 32689) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int32_t x6 = -1;
	volatile int32_t t1 = 736;

	t1 = ((x5^(x6<=x7))^x8);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x12 = INT16_MAX;
	uint64_t t2 = 224121806067LLU;

	t2 = ((x9^(x10<=x11))^x12);

	if (t2 != 204733LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 0U;
	int8_t x16 = INT8_MIN;

	t3 = ((x13^(x14<=x15))^x16);

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -8;
	uint64_t x18 = 34819454LLU;
	volatile uint16_t x19 = 8415U;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -626;

	t4 = ((x17^(x18<=x19))^x20);

	if (t4 != -65529) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	static volatile int32_t x22 = INT32_MAX;
	volatile uint16_t x23 = 1824U;
	uint64_t t5 = 7935358444912253192LLU;

	t5 = ((x21^(x22<=x23))^x24);

	if (t5 != 43364563942132233LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = 405LL;
	uint32_t x26 = 2018U;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t x28 = 56;
	int64_t t6 = -1488710831557LL;

	t6 = ((x25^(x26<=x27))^x28);

	if (t6 != 429LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	int64_t x30 = -1LL;
	int32_t x31 = -64307922;
	static int8_t x32 = -17;
	int32_t t7 = 125057332;

	t7 = ((x29^(x30<=x31))^x32);

	if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t8 = 40;

	t8 = ((x33^(x34<=x35))^x36);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int32_t x38 = 0;
	int8_t x40 = 10;
	static int32_t t9 = -31847532;

	t9 = ((x37^(x38<=x39))^x40);

	if (t9 != 2147483637) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 967U;
	int16_t x42 = INT16_MAX;
	volatile int16_t x43 = INT16_MIN;

	t10 = ((x41^(x42<=x43))^x44);

	if (t10 != 4294966328U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	uint64_t x46 = UINT64_MAX;
	volatile int8_t x48 = 0;
	int32_t t11 = -98507;

	t11 = ((x45^(x46<=x47))^x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x51 = -1;
	int8_t x52 = 12;
	uint64_t t12 = 559845530665710LLU;

	t12 = ((x49^(x50<=x51))^x52);

	if (t12 != 2708714100760057360LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 1U;
	static int8_t x54 = INT8_MIN;
	volatile int16_t x56 = INT16_MAX;
	static volatile int32_t t13 = -9741081;

	t13 = ((x53^(x54<=x55))^x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	uint32_t x59 = UINT32_MAX;
	int16_t x60 = 12;
	volatile int32_t t14 = 13743;

	t14 = ((x57^(x58<=x59))^x60);

	if (t14 != -115) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 16069;
	uint16_t x62 = UINT16_MAX;
	static uint16_t x63 = 3171U;
	volatile uint8_t x64 = 1U;
	static int32_t t15 = -21042465;

	t15 = ((x61^(x62<=x63))^x64);

	if (t15 != 16068) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = INT16_MIN;
	static int8_t x66 = -1;
	int32_t x67 = INT32_MIN;
	int8_t x68 = 1;
	int32_t t16 = -7015723;

	t16 = ((x65^(x66<=x67))^x68);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;

	t17 = ((x69^(x70<=x71))^x72);

	if (t17 != 9223372036854772582LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = 1;
	int64_t x74 = INT64_MIN;
	volatile int64_t x75 = INT64_MIN;

	t18 = ((x73^(x74<=x75))^x76);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 113U;
	volatile int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	static uint64_t x80 = 180LLU;
	static volatile uint64_t t19 = 379LLU;

	t19 = ((x77^(x78<=x79))^x80);

	if (t19 != 197LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	static int64_t x82 = INT64_MIN;
	int8_t x83 = 12;
	int8_t x84 = -1;
	int32_t t20 = 4920407;

	t20 = ((x81^(x82<=x83))^x84);

	if (t20 != -255) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int8_t x86 = INT8_MIN;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = -1;

	t21 = ((x85^(x86<=x87))^x88);

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = INT8_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t22 = 3;

	t22 = ((x89^(x90<=x91))^x92);

	if (t22 != -65410) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	uint32_t x94 = 1U;
	int32_t x95 = INT32_MIN;
	static uint32_t t23 = 54U;

	t23 = ((x93^(x94<=x95))^x96);

	if (t23 != 4294966198U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static int64_t x98 = -49783975LL;
	static int8_t x99 = -1;
	static uint32_t t24 = 65233899U;

	t24 = ((x97^(x98<=x99))^x100);

	if (t24 != 4232891000U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x104 = -25;

	t25 = ((x101^(x102<=x103))^x104);

	if (t25 != 25) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	static int16_t x106 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = -29995133512LL;

	t26 = ((x105^(x106<=x107))^x108);

	if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = -1;
	int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t27 = -2859140LL;

	t27 = ((x109^(x110<=x111))^x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 6;
	uint32_t x114 = UINT32_MAX;

	t28 = ((x113^(x114<=x115))^x116);

	if (t28 != 2227) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x119 = INT64_MAX;
	static uint32_t x120 = UINT32_MAX;
	uint32_t t29 = 29U;

	t29 = ((x117^(x118<=x119))^x120);

	if (t29 != 4294901761U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x122 = INT16_MAX;
	static uint16_t x123 = 31466U;
	int64_t t30 = -777LL;

	t30 = ((x121^(x122<=x123))^x124);

	if (t30 != -400094592091648LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MIN;
	uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MIN;
	int8_t x128 = 29;
	int64_t t31 = -18LL;

	t31 = ((x125^(x126<=x127))^x128);

	if (t31 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	volatile int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 29106;

	t32 = ((x129^(x130<=x131))^x132);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 835079;
	int64_t x135 = 5LL;
	volatile uint32_t x136 = 1662963894U;
	uint32_t t33 = 4877477U;

	t33 = ((x133^(x134<=x135))^x136);

	if (t33 != 1662152368U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 497532436;
	int16_t x140 = INT16_MIN;

	t34 = ((x137^(x138<=x139))^x140);

	if (t34 != -497533419) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 13U;
	int8_t x142 = 6;
	uint32_t x144 = 485U;
	uint32_t t35 = 490538U;

	t35 = ((x141^(x142<=x143))^x144);

	if (t35 != 488U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	static volatile uint16_t x147 = UINT16_MAX;
	int64_t x148 = -1LL;
	volatile int64_t t36 = -9462LL;

	t36 = ((x145^(x146<=x147))^x148);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 97114281825LL;
	uint32_t x150 = 48745U;
	volatile int32_t x151 = 416;
	int64_t x152 = INT64_MAX;

	t37 = ((x149^(x150<=x151))^x152);

	if (t37 != 9223371939740493982LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -541766831214887LL;
	int32_t x156 = 107468655;
	int32_t t38 = -72317428;

	t38 = ((x153^(x154<=x155))^x156);

	if (t38 != 107468794) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -166LL;
	volatile uint64_t x158 = UINT64_MAX;
	int64_t x159 = INT64_MIN;
	int16_t x160 = -1;
	int64_t t39 = -34865142806324918LL;

	t39 = ((x157^(x158<=x159))^x160);

	if (t39 != 165LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	volatile int16_t x162 = -1035;
	volatile int8_t x163 = INT8_MIN;
	int32_t x164 = INT32_MIN;

	t40 = ((x161^(x162<=x163))^x164);

	if (t40 != 2147483521) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -12016722;
	int8_t x166 = 58;
	int32_t x168 = INT32_MAX;
	volatile int32_t t41 = 114163;

	t41 = ((x165^(x166<=x167))^x168);

	if (t41 != -2135466927) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x170 = 2U;
	uint32_t t42 = 110295U;

	t42 = ((x169^(x170<=x171))^x172);

	if (t42 != 2147483646U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = 8770959708LL;
	int8_t x175 = -27;
	volatile int8_t x176 = INT8_MAX;
	volatile int64_t t43 = 50622LL;

	t43 = ((x173^(x174<=x175))^x176);

	if (t43 != 8770959650LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	volatile uint32_t x179 = UINT32_MAX;
	int64_t t44 = -19LL;

	t44 = ((x177^(x178<=x179))^x180);

	if (t44 != -32572733802137LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 749U;
	uint32_t x183 = 84U;
	int8_t x184 = INT8_MIN;
	int32_t t45 = -16929;

	t45 = ((x181^(x182<=x183))^x184);

	if (t45 != -659) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 94123582U;
	uint64_t x186 = 480036106268523281LLU;
	uint32_t x188 = 15U;
	volatile uint32_t t46 = 430U;

	t46 = ((x185^(x186<=x187))^x188);

	if (t46 != 94123569U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = -447;
	volatile int64_t x191 = -1LL;
	uint16_t x192 = UINT16_MAX;
	volatile int64_t t47 = 1035191594799LL;

	t47 = ((x189^(x190<=x191))^x192);

	if (t47 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 425603607655868428LL;
	static int32_t x194 = INT32_MIN;
	static uint16_t x195 = 18U;
	int64_t x196 = INT64_MAX;
	int64_t t48 = 4158974273200503LL;

	t48 = ((x193^(x194<=x195))^x196);

	if (t48 != 8797768429198907378LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = -1;
	int8_t x199 = -1;
	static volatile int32_t t49 = 48078;

	t49 = ((x197^(x198<=x199))^x200);

	if (t49 != 2147483633) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -1552280283895341LL;
	int32_t x203 = 380;
	uint8_t x204 = 3U;
	int64_t t50 = 0LL;

	t50 = ((x201^(x202<=x203))^x204);

	if (t50 != -1552280283895343LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = -1;
	uint16_t x206 = 984U;
	uint32_t x207 = UINT32_MAX;
	int64_t x208 = 1995579782154857190LL;

	t51 = ((x205^(x206<=x207))^x208);

	if (t51 != -1995579782154857192LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = 9;
	int64_t x210 = INT64_MIN;
	uint8_t x212 = 56U;
	int32_t t52 = 147059402;

	t52 = ((x209^(x210<=x211))^x212);

	if (t52 != 48) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x214 = INT16_MAX;
	int32_t x215 = 28;
	int32_t x216 = 127;

	t53 = ((x213^(x214<=x215))^x216);

	if (t53 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -578390666350663686LL;
	int64_t x219 = 1934108967642719LL;
	int16_t x220 = -4;
	volatile int64_t t54 = 72214415LL;

	t54 = ((x217^(x218<=x219))^x220);

	if (t54 != 578390666350663687LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	static uint16_t x223 = UINT16_MAX;
	int8_t x224 = 51;

	t55 = ((x221^(x222<=x223))^x224);

	if (t55 != 9223372036854775757LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -16486842;
	int8_t x226 = 1;
	static int8_t x227 = 17;
	volatile int32_t x228 = 7;
	int32_t t56 = 249;

	t56 = ((x225^(x226<=x227))^x228);

	if (t56 != -16486848) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int8_t x230 = INT8_MAX;
	int64_t x231 = 381172LL;

	t57 = ((x229^(x230<=x231))^x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 570LLU;
	int8_t x235 = -1;
	uint32_t x236 = 36916U;
	static uint32_t t58 = 585U;

	t58 = ((x233^(x234<=x235))^x236);

	if (t58 != 4294905909U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -2152105480346561113LL;
	int8_t x238 = INT8_MIN;
	int64_t x239 = -1LL;
	uint64_t x240 = 3243947LLU;

	t59 = ((x237^(x238<=x239))^x240);

	if (t59 != 16294638593366092301LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	static volatile int8_t x242 = 21;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 1U;
	static uint32_t t60 = 21096870U;

	t60 = ((x241^(x242<=x243))^x244);

	if (t60 != 254U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 1769U;
	int16_t x246 = INT16_MIN;
	uint8_t x247 = 14U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 1;

	t61 = ((x245^(x246<=x247))^x248);

	if (t61 != -2147481880) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	volatile uint32_t x251 = 49U;
	int32_t t62 = 51070409;

	t62 = ((x249^(x250<=x251))^x252);

	if (t62 != -256) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = UINT64_MAX;
	int64_t x256 = -130990927151655LL;

	t63 = ((x253^(x254<=x255))^x256);

	if (t63 != -130991340486106LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	static int32_t x258 = INT32_MAX;
	volatile int64_t x259 = INT64_MIN;
	static volatile uint64_t x260 = UINT64_MAX;
	uint64_t t64 = 27880849LLU;

	t64 = ((x257^(x258<=x259))^x260);

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 58LLU;
	int64_t x262 = INT64_MIN;
	static int64_t x263 = INT64_MIN;
	uint16_t x264 = 114U;
	uint64_t t65 = 44365202985891978LLU;

	t65 = ((x261^(x262<=x263))^x264);

	if (t65 != 73LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MIN;
	uint64_t x266 = 0LLU;
	uint8_t x267 = 8U;
	static volatile uint8_t x268 = 1U;
	volatile int64_t t66 = INT64_MIN;

	t66 = ((x265^(x266<=x267))^x268);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	uint32_t x270 = 222179U;
	static uint8_t x272 = 57U;
	uint64_t t67 = 994754LLU;

	t67 = ((x269^(x270<=x271))^x272);

	if (t67 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	volatile int8_t x274 = 1;
	volatile int8_t x276 = -1;
	int64_t t68 = INT64_MIN;

	t68 = ((x273^(x274<=x275))^x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = 0;
	static int8_t x279 = -1;
	uint64_t x280 = UINT64_MAX;
	uint64_t t69 = 3658LLU;

	t69 = ((x277^(x278<=x279))^x280);

	if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int32_t x282 = INT32_MIN;
	volatile uint32_t x283 = 80U;
	int16_t x284 = 0;
	volatile int32_t t70 = 3;

	t70 = ((x281^(x282<=x283))^x284);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x287 = INT16_MIN;

	t71 = ((x285^(x286<=x287))^x288);

	if (t71 != 11LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = 111806620258LL;
	int64_t t72 = 205652LL;

	t72 = ((x289^(x290<=x291))^x292);

	if (t72 != -113679162782LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	static int16_t x296 = INT16_MAX;
	static volatile int32_t t73 = -15;

	t73 = ((x293^(x294<=x295))^x296);

	if (t73 != -32642) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x297 = INT16_MIN;
	int32_t x298 = -32120;
	uint32_t x299 = 9669U;
	int16_t x300 = INT16_MIN;
	int32_t t74 = 24605;

	t74 = ((x297^(x298<=x299))^x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	static volatile int64_t x302 = -1LL;
	static int32_t x303 = 7253364;
	volatile int32_t t75 = 379;

	t75 = ((x301^(x302<=x303))^x304);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 55862U;
	int64_t x306 = INT64_MIN;
	uint32_t x307 = 3U;
	uint16_t x308 = UINT16_MAX;
	static uint32_t t76 = 5U;

	t76 = ((x305^(x306<=x307))^x308);

	if (t76 != 9672U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 2U;
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	uint32_t t77 = 8355U;

	t77 = ((x309^(x310<=x311))^x312);

	if (t77 != 63748U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int64_t x314 = 854124251666466LL;
	int32_t x315 = -1;
	uint8_t x316 = 3U;
	int32_t t78 = 1641;

	t78 = ((x313^(x314<=x315))^x316);

	if (t78 != 65532) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = -7629;
	int8_t x318 = INT8_MIN;
	static int32_t x319 = INT32_MIN;
	volatile int16_t x320 = INT16_MIN;
	int32_t t79 = 2991168;

	t79 = ((x317^(x318<=x319))^x320);

	if (t79 != 25139) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MIN;
	volatile int8_t x323 = -1;
	volatile int8_t x324 = INT8_MIN;
	uint64_t t80 = 6539647367296LLU;

	t80 = ((x321^(x322<=x323))^x324);

	if (t80 != 18446744072329625633LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int8_t x326 = INT8_MAX;
	static uint64_t x327 = 27181488353966LLU;
	volatile uint32_t x328 = UINT32_MAX;
	uint32_t t81 = 0U;

	t81 = ((x325^(x326<=x327))^x328);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = 1401U;
	uint8_t x331 = 126U;
	int32_t x332 = 1371398;
	int64_t t82 = 2397310126LL;

	t82 = ((x329^(x330<=x331))^x332);

	if (t82 != -1371399LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 4U;
	static int8_t x336 = INT8_MIN;
	volatile int64_t t83 = 85793365LL;

	t83 = ((x333^(x334<=x335))^x336);

	if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -19;
	int8_t x338 = INT8_MIN;
	int8_t x339 = INT8_MIN;
	uint16_t x340 = 0U;
	static volatile int32_t t84 = 0;

	t84 = ((x337^(x338<=x339))^x340);

	if (t84 != -20) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x342 = INT32_MIN;
	int64_t x343 = 3098LL;
	static int64_t x344 = -1LL;

	t85 = ((x341^(x342<=x343))^x344);

	if (t85 != -47LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int16_t x346 = INT16_MIN;
	static int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 138484142;

	t86 = ((x345^(x346<=x347))^x348);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int8_t x350 = 6;
	static int8_t x351 = INT8_MIN;
	uint8_t x352 = 11U;
	volatile int32_t t87 = -11;

	t87 = ((x349^(x350<=x351))^x352);

	if (t87 != -12) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -3519;
	int64_t x354 = INT64_MIN;
	static int32_t x355 = INT32_MIN;
	volatile int64_t t88 = 7735846841738610LL;

	t88 = ((x353^(x354<=x355))^x356);

	if (t88 != 3519LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = -10;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	static int8_t x360 = 6;
	static int32_t t89 = -7;

	t89 = ((x357^(x358<=x359))^x360);

	if (t89 != -15) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MIN;
	static int16_t x362 = 1;
	int32_t x363 = INT32_MIN;
	volatile int64_t x364 = INT64_MIN;
	int64_t t90 = -16302085027751027LL;

	t90 = ((x361^(x362<=x363))^x364);

	if (t90 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 0;
	volatile int16_t x366 = 0;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 346U;
	int32_t t91 = -8180;

	t91 = ((x365^(x366<=x367))^x368);

	if (t91 != 346) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = INT8_MAX;
	int32_t x371 = 3708;
	uint64_t x372 = 10698LLU;
	uint64_t t92 = 128440976763LLU;

	t92 = ((x369^(x370<=x371))^x372);

	if (t92 != 10676LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1950;
	int8_t x374 = INT8_MIN;
	static volatile int32_t t93 = 1;

	t93 = ((x373^(x374<=x375))^x376);

	if (t93 != 444673631) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	static int8_t x378 = -1;
	uint16_t x379 = 2U;
	int8_t x380 = 1;
	volatile int64_t t94 = INT64_MIN;

	t94 = ((x377^(x378<=x379))^x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -3838;
	volatile int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 19;

	t95 = ((x381^(x382<=x383))^x384);

	if (t95 != 28931) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 60U;
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MAX;
	volatile int16_t x388 = -16;

	t96 = ((x385^(x386<=x387))^x388);

	if (t96 != -51) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -2LL;
	int64_t x390 = INT64_MIN;
	volatile int32_t x391 = -31217177;
	int64_t x392 = INT64_MIN;
	int64_t t97 = INT64_MAX;

	t97 = ((x389^(x390<=x391))^x392);

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	static uint8_t x394 = 0U;
	uint16_t x395 = 116U;
	volatile int16_t x396 = -1;
	int32_t t98 = -1054891504;

	t98 = ((x393^(x394<=x395))^x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x398 = 4103283939407696159LLU;
	volatile uint64_t x400 = UINT64_MAX;
	uint64_t t99 = 5172146284LLU;

	t99 = ((x397^(x398<=x399))^x400);

	if (t99 != 18446744073709549818LLU) { NG(); } else { ; }
	
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

